#ifndef FRIENDWINDOW_H
#define FRIENDWINDOW_H

#include <QMainWindow>
#include "widget.h"
#include "addfriendwindow.h"
#include <QString>
#include "httputill.h"
namespace Ui {
class FriendWindow;
class Widget;
class AddFriendWindow;
}

class FriendWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FriendWindow(QWidget *parent = 0);
    ~FriendWindow();
    void receiveUserInfo(QString userInfo);
    void refreshFriendInfo(QString userID);
    //void setUserInfo(QString userInfo);
    //QString getUserInfo();

private slots:
    void on_chat_pushButton_2_clicked();
    void on_add_pushButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::FriendWindow *ui;
    httpUtill *http_request;
    //QString userInfo;
};

#endif // FRIENDWINDOW_H
