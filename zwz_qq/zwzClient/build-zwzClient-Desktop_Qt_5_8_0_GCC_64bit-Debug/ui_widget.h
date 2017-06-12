/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QTextBrowser *textBrowser;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *le_rec;
    QLabel *label_lid;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 60, 211, 31));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 54, 12));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 30, 75, 23));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 160, 54, 12));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 70, 75, 23));
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(80, 100, 201, 191));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 20, 54, 12));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 20, 54, 12));
        le_rec = new QLineEdit(Widget);
        le_rec->setObjectName(QStringLiteral("le_rec"));
        le_rec->setGeometry(QRect(190, 10, 91, 20));
        label_lid = new QLabel(Widget);
        label_lid->setObjectName(QStringLiteral("label_lid"));
        label_lid->setGeometry(QRect(70, 20, 58, 14));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "client", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\346\225\260\346\215\256\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "\350\277\236\346\216\245", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\346\216\245\346\224\266\346\225\260\346\215\256\357\274\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\350\207\252\345\267\261\347\232\204ID:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "\346\216\245\346\224\266\346\226\271\357\274\232", Q_NULLPTR));
        label_lid->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
