#include "friendwindow.h"
#include "ui_friendwindow.h"
#include "loginwindow.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QDebug>
FriendWindow::FriendWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FriendWindow)
{
    ui->setupUi(this);
}

FriendWindow::~FriendWindow()
{
    delete ui;
}
void FriendWindow::refreshFriendInfo(QString userID)
{
    ui->tableWidget->setColumnCount(2);
    QStringList m_Header;
    m_Header << QString("friendInfo");
    ui->tableWidget->setHorizontalHeaderLabels(m_Header);

    //qDebug() << "in friendUI<<" << ui->userinfo_label->text();
    //QStringList strfid = userInfo.split("#");
    QString header = "action=listfriend&";
    QString params = "uid=" + userID;
    qDebug() << "friend params<<" << params;

    QString response = http_request->http_Post("http://112.74.49.223/zwz/hw_qq/api.php" , header + params);
    qDebug() <<"listFriend=="<< response;
    if(response == "0")
    {
        ui->tableWidget->insertRow(0);
        ui->tableWidget->setItem(0,0,new QTableWidgetItem("null"));
        ui->tableWidget->setItem(0,1,new QTableWidgetItem("null"));
    } else {
        QStringList strlist = response.split("#");
        for(int i = 0;i < strlist.size() - 1; i++)
        {
            ui->tableWidget->insertRow(i);
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(QIcon(":/img/1.bmp")," "));
            ui->tableWidget->setItem(i,1,new QTableWidgetItem(strlist[i]));
        }
    }
}

void FriendWindow::receiveUserInfo(QString userInfo)
{
    ui->userinfo_label->setText(userInfo);
    QStringList strfid = userInfo.split("#");
    this->refreshFriendInfo(strfid.at(1));
}

void FriendWindow::on_chat_pushButton_2_clicked()
{
    QString temp = ui->userinfo_label->text();
    QStringList struid = temp.split("#");
    qDebug() << "test" << struid.at(1);
    Widget *widgetUI = new Widget();
    widgetUI->receiveUID(struid.at(1));
    widgetUI->show();
}

void FriendWindow::on_add_pushButton_clicked()
{
    AddFriendWindow *addUI = new AddFriendWindow();
    addUI->show();
}

void FriendWindow::on_pushButton_clicked()
{
    ui->tableWidget->clear();

    QString temp = ui->userinfo_label->text();
    QStringList strfid = temp.split("#");
    qDebug() << "test" << strfid.at(1);
    this->refreshFriendInfo(strfid.at(1));
}
