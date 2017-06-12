#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "registerwindow.h"
#include "httputill.h"
#include "friendwindow.h"
#include <QVariant>
#include <QDebug>
#include <QMessageBox>

#include <QStringList>
#include <QTextStream>

namespace Ui {
class LoginWindow;
class RegisterWindow;
class FriendWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

private:
    Ui::LoginWindow *ui;
    httpUtill *http_request;
private slots:
    void sendMessages();
    void clearMSG();
    void displayRegister();

};

#endif // LOGINWINDOW_H
