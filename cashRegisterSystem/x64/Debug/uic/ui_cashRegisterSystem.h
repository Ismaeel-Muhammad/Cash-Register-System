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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
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
    QPushButton *AddNewCustomer;
    QFrame *frame;
    QScrollArea *scrollArea_9;
    QWidget *cartContents;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *cartVerticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *sell;
    QPushButton *retrieve;
    QLineEdit *phone_number;
    QLabel *label;
    QPushButton *cancel_order;
    QLabel *price_before_const;
    QLabel *price_after_const;
    QLabel *price_before;
    QLabel *price_after;
    QPushButton *check_discount;
    QWidget *creating_customer_account;
    QPushButton *add_new;
    QPushButton *go_back;
    QLineEdit *new_customer_name;
    QLineEdit *new_customer_phone;
    QLabel *nameLable;
    QLabel *phoneLable;
    QLabel *classLable;
    QComboBox *class_box;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *cashRegisterSystem2Class)
    {
        if (cashRegisterSystem2Class->objectName().isEmpty())
            cashRegisterSystem2Class->setObjectName("cashRegisterSystem2Class");
        cashRegisterSystem2Class->resize(1296, 715);
        centralWidget = new QWidget(cashRegisterSystem2Class);
        centralWidget->setObjectName("centralWidget");
        formsStackedWidget = new QStackedWidget(centralWidget);
        formsStackedWidget->setObjectName("formsStackedWidget");
        formsStackedWidget->setGeometry(QRect(0, 10, 1251, 661));
        login = new QWidget();
        login->setObjectName("login");
        username_field = new QLineEdit(login);
        username_field->setObjectName("username_field");
        username_field->setGeometry(QRect(460, 150, 200, 31));
        passwod_label = new QLabel(login);
        passwod_label->setObjectName("passwod_label");
        passwod_label->setGeometry(QRect(700, 210, 91, 31));
        passwod_label->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;"));
        login_btn = new QPushButton(login);
        login_btn->setObjectName("login_btn");
        login_btn->setGeometry(QRect(510, 280, 100, 61));
        login_btn->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;"));
        password_field = new QLineEdit(login);
        password_field->setObjectName("password_field");
        password_field->setGeometry(QRect(460, 210, 201, 31));
        password_field->setEchoMode(QLineEdit::Normal);
        username_label = new QLabel(login);
        username_label->setObjectName("username_label");
        username_label->setGeometry(QRect(680, 150, 111, 31));
        username_label->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;\n"
""));
        formsStackedWidget->addWidget(login);
        main_form = new QWidget();
        main_form->setObjectName("main_form");
        snacks = new QPushButton(main_form);
        snacks->setObjectName("snacks");
        snacks->setGeometry(QRect(930, 20, 71, 41));
        snacks->setStyleSheet(QString::fromUtf8(""));
        ProductsStackedWidget = new QStackedWidget(main_form);
        ProductsStackedWidget->setObjectName("ProductsStackedWidget");
        ProductsStackedWidget->setGeometry(QRect(440, 80, 801, 481));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        scrollArea = new QScrollArea(page_3);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 0, 771, 481));
        scrollArea->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
""));
        scrollArea->setWidgetResizable(true);
        scrollAreaSnacksContents = new QWidget();
        scrollAreaSnacksContents->setObjectName("scrollAreaSnacksContents");
        scrollAreaSnacksContents->setGeometry(QRect(0, 0, 769, 479));
        scrollArea->setWidget(scrollAreaSnacksContents);
        ProductsStackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        scrollArea_2 = new QScrollArea(page_4);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(10, 0, 771, 481));
        scrollArea_2->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
""));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaDrinksContents = new QWidget();
        scrollAreaDrinksContents->setObjectName("scrollAreaDrinksContents");
        scrollAreaDrinksContents->setGeometry(QRect(0, 0, 769, 479));
        scrollArea_2->setWidget(scrollAreaDrinksContents);
        ProductsStackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        scrollArea_3 = new QScrollArea(page_5);
        scrollArea_3->setObjectName("scrollArea_3");
        scrollArea_3->setGeometry(QRect(10, 0, 771, 481));
        scrollArea_3->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
