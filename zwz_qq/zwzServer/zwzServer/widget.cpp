#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    m_tcpserver = new QTcpServer(this);
    m_tcpsocket = new QTcpSocket(this);
    socket_list = new QList<QTcpSocket*>;
    m_tcpserver->listen(QHostAddress::Any,6666);
//    connect(m_tcpserver,SIGNAL(newConnection()),
//            this,SLOT(newConnect()));
    connect(m_tcpserver,SIGNAL(newConnection()),
            this,SLOT(newConnect()));
}

Widget::~Widget()
{
    delete ui;
}
void Widget::newConnect()
{

    m_tcpsocket = m_tcpserver->nextPendingConnection();

    socket_list->append(m_tcpsocket);

    connect(m_tcpsocket,SIGNAL(readyRead()),
            this,SLOT(readMessage()));
//    connect(m_tcpsocket,SIGNAL(disconnected()),
//                m_tcpsocket,SLOT(deleteLater()));

}
void Widget::readMessage()
{
    qDebug() << "server message" << message;
    for(int i = 0;i < socket_list->length();i ++)
    {
        qDebug() << "QDataStream " ;
        QDataStream in(socket_list->at(i));
        in.setVersion (QDataStream::Qt_5_4);
        in >> message;
        if(!(message.isEmpty()))
        {
            qDebug() << "break " ;
            break;
        }
    }
    ui->textBrowser->append(tr("reveived client message: '%1'").arg(message));
    sendMessage(message);
}

void Widget::sendMessage(QString infomation)
{
    QString str = infomation;
    QByteArray message;
    QDataStream out(&message,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_4);
    out<<str;
    //m_tcpsocket->write(message);
    for (int i = 0;i < socket_list->length();i ++)
    {
        socket_list->at(i)->write(message);
    }
}

void Widget::on_pushButton_clicked()
{
    QString ser = "group";
    string = ser + "|" + ui->lineEdit->text() + "|" + "0";
    sendMessage(string);
    ui->lineEdit->clear();
}

