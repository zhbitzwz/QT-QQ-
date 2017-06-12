#include "addfriendwindow.h"
#include "ui_addfriendwindow.h"

AddFriendWindow::AddFriendWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddFriendWindow)
{
    ui->setupUi(this);
}

AddFriendWindow::~AddFriendWindow()
{
    delete ui;
}

void AddFriendWindow::on_pushButtonadd_clicked()
{
    QString header = "action=addfriend&";
    QString params = "uid=" + this->ui->lineEdituid->text() + "&fid=" + this->ui->lineEdit_fid->text();
    //    qDebug() << "params<<" << params;

    QString response = http_request->http_Post("http://112.74.49.223/zwz/hw_qq/api.php" , header + params);
    qDebug() << response;
    QStringList strlist = response.split("#");
    if(strlist.at(0) == "1")
    {
        qDebug() << "您已经成功添加好友.";
        QMessageBox::information(NULL, "信息提示", "您已经成功添加好友.",
                                 QMessageBox::Yes | QMessageBox::No,
                                 QMessageBox::Yes);

    } else if (strlist.at(0) == "0") {
        qDebug() << "添加好友失败！";
        QMessageBox::information(NULL, "信息提示",
                                 "添加好友uid或fid不正确",
                                 QMessageBox::Yes | QMessageBox::No,
                                 QMessageBox::Yes);
    } else {
        qDebug() << "error！";
        QMessageBox::information(NULL, "信息提示",
                                 "error.",
                                 QMessageBox::Yes | QMessageBox::No,
                                 QMessageBox::Yes);
    }
}
