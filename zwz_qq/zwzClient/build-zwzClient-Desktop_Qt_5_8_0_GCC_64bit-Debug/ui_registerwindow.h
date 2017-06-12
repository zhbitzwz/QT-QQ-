/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_ok;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_user_name;
    QLineEdit *lineEdit_user_name;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_cofirm_Passwd;
    QLineEdit *lineEdit_Passwd_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_Passwd;
    QLineEdit *lineEdit_Passwd;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_account;
    QLineEdit *lineEdit_account;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName(QStringLiteral("RegisterWindow"));
        RegisterWindow->resize(400, 300);
        layoutWidget = new QWidget(RegisterWindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 160, 168, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_cancel = new QPushButton(layoutWidget);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));

        horizontalLayout->addWidget(pushButton_cancel);

        pushButton_ok = new QPushButton(layoutWidget);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));

        horizontalLayout->addWidget(pushButton_ok);

        layoutWidget1 = new QWidget(RegisterWindow);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, 100, 198, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_user_name = new QLabel(layoutWidget1);
        label_user_name->setObjectName(QStringLiteral("label_user_name"));

        horizontalLayout_2->addWidget(label_user_name);

        lineEdit_user_name = new QLineEdit(layoutWidget1);
        lineEdit_user_name->setObjectName(QStringLiteral("lineEdit_user_name"));

        horizontalLayout_2->addWidget(lineEdit_user_name);

        layoutWidget2 = new QWidget(RegisterWindow);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(60, 70, 198, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_cofirm_Passwd = new QLabel(layoutWidget2);
        label_cofirm_Passwd->setObjectName(QStringLiteral("label_cofirm_Passwd"));

        horizontalLayout_3->addWidget(label_cofirm_Passwd);

        lineEdit_Passwd_2 = new QLineEdit(layoutWidget2);
        lineEdit_Passwd_2->setObjectName(QStringLiteral("lineEdit_Passwd_2"));
        lineEdit_Passwd_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_Passwd_2->setAcceptDrops(false);
        lineEdit_Passwd_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(lineEdit_Passwd_2);

        layoutWidget3 = new QWidget(RegisterWindow);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(60, 39, 198, 24));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_Passwd = new QLabel(layoutWidget3);
        label_Passwd->setObjectName(QStringLiteral("label_Passwd"));

        horizontalLayout_4->addWidget(label_Passwd);

        lineEdit_Passwd = new QLineEdit(layoutWidget3);
        lineEdit_Passwd->setObjectName(QStringLiteral("lineEdit_Passwd"));
        lineEdit_Passwd->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_Passwd->setAcceptDrops(false);
        lineEdit_Passwd->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(lineEdit_Passwd);

        layoutWidget4 = new QWidget(RegisterWindow);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(60, 9, 198, 24));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_account = new QLabel(layoutWidget4);
        label_account->setObjectName(QStringLiteral("label_account"));

        horizontalLayout_5->addWidget(label_account);

        lineEdit_account = new QLineEdit(layoutWidget4);
        lineEdit_account->setObjectName(QStringLiteral("lineEdit_account"));

        horizontalLayout_5->addWidget(lineEdit_account);


        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QApplication::translate("RegisterWindow", "Dialog", Q_NULLPTR));
        pushButton_cancel->setText(QApplication::translate("RegisterWindow", "Cancel", Q_NULLPTR));
        pushButton_ok->setText(QApplication::translate("RegisterWindow", "OK", Q_NULLPTR));
        label_user_name->setText(QApplication::translate("RegisterWindow", "\347\224\250\346\210\267\346\230\265\347\247\260\357\274\232", Q_NULLPTR));
        label_cofirm_Passwd->setText(QApplication::translate("RegisterWindow", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_Passwd->setText(QApplication::translate("RegisterWindow", "\350\256\244\350\257\201\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_account->setText(QApplication::translate("RegisterWindow", "\347\224\250\346\210\267\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