""));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaVegetablesContents = new QWidget();
        scrollAreaVegetablesContents->setObjectName("scrollAreaVegetablesContents");
        scrollAreaVegetablesContents->setGeometry(QRect(0, 0, 769, 479));
        scrollArea_3->setWidget(scrollAreaVegetablesContents);
        ProductsStackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        scrollArea_4 = new QScrollArea(page_6);
        scrollArea_4->setObjectName("scrollArea_4");
        scrollArea_4->setGeometry(QRect(10, 0, 771, 481));
        scrollArea_4->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
""));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaFruitsContents = new QWidget();
        scrollAreaFruitsContents->setObjectName("scrollAreaFruitsContents");
        scrollAreaFruitsContents->setGeometry(QRect(0, 0, 769, 479));
        scrollArea_4->setWidget(scrollAreaFruitsContents);
        ProductsStackedWidget->addWidget(page_6);
        fruits = new QPushButton(main_form);
        fruits->setObjectName("fruits");
        fruits->setGeometry(QRect(750, 20, 71, 41));
        fruits->setStyleSheet(QString::fromUtf8(""));
        vegetables = new QPushButton(main_form);
        vegetables->setObjectName("vegetables");
        vegetables->setGeometry(QRect(840, 20, 71, 41));
        vegetables->setStyleSheet(QString::fromUtf8(""));
        drinks = new QPushButton(main_form);
        drinks->setObjectName("drinks");
        drinks->setGeometry(QRect(660, 20, 81, 41));
        drinks->setStyleSheet(QString::fromUtf8(""));
        AddNewCustomer = new QPushButton(main_form);
        AddNewCustomer->setObjectName("AddNewCustomer");
        AddNewCustomer->setGeometry(QRect(780, 580, 161, 41));
        frame = new QFrame(main_form);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(50, 80, 361, 561));
        frame->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        scrollArea_9 = new QScrollArea(frame);
        scrollArea_9->setObjectName("scrollArea_9");
        scrollArea_9->setGeometry(QRect(0, 0, 361, 411));
        scrollArea_9->setWidgetResizable(true);
        cartContents = new QWidget();
        cartContents->setObjectName("cartContents");
        cartContents->setGeometry(QRect(0, 0, 359, 409));
        verticalLayoutWidget = new QWidget(cartContents);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 361, 411));
        cartVerticalLayout = new QVBoxLayout(verticalLayoutWidget);
        cartVerticalLayout->setSpacing(6);
        cartVerticalLayout->setContentsMargins(11, 11, 11, 11);
        cartVerticalLayout->setObjectName("cartVerticalLayout");
        cartVerticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        cartVerticalLayout->addItem(verticalSpacer);

        scrollArea_9->setWidget(cartContents);
        sell = new QPushButton(frame);
        sell->setObjectName("sell");
        sell->setGeometry(QRect(230, 500, 120, 31));
        retrieve = new QPushButton(frame);
        retrieve->setObjectName("retrieve");
        retrieve->setGeometry(QRect(130, 500, 101, 31));
        phone_number = new QLineEdit(frame);
        phone_number->setObjectName("phone_number");
        phone_number->setGeometry(QRect(100, 420, 171, 31));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(270, 420, 71, 31));
        label->setStyleSheet(QString::fromUtf8("border: none;"));
        cancel_order = new QPushButton(frame);
        cancel_order->setObjectName("cancel_order");
        cancel_order->setGeometry(QRect(10, 500, 101, 31));
        price_before_const = new QLabel(frame);
        price_before_const->setObjectName("price_before_const");
        price_before_const->setGeometry(QRect(238, 450, 111, 31));
        price_before_const->setStyleSheet(QString::fromUtf8("border: none;\n"
"font-size: 14px"));
        price_after_const = new QLabel(frame);
        price_after_const->setObjectName("price_after_const");
        price_after_const->setGeometry(QRect(60, 450, 111, 31));
        price_after_const->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: #c92a2a;\n"
"font-weight: bold;\n"
"font-size: 14px;"));
        price_before = new QLabel(frame);
        price_before->setObjectName("price_before");
        price_before->setGeometry(QRect(180, 450, 61, 31));
        price_before->setStyleSheet(QString::fromUtf8("border: none;\n"
"font-size: 14px"));
        price_after = new QLabel(frame);
        price_after->setObjectName("price_after");
        price_after->setGeometry(QRect(10, 450, 51, 31));
        price_after->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: #c92a2a;\n"
