#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    http_request = new httpUtill();

    connect(this->ui->pushButton_Login,SIGNAL(clicked()),this,SLOT(sendMessages()));
    connect(this->ui->pushButton_Clear,SIGNAL(clicked()),this,SLOT(clearMSG()));
    connect(this->ui->pushButton_register, SIGNAL(clicked()),this,SLOT(displayRegister()));
}

LoginWindow::~LoginWindow()
{
    http_request->~httpUtill();
    delete ui;
}
/**
 * @brief LoginWindow::displayRegister chance register UI
 */
void LoginWindow::displayRegister()
{
    RegisterWindow *registerui = new RegisterWindow();
    registerui->show();
}

/**
 * @brief MainWindow::clearMSG 清除登录信息
 */
void LoginWindow::clearMSG()
{
    this->ui->lineEdit_Email->setText("");
    this->ui->lineEdit_Passwd->setText("");
}
/**
 * @brief MainWindow::sendMessages 向服务器段发送数据包进行认证操作
 */
void LoginWindow::sendMessages()
{
    QString header = "action=login&";
    QString params = "account=" + this->ui->lineEdit_Email->text() + "&password=" + this->ui->lineEdit_Passwd->text();
    //    qDebug() << "params<<" << params;

    QString response = http_request->http_Post("http://112.74.49.223/zwz/hw_qq/api.php" , header + params);
    qDebug() << response;
    QStringList strlist = response.split("#");
    //    qDebug()<< strlist.at(1) << "#" << strlist.at(2) << strlist.at(3);
    if(strlist.at(0) == "1")
    {
        qDebug() << "您已经成功登录.";
        QMessageBox::information(NULL, "信息提示", "您已经成功登录.",
                                 QMessageBox::Yes | QMessageBox::No,
                                 QMessageBox::Yes);

        FriendWindow *friendUi = new FriendWindow();
        friendUi->receiveUserInfo(response);
        friendUi->show();

    } else if (strlist.at(0) == "0") {
        qDebug() << "登录失败！";
        QMessageBox::information(NULL, "信息提示",
                                 "登录失败！您的登录邮箱或者密码不正确.",
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

