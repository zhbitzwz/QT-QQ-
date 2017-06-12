#ifndef ADDFRIENDWINDOW_H
#define ADDFRIENDWINDOW_H

#include <QMainWindow>
#include "httputill.h"

#include <QVariant>
#include <QDebug>
#include <QMessageBox>

#include <QStringList>
#include <QTextStream>


namespace Ui {
class AddFriendWindow;
}

class AddFriendWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddFriendWindow(QWidget *parent = 0);
    ~AddFriendWindow();

private slots:
    void on_pushButtonadd_clicked();

private:
    Ui::AddFriendWindow *ui;
    httpUtill *http_request;
};

#endif // ADDFRIENDWINDOW_H
