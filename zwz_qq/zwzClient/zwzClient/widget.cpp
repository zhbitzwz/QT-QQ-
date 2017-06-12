#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::tcpServerConnect()
{
    m_tcpsocket = new QTcpSocket(this);
    m_tcpsocket->abort();
    m_tcpsocket->connectToHost(QHostAddress::LocalHost,6666);
    connect(m_tcpsocket,SIGNAL(readyRead()),
            this,SLOT(readMessage()));
    qDebug() << "connect success";
//    m_tcpsocket->connectToHost("localhost",6666);
}
void Widget::sendMessage()
{
     QString string = ui->le_rec->text() + "|" + ui->label_lid->text() + "|" + ui->lineEdit->text();

     QByteArray message;
     QDataStream out(&message,QIODevice::WriteOnly);
     out.setVersion(QDataStream::Qt_5_4);
     out<<string;
     qDebug() << "cli string" << string;
     m_tcpsocket->write(message);
     //lineEdit->clear();
}
void Widget::readMessage()
{
    QDataStream in(m_tcpsocket);
    in.setVersion(QDataStream::Qt_5_4);

    QString greeting;
    in >> greeting;
    QStringList info = greeting.split("|");
    qDebug() << "info[0]" << info[0];
    qDebug() << "info[1]" << info[1];
    qDebug() << "info[2]" << info[2];
    if(ui->label_lid->text() == info[0])
    {
      ui->textBrowser->append(tr("'%1'对你说: '%2'").arg(info[1]).arg(info[2]));
    }
    if(info[0] == "group")
    {
        ui->textBrowser->append(tr("server 说 : '%1'").arg(info[1]));
    }
    info.clear();
}
void Widget::on_pushButton_clicked()
{
    tcpServerConnect();
}

void Widget::on_pushButton_2_clicked()
{
    sendMessage();
    ui->lineEdit->clear();
}
void Widget::receiveUID(QString uid)
{
    ui->label_lid->setText(uid);
}
