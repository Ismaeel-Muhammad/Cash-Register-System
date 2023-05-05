/********************************************************************************
** Form generated from reading UI file 'login_form.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_FORM_H
#define UI_LOGIN_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *login_btn;
    QPlainTextEdit *name;
    QPlainTextEdit *Password;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(400, 300);
        login_btn = new QPushButton(Form);
        login_btn->setObjectName("login_btn");
        login_btn->setGeometry(QRect(130, 160, 101, 61));
        name = new QPlainTextEdit(Form);
        name->setObjectName("name");
        name->setGeometry(QRect(120, 30, 121, 31));
        Password = new QPlainTextEdit(Form);
        Password->setObjectName("Password");
        Password->setGeometry(QRect(120, 80, 121, 31));
        label = new QLabel(Form);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 40, 49, 16));
        label_2 = new QLabel(Form);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 90, 49, 16));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        login_btn->setText(QCoreApplication::translate("Form", "login", nullptr));
        label->setText(QCoreApplication::translate("Form", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login_formClass : public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_FORM_H
