#include "registerwindow.h"
#include "ui_registerwindow.h"
#include <QDebug>
RegisterWindow::RegisterWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    http_request = new httpUtill();

    connect(this->ui->pushButton_ok, SIGNAL(clicked()),
            this, SLOT(sendMessages()));
    connect(this->ui->pushButton_cancel, SIGNAL(clicked()),
            this, SLOT(clickedQuitButton()));
}

RegisterWindow::~RegisterWindow()
{
    http_request->~httpUtill();
    delete ui;
}

/**
 * @brief MainWindow::sendMessages 向服务器段发送数据包进行认证操作
 */
void RegisterWindow::sendMessages()
{
    if(!informationIsAllow() || !passwordIsAllow())
        return;
    QString header = "action=reg&";
    QString params = "account=" + this->ui->lineEdit_account->text()
            + "&password=" + this->ui->lineEdit_Passwd->text()
            + "&nickname=" + this->ui->lineEdit_user_name->text();
    //    QString msg = "Reg#" + this->ui->lineEdit_account->text()
    //            + "#" + this->ui->lineEdit_Passwd->text()
    //            + "#" + this->ui->lineEdit_user_name->text();
    //像服务器段发送数据
    //    qDebug() << "params<<" << params;

    QString response = http_request->http_Post("http://112.74.49.223/zwz/hw_qq/api.php" , header + params);
    qDebug() << response;
    QStringList strlist = response.split("#");
    //    qDebug()<< strlist.at(1) << "#" << strlist.at(2) << strlist.at(3);
    if(strlist.at(0) == "1")
    {
        qDebug() << "您已经成功注册.";
        QMessageBox::information(NULL, "信息提示", "您已经成功注册.",
                                 QMessageBox::Yes | QMessageBox::No,
                                 QMessageBox::Yes);
    } else if (strlist.at(0) == "0") {
        qDebug() << strlist.at(1);
        QMessageBox::information(NULL, "信息提示",
                                 "注册失败！请查看后台LOG.",
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

void RegisterWindow::clickedQuitButton()
{
    close();
}

bool RegisterWindow::informationIsAllow()
{
    QRegExp regExp;
    //regExp.setPattern("^[A-Za-z][A-Za-z0-9]{5,19}$");
    //if(!regExp.exactMatch(this->ui->accountLineEdit->text()))
    if(this->ui->lineEdit_account->text().isEmpty()
            || this->ui->lineEdit_account->text().size() > 40)
    {
        //QMessageBox::critical(this, "Error", "帐号格式错误，请再试一遍");
        QMessageBox::critical(this, tr("Error"),
                              tr("Account's Format is wrong. Please try again"));
        return false;
    }

    if(this->ui->lineEdit_user_name->text().isEmpty()
            || this->ui->lineEdit_user_name->text().size() > 40)
    {
        //QMessageBox::critical(this, "Error", "呢称格式错误，请再试一遍");
        QMessageBox::critical(this, tr("Error"),
                              tr("Nickname's Format is wrong. Please try again"));
        return false;
    }
    //regExp.setPattern("^\\d{0,15}$");
    //regExp.setPattern("^\\d{4}-\\d{1,2}-\\d{1,2}$");
    return true;
}


bool RegisterWindow::passwordIsAllow()
{
    QRegExp regExp;
    regExp.setPattern("^[A-Za-z0-9]{6,20}$");
    if(!regExp.exactMatch(this->ui->lineEdit_Passwd->text()))
    {
        //QMessageBox::critical(this, "Error", "密码格式错误，请再试一遍");
        QMessageBox::critical(this, tr("Error"),
                              tr("password's Format is wrong. Please try again"));
        return false;
    }

    if(this->ui->lineEdit_Passwd->text() != this->ui->lineEdit_Passwd_2->text())
    {
        //QMessageBox::critical(this, "Error", "两次输入密码不相同，请再试一遍");
        QMessageBox::critical(this, tr("Error"),
                              tr("The two passwords are not the same. Please try again"));
        return false;
    }
    return true;
}

