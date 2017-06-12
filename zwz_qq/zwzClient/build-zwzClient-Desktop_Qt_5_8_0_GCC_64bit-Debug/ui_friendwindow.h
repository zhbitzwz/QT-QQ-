/********************************************************************************
** Form generated from reading UI file 'friendwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDWINDOW_H
#define UI_FRIENDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FriendWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *userinfo_label;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *add_pushButton;
    QPushButton *chat_pushButton_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FriendWindow)
    {
        if (FriendWindow->objectName().isEmpty())
            FriendWindow->setObjectName(QStringLiteral("FriendWindow"));
        FriendWindow->resize(289, 475);
        centralwidget = new QWidget(FriendWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        userinfo_label = new QLabel(centralwidget);
        userinfo_label->setObjectName(QStringLiteral("userinfo_label"));

        verticalLayout->addWidget(userinfo_label);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        add_pushButton = new QPushButton(centralwidget);
        add_pushButton->setObjectName(QStringLiteral("add_pushButton"));

        horizontalLayout->addWidget(add_pushButton);

        chat_pushButton_2 = new QPushButton(centralwidget);
        chat_pushButton_2->setObjectName(QStringLiteral("chat_pushButton_2"));

        horizontalLayout->addWidget(chat_pushButton_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        FriendWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FriendWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 289, 19));
        FriendWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(FriendWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        FriendWindow->setStatusBar(statusbar);

        retranslateUi(FriendWindow);

        QMetaObject::connectSlotsByName(FriendWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FriendWindow)
    {
        FriendWindow->setWindowTitle(QApplication::translate("FriendWindow", "MainWindow", Q_NULLPTR));
        userinfo_label->setText(QApplication::translate("FriendWindow", "TextLabel", Q_NULLPTR));
        add_pushButton->setText(QApplication::translate("FriendWindow", "addFriend", Q_NULLPTR));
        chat_pushButton_2->setText(QApplication::translate("FriendWindow", "chat", Q_NULLPTR));
        pushButton->setText(QApplication::translate("FriendWindow", "refresh", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FriendWindow: public Ui_FriendWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDWINDOW_H
