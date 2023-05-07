/********************************************************************************
** Form generated from reading UI file 'cashRegisterSystem.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASHREGISTERSYSTEM_H
#define UI_CASHREGISTERSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cashRegisterSystem2Class
{
public:
    QWidget *centralWidget;
    QStackedWidget *formsStackedWidget;
    QWidget *login;
    QLineEdit *username_field;
    QLabel *passwod_label;
    QPushButton *login_btn;
    QLineEdit *password_field;
    QLabel *username_label;
    QWidget *main_form;
    QPushButton *snacks;
    QStackedWidget *ProductsStackedWidget;
    QWidget *page_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaSnacksContents;
    QWidget *page_4;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaDrinksContents;
    QWidget *page_5;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaVegetablesContents;
    QWidget *page_6;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaFruitsContents;
    QPushButton *fruits;
    QPushButton *vegetables;
    QPushButton *drinks;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *cashRegisterSystem2Class)
    {
        if (cashRegisterSystem2Class->objectName().isEmpty())
            cashRegisterSystem2Class->setObjectName("cashRegisterSystem2Class");
        cashRegisterSystem2Class->resize(802, 515);
        centralWidget = new QWidget(cashRegisterSystem2Class);
        centralWidget->setObjectName("centralWidget");
        formsStackedWidget = new QStackedWidget(centralWidget);
        formsStackedWidget->setObjectName("formsStackedWidget");
        formsStackedWidget->setGeometry(QRect(0, 0, 801, 481));
        login = new QWidget();
        login->setObjectName("login");
        username_field = new QLineEdit(login);
        username_field->setObjectName("username_field");
        username_field->setGeometry(QRect(270, 140, 200, 31));
        passwod_label = new QLabel(login);
        passwod_label->setObjectName("passwod_label");
        passwod_label->setGeometry(QRect(510, 200, 91, 31));
        passwod_label->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;"));
        login_btn = new QPushButton(login);
        login_btn->setObjectName("login_btn");
        login_btn->setGeometry(QRect(320, 270, 100, 61));
        login_btn->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;"));
        password_field = new QLineEdit(login);
        password_field->setObjectName("password_field");
        password_field->setGeometry(QRect(270, 200, 201, 31));
        password_field->setEchoMode(QLineEdit::Normal);
        username_label = new QLabel(login);
        username_label->setObjectName("username_label");
        username_label->setGeometry(QRect(490, 140, 111, 31));
        username_label->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;\n"
""));
        formsStackedWidget->addWidget(login);
        main_form = new QWidget();
        main_form->setObjectName("main_form");
        snacks = new QPushButton(main_form);
        snacks->setObjectName("snacks");
        snacks->setGeometry(QRect(670, 20, 71, 41));
        ProductsStackedWidget = new QStackedWidget(main_form);
        ProductsStackedWidget->setObjectName("ProductsStackedWidget");
        ProductsStackedWidget->setGeometry(QRect(330, 80, 451, 381));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        scrollArea = new QScrollArea(page_3);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 0, 441, 381));
        scrollArea->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
""));
        scrollArea->setWidgetResizable(true);
        scrollAreaSnacksContents = new QWidget();
        scrollAreaSnacksContents->setObjectName("scrollAreaSnacksContents");
        scrollAreaSnacksContents->setGeometry(QRect(0, 0, 439, 379));
        scrollArea->setWidget(scrollAreaSnacksContents);
        ProductsStackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        scrollArea_2 = new QScrollArea(page_4);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(10, 0, 441, 381));
        scrollArea_2->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
""));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaDrinksContents = new QWidget();
        scrollAreaDrinksContents->setObjectName("scrollAreaDrinksContents");
        scrollAreaDrinksContents->setGeometry(QRect(0, 0, 439, 379));
        scrollArea_2->setWidget(scrollAreaDrinksContents);
        ProductsStackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        scrollArea_3 = new QScrollArea(page_5);
        scrollArea_3->setObjectName("scrollArea_3");
        scrollArea_3->setGeometry(QRect(10, 0, 441, 381));
        scrollArea_3->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
""));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaVegetablesContents = new QWidget();
        scrollAreaVegetablesContents->setObjectName("scrollAreaVegetablesContents");
        scrollAreaVegetablesContents->setGeometry(QRect(0, 0, 439, 379));
        scrollArea_3->setWidget(scrollAreaVegetablesContents);
        ProductsStackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        scrollArea_4 = new QScrollArea(page_6);
        scrollArea_4->setObjectName("scrollArea_4");
        scrollArea_4->setGeometry(QRect(10, 0, 441, 381));
        scrollArea_4->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
""));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaFruitsContents = new QWidget();
        scrollAreaFruitsContents->setObjectName("scrollAreaFruitsContents");
        scrollAreaFruitsContents->setGeometry(QRect(0, 0, 439, 379));
        scrollArea_4->setWidget(scrollAreaFruitsContents);
        ProductsStackedWidget->addWidget(page_6);
        fruits = new QPushButton(main_form);
        fruits->setObjectName("fruits");
        fruits->setGeometry(QRect(490, 20, 71, 41));
        vegetables = new QPushButton(main_form);
        vegetables->setObjectName("vegetables");
        vegetables->setGeometry(QRect(580, 20, 71, 41));
        drinks = new QPushButton(main_form);
        drinks->setObjectName("drinks");
        drinks->setGeometry(QRect(390, 20, 81, 41));
        formsStackedWidget->addWidget(main_form);
        cashRegisterSystem2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(cashRegisterSystem2Class);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 802, 22));
        cashRegisterSystem2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(cashRegisterSystem2Class);
        mainToolBar->setObjectName("mainToolBar");
        cashRegisterSystem2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(cashRegisterSystem2Class);
        statusBar->setObjectName("statusBar");
        cashRegisterSystem2Class->setStatusBar(statusBar);

        retranslateUi(cashRegisterSystem2Class);

        formsStackedWidget->setCurrentIndex(0);
        ProductsStackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(cashRegisterSystem2Class);
    } // setupUi

    void retranslateUi(QMainWindow *cashRegisterSystem2Class)
    {
        cashRegisterSystem2Class->setWindowTitle(QCoreApplication::translate("cashRegisterSystem2Class", "cashRegisterSystem2", nullptr));
        passwod_label->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\330\261\331\202\331\205 \330\247\331\204\330\263\330\261\331\212", nullptr));
        login_btn->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\257\330\256\331\210\331\204", nullptr));
        password_field->setText(QString());
        username_label->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\263\331\205 \330\247\331\204\331\205\330\263\330\252\330\256\330\257\331\205", nullptr));
        snacks->setText(QCoreApplication::translate("cashRegisterSystem2Class", "snacks", nullptr));
        fruits->setText(QCoreApplication::translate("cashRegisterSystem2Class", "fruits", nullptr));
        vegetables->setText(QCoreApplication::translate("cashRegisterSystem2Class", "vegetables", nullptr));
        drinks->setText(QCoreApplication::translate("cashRegisterSystem2Class", "drinks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cashRegisterSystem2Class: public Ui_cashRegisterSystem2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHREGISTERSYSTEM_H
