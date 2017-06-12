#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H

#include <QDialog>
#include <QVariant>
#include <QDebug>
#include <QMessageBox>
#include "httputill.h"
namespace Ui {
class RegisterWindow;
}

class RegisterWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterWindow(QWidget *parent = 0);
    ~RegisterWindow();

    //（输入的）个人信息的格式是否符合要求
    bool informationIsAllow();

    //（输入的）密码的格式是否符合要求
    bool passwordIsAllow();

private:
    Ui::RegisterWindow *ui;
    httpUtill *http_request;

public slots:
    void sendMessages();
    void clickedQuitButton();
};

#endif // REGISTERWINDOW_H