"font-weight: bold;\n"
"font-size: 14px;"));
        check_discount = new QPushButton(frame);
        check_discount->setObjectName("check_discount");
        check_discount->setGeometry(QRect(10, 420, 71, 31));
        formsStackedWidget->addWidget(main_form);
        creating_customer_account = new QWidget();
        creating_customer_account->setObjectName("creating_customer_account");
        add_new = new QPushButton(creating_customer_account);
        add_new->setObjectName("add_new");
        add_new->setGeometry(QRect(700, 470, 121, 51));
        go_back = new QPushButton(creating_customer_account);
        go_back->setObjectName("go_back");
        go_back->setGeometry(QRect(400, 470, 131, 51));
        new_customer_name = new QLineEdit(creating_customer_account);
        new_customer_name->setObjectName("new_customer_name");
        new_customer_name->setGeometry(QRect(520, 140, 201, 41));
        new_customer_phone = new QLineEdit(creating_customer_account);
        new_customer_phone->setObjectName("new_customer_phone");
        new_customer_phone->setGeometry(QRect(520, 200, 201, 41));
        nameLable = new QLabel(creating_customer_account);
        nameLable->setObjectName("nameLable");
        nameLable->setGeometry(QRect(730, 150, 71, 16));
        phoneLable = new QLabel(creating_customer_account);
        phoneLable->setObjectName("phoneLable");
        phoneLable->setGeometry(QRect(730, 210, 71, 16));
        classLable = new QLabel(creating_customer_account);
        classLable->setObjectName("classLable");
        classLable->setGeometry(QRect(730, 300, 81, 16));
        class_box = new QComboBox(creating_customer_account);
        class_box->setObjectName("class_box");
        class_box->setGeometry(QRect(520, 290, 201, 41));
        class_box->setEditable(false);
        formsStackedWidget->addWidget(creating_customer_account);
        cashRegisterSystem2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(cashRegisterSystem2Class);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1296, 22));
        cashRegisterSystem2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(cashRegisterSystem2Class);
        mainToolBar->setObjectName("mainToolBar");
        cashRegisterSystem2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(cashRegisterSystem2Class);
        statusBar->setObjectName("statusBar");
        cashRegisterSystem2Class->setStatusBar(statusBar);

        retranslateUi(cashRegisterSystem2Class);

        formsStackedWidget->setCurrentIndex(1);
        ProductsStackedWidget->setCurrentIndex(0);
        class_box->setCurrentIndex(-1);


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
        AddNewCustomer->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\266\330\247\331\201\330\251 \330\271\331\205\331\212\331\204", nullptr));
        sell->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\331\212\330\271", nullptr));
        retrieve->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\263\330\252\330\261\330\254\330\247\330\271", nullptr));
        label->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\261\331\202\331\205 \330\247\331\204\331\205\331\210\330\250\330\247\331\212\331\204", nullptr));
        cancel_order->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\330\272\330\247\330\241 \330\247\331\204\330\247\331\210\330\261\330\257\330\261", nullptr));
        price_before_const->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\330\263\330\271\330\261 \331\202\330\250\331\204 \330\247\331\204\330\256\330\265\331\205:", nullptr));
        price_after_const->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\330\263\330\271\330\261 \330\250\330\271\330\257 \330\247\331\204\330\256\330\265\331\205:", nullptr));
        price_before->setText(QCoreApplication::translate("cashRegisterSystem2Class", "0", nullptr));
        price_after->setText(QCoreApplication::translate("cashRegisterSystem2Class", "0", nullptr));
        check_discount->setText(QCoreApplication::translate("cashRegisterSystem2Class", "check", nullptr));
        add_new->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\266\330\247\331\201\330\251", nullptr));
        go_back->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\271\331\210\330\257\330\251", nullptr));
        nameLable->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\263\331\205 \330\247\331\204\330\271\331\205\331\212\331\204", nullptr));
        phoneLable->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\261\331\202\331\205 \330\247\331\204\331\205\331\210\330\250\330\247\331\212\331\204", nullptr));
        classLable->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\252\330\265\331\206\331\212\331\201 \330\247\331\204\330\271\331\205\331\212\331\204", nullptr));
        class_box->setCurrentText(QString());
    } // retranslateUi

};

namespace Ui {
    class cashRegisterSystem2Class: public Ui_cashRegisterSystem2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHREGISTERSYSTEM_H
