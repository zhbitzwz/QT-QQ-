/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_Passwd;
    QLineEdit *lineEdit_Passwd;
    QLineEdit *lineEdit_Email;
    QLabel *label_Email;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_Login;
    QPushButton *pushButton_Clear;
    QPushButton *pushButton_register;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(400, 300);
        centralWidget = new QWidget(LoginWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_Passwd = new QLabel(centralWidget);
        label_Passwd->setObjectName(QStringLiteral("label_Passwd"));
        label_Passwd->setGeometry(QRect(90, 101, 71, 16));
        lineEdit_Passwd = new QLineEdit(centralWidget);
        lineEdit_Passwd->setObjectName(QStringLiteral("lineEdit_Passwd"));
        lineEdit_Passwd->setGeometry(QRect(170, 100, 151, 20));
        lineEdit_Passwd->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_Passwd->setAcceptDrops(false);
        lineEdit_Passwd->setEchoMode(QLineEdit::Password);
        lineEdit_Email = new QLineEdit(centralWidget);
        lineEdit_Email->setObjectName(QStringLiteral("lineEdit_Email"));
        lineEdit_Email->setGeometry(QRect(170, 70, 151, 20));
        label_Email = new QLabel(centralWidget);
        label_Email->setObjectName(QStringLiteral("label_Email"));
        label_Email->setGeometry(QRect(90, 71, 71, 16));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 160, 254, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Login = new QPushButton(layoutWidget);
        pushButton_Login->setObjectName(QStringLiteral("pushButton_Login"));

        horizontalLayout->addWidget(pushButton_Login);

        pushButton_Clear = new QPushButton(layoutWidget);
        pushButton_Clear->setObjectName(QStringLiteral("pushButton_Clear"));

        horizontalLayout->addWidget(pushButton_Clear);

        pushButton_register = new QPushButton(layoutWidget);
        pushButton_register->setObjectName(QStringLiteral("pushButton_register"));

        horizontalLayout->addWidget(pushButton_register);

        LoginWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(LoginWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 19));
        LoginWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LoginWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LoginWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LoginWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LoginWindow->setStatusBar(statusBar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "LoginWindow", Q_NULLPTR));
        label_Passwd->setText(QApplication::translate("LoginWindow", "\350\256\244\350\257\201\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_Email->setText(QApplication::translate("LoginWindow", "\347\231\273\345\275\225\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        pushButton_Login->setText(QApplication::translate("LoginWindow", "\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_Clear->setText(QApplication::translate("LoginWindow", "\351\207\215\347\275\256", Q_NULLPTR));
        pushButton_register->setText(QApplication::translate("LoginWindow", "\346\263\250\345\206\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
