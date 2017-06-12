/********************************************************************************
** Form generated from reading UI file 'addfriendwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFRIENDWINDOW_H
#define UI_ADDFRIENDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddFriendWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonadd;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_uid;
    QLineEdit *lineEdituid;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_fid;
    QLineEdit *lineEdit_fid;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddFriendWindow)
    {
        if (AddFriendWindow->objectName().isEmpty())
            AddFriendWindow->setObjectName(QStringLiteral("AddFriendWindow"));
        AddFriendWindow->resize(192, 255);
        centralwidget = new QWidget(AddFriendWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButtonadd = new QPushButton(centralwidget);
        pushButtonadd->setObjectName(QStringLiteral("pushButtonadd"));
        pushButtonadd->setGeometry(QRect(50, 120, 80, 22));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 10, 183, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_uid = new QLabel(widget);
        label_uid->setObjectName(QStringLiteral("label_uid"));

        horizontalLayout->addWidget(label_uid);

        lineEdituid = new QLineEdit(widget);
        lineEdituid->setObjectName(QStringLiteral("lineEdituid"));

        horizontalLayout->addWidget(lineEdituid);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(0, 50, 185, 24));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_fid = new QLabel(widget1);
        label_fid->setObjectName(QStringLiteral("label_fid"));

        horizontalLayout_2->addWidget(label_fid);

        lineEdit_fid = new QLineEdit(widget1);
        lineEdit_fid->setObjectName(QStringLiteral("lineEdit_fid"));

        horizontalLayout_2->addWidget(lineEdit_fid);

        AddFriendWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AddFriendWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 192, 19));
        AddFriendWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AddFriendWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AddFriendWindow->setStatusBar(statusbar);

        retranslateUi(AddFriendWindow);

        QMetaObject::connectSlotsByName(AddFriendWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AddFriendWindow)
    {
        AddFriendWindow->setWindowTitle(QApplication::translate("AddFriendWindow", "MainWindow", Q_NULLPTR));
        pushButtonadd->setText(QApplication::translate("AddFriendWindow", "add", Q_NULLPTR));
        label_uid->setText(QApplication::translate("AddFriendWindow", "you UID:", Q_NULLPTR));
        label_fid->setText(QApplication::translate("AddFriendWindow", "friendID:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddFriendWindow: public Ui_AddFriendWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFRIENDWINDOW_H
