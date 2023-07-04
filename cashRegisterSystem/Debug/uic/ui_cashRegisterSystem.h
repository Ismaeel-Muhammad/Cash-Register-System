/********************************************************************************
** Form generated from reading UI file 'cashRegisterSystem.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASHREGISTERSYSTEM_H
#define UI_CASHREGISTERSYSTEM_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cashRegisterSystem2Class
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_10;
    QFrame *nav_frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *main_menu;
    QPushButton *product_menu;
    QPushButton *customers_menu;
    QPushButton *add_customers_menu;
    QPushButton *go_to_admin_form;
    QSpacerItem *horizontalSpacer;
    QPushButton *logout;
    QStackedWidget *formsStackedWidget;
    QWidget *login;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_5;
    QLineEdit *username_field;
    QLabel *username_label;
    QLineEdit *password_field;
    QLabel *passwod_label;
    QPushButton *login_btn;
    QWidget *user_main_form;
    QGridLayout *gridLayout_9;
    QFrame *user_main_frame;
    QGridLayout *gridLayout;
    QFrame *user_categories_list_frame;
    QGridLayout *gridLayout_4;
    QListWidget *user_categories_list;
    QFrame *user_products_frame;
    QGridLayout *gridLayout_7;
    QScrollArea *user_products_scroll_area;
    QWidget *user_products_scroll_area_content;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *user_productsVerticalLayout;
    QFrame *user_cart_frame;
    QGridLayout *gridLayout_2;
    QGridLayout *user_gridLayout_7;
    QPushButton *user_phone_number_label;
    QLineEdit *user_phone_number;
    QScrollArea *user_cartScrollArea;
    QWidget *user_cart_contents;
    QWidget *layoutWidget1;
    QVBoxLayout *user_cartVerticalLayout;
    QHBoxLayout *user_horizontalLayout_4;
    QPushButton *user_check_discount;
    QLabel *user_price_after;
    QLabel *user_price_after_const;
    QLabel *user_price_before;
    QLabel *user_price_before_const;
    QHBoxLayout *user_horizontalLayout_5;
    QPushButton *user_cancel_order;
    QPushButton *user_retrieve;
    QPushButton *user_sell;
    QWidget *admin_form;
    QFrame *control_frame;
    QFrame *line;
    QLabel *label_2;
    QLabel *label_3;
    QPlainTextEdit *item_name_item;
    QLabel *label_4;
    QPlainTextEdit *item_price_item;
    QPlainTextEdit *item_quantity_item;
    QPushButton *add_item;
    QPushButton *remove_item;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *remove_quantity;
    QPushButton *add_quantity;
    QComboBox *item_name_quantity;
    QLabel *label_20;
    QPlainTextEdit *item_quantity_quantity;
    QLabel *label_21;
    QComboBox *item_type_item;
    QFrame *line_2;
    QLabel *label_12;
    QPushButton *edit_price;
    QComboBox *item_name_price;
    QLabel *label_27;
    QPlainTextEdit *item_price_price;
    QLabel *label_28;
    QLabel *label_22;
    QFrame *total_operations_frame;
    QScrollArea *scrollArea_7;
    QWidget *total_operations_contents;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *total_VLayout;
    QFrame *return_operations_frame;
    QScrollArea *scrollArea_6;
    QWidget *return_operations_contents;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *return_VLayout;
    QFrame *sell_operations_frame;
    QScrollArea *scrollArea_5;
    QWidget *sell_operations_contents;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *sell_VLayout;
    QLabel *label_23;
    QLabel *label_25;
    QLabel *label_24;
    QTextBrowser *day_total_income;
    QLabel *label_26;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_14;
    QComboBox *opType;
    QLabel *label_11;
    QDateEdit *date_search;
    QPushButton *OPsearch;
    QWidget *creating_customer_account;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_6;
    QLineEdit *new_customer_name;
    QLabel *nameLable;
    QLineEdit *new_customer_phone;
    QLabel *phoneLable;
    QComboBox *class_box;
    QLabel *classLable;
    QPushButton *add_new;
    QWidget *customers_form;
    QScrollArea *results;
    QWidget *scrollAreaWidgetContents;
    QTableView *tableView;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_8;
    QLineEdit *nameSearch;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_9;
    QLineEdit *phoneSearch;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_10;
    QComboBox *ranksearch;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *verticalSpacer_11;
    QPushButton *Search_btn;
    QWidget *products_form;
    QScrollArea *porductsForm;
    QWidget *scrollAreaWidgetContents_3;
    QTableView *prodtable;
    QComboBox *ProdTypeSearch;
    QPushButton *searchprobuctsBTN;
    QLineEdit *ProdNameSearch;
    QLabel *ProdTypeLabel;
    QLabel *ProdNameLabel;
    QWidget *admin_main_form;
    QGridLayout *gridLayout_17;
    QFrame *admin_main_frame;
    QGridLayout *gridLayout_3;
    QFrame *admin_categories_list_frame;
    QGridLayout *gridLayout_12;
    QListWidget *admin_categories_list;
    QFrame *admin_products_frame;
    QGridLayout *gridLayout_13;
    QScrollArea *admin_products_scroll_area;
    QWidget *admin_products_scroll_area_content;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *admin_productsVerticalLayout;
    QFrame *admin_cart_frame;
    QGridLayout *gridLayout_15;
    QGridLayout *gridLayout_16;
    QComboBox *admin_order_type_cmb;
    QPushButton *admin_phone_number_label;
    QLabel *admin_discount_label;
    QDoubleSpinBox *discount_spinbox;
    QLineEdit *admin_phone_number;
    QScrollArea *admin_cartScrollArea;
    QWidget *admin_cart_contents;
    QWidget *layoutWidget5;
    QVBoxLayout *admin_cartVerticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *admin_check_discount;
    QLabel *admin_price_after;
    QLabel *admin_price_after_const;
    QLabel *admin_price_before;
    QLabel *admin_price_before_const;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *admin_cancel_order;
    QPushButton *admin_retrieve;
    QPushButton *admin_sell;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *cashRegisterSystem2Class)
    {
        if (cashRegisterSystem2Class->objectName().isEmpty())
            cashRegisterSystem2Class->setObjectName("cashRegisterSystem2Class");
        cashRegisterSystem2Class->resize(1366, 768);
        centralWidget = new QWidget(cashRegisterSystem2Class);
        centralWidget->setObjectName("centralWidget");
        gridLayout_10 = new QGridLayout(centralWidget);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName("gridLayout_10");
        nav_frame = new QFrame(centralWidget);
        nav_frame->setObjectName("nav_frame");
        nav_frame->setFrameShape(QFrame::StyledPanel);
        nav_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(nav_frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        main_menu = new QPushButton(nav_frame);
        main_menu->setObjectName("main_menu");
        main_menu->setMinimumSize(QSize(120, 30));

        horizontalLayout->addWidget(main_menu);

        product_menu = new QPushButton(nav_frame);
        product_menu->setObjectName("product_menu");
        product_menu->setMinimumSize(QSize(120, 30));

        horizontalLayout->addWidget(product_menu);

        customers_menu = new QPushButton(nav_frame);
        customers_menu->setObjectName("customers_menu");
        customers_menu->setMinimumSize(QSize(120, 30));

        horizontalLayout->addWidget(customers_menu);

        add_customers_menu = new QPushButton(nav_frame);
        add_customers_menu->setObjectName("add_customers_menu");
        add_customers_menu->setMinimumSize(QSize(120, 30));

        horizontalLayout->addWidget(add_customers_menu);

        go_to_admin_form = new QPushButton(nav_frame);
        go_to_admin_form->setObjectName("go_to_admin_form");
        go_to_admin_form->setMinimumSize(QSize(120, 30));

        horizontalLayout->addWidget(go_to_admin_form);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        logout = new QPushButton(nav_frame);
        logout->setObjectName("logout");
        logout->setMinimumSize(QSize(120, 30));

        horizontalLayout->addWidget(logout);


        gridLayout_10->addWidget(nav_frame, 0, 0, 1, 1);

        formsStackedWidget = new QStackedWidget(centralWidget);
        formsStackedWidget->setObjectName("formsStackedWidget");
        login = new QWidget();
        login->setObjectName("login");
        layoutWidget = new QWidget(login);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(630, 290, 301, 161));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName("gridLayout_5");
        username_field = new QLineEdit(layoutWidget);
        username_field->setObjectName("username_field");
        username_field->setStyleSheet(QString::fromUtf8("height: 25px;"));

        gridLayout_5->addWidget(username_field, 0, 0, 1, 1);

        username_label = new QLabel(layoutWidget);
        username_label->setObjectName("username_label");
        username_label->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;\n"
""));

        gridLayout_5->addWidget(username_label, 0, 1, 1, 1);

        password_field = new QLineEdit(layoutWidget);
        password_field->setObjectName("password_field");
        password_field->setStyleSheet(QString::fromUtf8("height: 25px;"));
        password_field->setEchoMode(QLineEdit::Normal);

        gridLayout_5->addWidget(password_field, 1, 0, 1, 1);

        passwod_label = new QLabel(layoutWidget);
        passwod_label->setObjectName("passwod_label");
        passwod_label->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;"));

        gridLayout_5->addWidget(passwod_label, 1, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_5);

        login_btn = new QPushButton(layoutWidget);
        login_btn->setObjectName("login_btn");
        login_btn->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;"));

        verticalLayout_5->addWidget(login_btn);

        formsStackedWidget->addWidget(login);
        user_main_form = new QWidget();
        user_main_form->setObjectName("user_main_form");
        gridLayout_9 = new QGridLayout(user_main_form);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName("gridLayout_9");
        user_main_frame = new QFrame(user_main_form);
        user_main_frame->setObjectName("user_main_frame");
        user_main_frame->setFrameShape(QFrame::StyledPanel);
        user_main_frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(user_main_frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        user_categories_list_frame = new QFrame(user_main_frame);
        user_categories_list_frame->setObjectName("user_categories_list_frame");
        user_categories_list_frame->setMaximumSize(QSize(300, 16777215));
        user_categories_list_frame->setStyleSheet(QString::fromUtf8(""));
        user_categories_list_frame->setFrameShape(QFrame::StyledPanel);
        user_categories_list_frame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(user_categories_list_frame);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName("gridLayout_4");
        user_categories_list = new QListWidget(user_categories_list_frame);
        user_categories_list->setObjectName("user_categories_list");
        user_categories_list->setLayoutDirection(Qt::LeftToRight);
        user_categories_list->setStyleSheet(QString::fromUtf8("font-size: 16px;"));

        gridLayout_4->addWidget(user_categories_list, 0, 0, 1, 1);


        gridLayout->addWidget(user_categories_list_frame, 0, 2, 1, 1);

        user_products_frame = new QFrame(user_main_frame);
        user_products_frame->setObjectName("user_products_frame");
        user_products_frame->setMinimumSize(QSize(300, 0));
        user_products_frame->setFrameShape(QFrame::StyledPanel);
        user_products_frame->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(user_products_frame);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName("gridLayout_7");
        user_products_scroll_area = new QScrollArea(user_products_frame);
        user_products_scroll_area->setObjectName("user_products_scroll_area");
        user_products_scroll_area->setStyleSheet(QString::fromUtf8(""));
        user_products_scroll_area->setWidgetResizable(true);
        user_products_scroll_area_content = new QWidget();
        user_products_scroll_area_content->setObjectName("user_products_scroll_area_content");
        user_products_scroll_area_content->setGeometry(QRect(0, 0, 676, 579));
        verticalLayout_2 = new QVBoxLayout(user_products_scroll_area_content);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        user_productsVerticalLayout = new QVBoxLayout();
        user_productsVerticalLayout->setSpacing(6);
        user_productsVerticalLayout->setObjectName("user_productsVerticalLayout");

        verticalLayout_2->addLayout(user_productsVerticalLayout);

        user_products_scroll_area->setWidget(user_products_scroll_area_content);

        gridLayout_7->addWidget(user_products_scroll_area, 0, 0, 1, 1);


        gridLayout->addWidget(user_products_frame, 0, 1, 1, 1);

        user_cart_frame = new QFrame(user_main_frame);
        user_cart_frame->setObjectName("user_cart_frame");
        user_cart_frame->setMinimumSize(QSize(300, 0));
        user_cart_frame->setMaximumSize(QSize(300, 16777215));
        user_cart_frame->setFrameShape(QFrame::StyledPanel);
        user_cart_frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(user_cart_frame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        user_gridLayout_7 = new QGridLayout();
        user_gridLayout_7->setSpacing(6);
        user_gridLayout_7->setObjectName("user_gridLayout_7");
        user_phone_number_label = new QPushButton(user_cart_frame);
        user_phone_number_label->setObjectName("user_phone_number_label");
        user_phone_number_label->setMaximumSize(QSize(35, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        user_phone_number_label->setIcon(icon);

        user_gridLayout_7->addWidget(user_phone_number_label, 0, 2, 1, 1);

        user_phone_number = new QLineEdit(user_cart_frame);
        user_phone_number->setObjectName("user_phone_number");

        user_gridLayout_7->addWidget(user_phone_number, 0, 0, 1, 2);


        gridLayout_2->addLayout(user_gridLayout_7, 1, 0, 1, 2);

        user_cartScrollArea = new QScrollArea(user_cart_frame);
        user_cartScrollArea->setObjectName("user_cartScrollArea");
        user_cartScrollArea->setMinimumSize(QSize(280, 0));
        user_cartScrollArea->setStyleSheet(QString::fromUtf8(""));
        user_cartScrollArea->setWidgetResizable(true);
        user_cart_contents = new QWidget();
        user_cart_contents->setObjectName("user_cart_contents");
        user_cart_contents->setGeometry(QRect(0, 0, 278, 483));
        user_cart_contents->setMinimumSize(QSize(0, 0));
        layoutWidget1 = new QWidget(user_cart_contents);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(9, 9, 261, 471));
        user_cartVerticalLayout = new QVBoxLayout(layoutWidget1);
        user_cartVerticalLayout->setSpacing(6);
        user_cartVerticalLayout->setContentsMargins(11, 11, 11, 11);
        user_cartVerticalLayout->setObjectName("user_cartVerticalLayout");
        user_cartVerticalLayout->setContentsMargins(0, 0, 0, 0);
        user_cartScrollArea->setWidget(user_cart_contents);

        gridLayout_2->addWidget(user_cartScrollArea, 0, 0, 1, 2);

        user_horizontalLayout_4 = new QHBoxLayout();
        user_horizontalLayout_4->setSpacing(6);
        user_horizontalLayout_4->setObjectName("user_horizontalLayout_4");
        user_check_discount = new QPushButton(user_cart_frame);
        user_check_discount->setObjectName("user_check_discount");
        user_check_discount->setIcon(icon);

        user_horizontalLayout_4->addWidget(user_check_discount);

        user_price_after = new QLabel(user_cart_frame);
        user_price_after->setObjectName("user_price_after");
        user_price_after->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: #c92a2a;\n"
"font-weight: bold;\n"
"font-size: 14px;"));

        user_horizontalLayout_4->addWidget(user_price_after);

        user_price_after_const = new QLabel(user_cart_frame);
        user_price_after_const->setObjectName("user_price_after_const");
        user_price_after_const->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: #c92a2a;\n"
"font-weight: bold;\n"
"font-size: 12px;"));

        user_horizontalLayout_4->addWidget(user_price_after_const);

        user_price_before = new QLabel(user_cart_frame);
        user_price_before->setObjectName("user_price_before");
        user_price_before->setStyleSheet(QString::fromUtf8("border: none;\n"
"font-size: 14px"));

        user_horizontalLayout_4->addWidget(user_price_before);

        user_price_before_const = new QLabel(user_cart_frame);
        user_price_before_const->setObjectName("user_price_before_const");
        user_price_before_const->setStyleSheet(QString::fromUtf8("border: none;\n"
"font-size: 12px"));

        user_horizontalLayout_4->addWidget(user_price_before_const);


        gridLayout_2->addLayout(user_horizontalLayout_4, 2, 0, 1, 2);

        user_horizontalLayout_5 = new QHBoxLayout();
        user_horizontalLayout_5->setSpacing(6);
        user_horizontalLayout_5->setObjectName("user_horizontalLayout_5");
        user_cancel_order = new QPushButton(user_cart_frame);
        user_cancel_order->setObjectName("user_cancel_order");
        user_cancel_order->setMaximumSize(QSize(30, 16777215));
        user_cancel_order->setIcon(icon);

        user_horizontalLayout_5->addWidget(user_cancel_order);

        user_retrieve = new QPushButton(user_cart_frame);
        user_retrieve->setObjectName("user_retrieve");

        user_horizontalLayout_5->addWidget(user_retrieve);

        user_sell = new QPushButton(user_cart_frame);
        user_sell->setObjectName("user_sell");

        user_horizontalLayout_5->addWidget(user_sell);


        gridLayout_2->addLayout(user_horizontalLayout_5, 3, 0, 1, 2);


        gridLayout->addWidget(user_cart_frame, 0, 0, 1, 1);


        gridLayout_9->addWidget(user_main_frame, 0, 0, 1, 1);

        formsStackedWidget->addWidget(user_main_form);
        admin_form = new QWidget();
        admin_form->setObjectName("admin_form");
        control_frame = new QFrame(admin_form);
        control_frame->setObjectName("control_frame");
        control_frame->setGeometry(QRect(10, 30, 1231, 291));
        control_frame->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        control_frame->setFrameShape(QFrame::StyledPanel);
        control_frame->setFrameShadow(QFrame::Raised);
        line = new QFrame(control_frame);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 80, 1231, 20));
        line->setStyleSheet(QString::fromUtf8("border-top:1px;"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(control_frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(1080, 10, 131, 81));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 16px;\n"
"border:none;"));
        label_3 = new QLabel(control_frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(1080, 110, 131, 81));
        label_3->setStyleSheet(QString::fromUtf8("font-size: 16px;\n"
"border:none;"));
        item_name_item = new QPlainTextEdit(control_frame);
        item_name_item->setObjectName("item_name_item");
        item_name_item->setGeometry(QRect(880, 40, 151, 41));
        label_4 = new QLabel(control_frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(960, 10, 71, 20));
        label_4->setStyleSheet(QString::fromUtf8("border: none;"));
        item_price_item = new QPlainTextEdit(control_frame);
        item_price_item->setObjectName("item_price_item");
        item_price_item->setGeometry(QRect(690, 40, 151, 41));
        item_quantity_item = new QPlainTextEdit(control_frame);
        item_quantity_item->setObjectName("item_quantity_item");
        item_quantity_item->setGeometry(QRect(500, 40, 151, 41));
        add_item = new QPushButton(control_frame);
        add_item->setObjectName("add_item");
        add_item->setGeometry(QRect(30, 10, 181, 31));
        remove_item = new QPushButton(control_frame);
        remove_item->setObjectName("remove_item");
        remove_item->setGeometry(QRect(30, 60, 181, 31));
        label_5 = new QLabel(control_frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(770, 10, 71, 20));
        label_5->setStyleSheet(QString::fromUtf8("border: none;"));
        label_6 = new QLabel(control_frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(580, 10, 71, 20));
        label_6->setStyleSheet(QString::fromUtf8("border: none;"));
        label_7 = new QLabel(control_frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(390, 10, 71, 20));
        label_7->setStyleSheet(QString::fromUtf8("border: none;"));
        remove_quantity = new QPushButton(control_frame);
        remove_quantity->setObjectName("remove_quantity");
        remove_quantity->setGeometry(QRect(30, 160, 181, 31));
        add_quantity = new QPushButton(control_frame);
        add_quantity->setObjectName("add_quantity");
        add_quantity->setGeometry(QRect(30, 110, 181, 31));
        item_name_quantity = new QComboBox(control_frame);
        item_name_quantity->setObjectName("item_name_quantity");
        item_name_quantity->setGeometry(QRect(690, 140, 341, 41));
        label_20 = new QLabel(control_frame);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(950, 110, 71, 20));
        label_20->setStyleSheet(QString::fromUtf8("border: none;"));
        item_quantity_quantity = new QPlainTextEdit(control_frame);
        item_quantity_quantity->setObjectName("item_quantity_quantity");
        item_quantity_quantity->setGeometry(QRect(500, 140, 151, 41));
        label_21 = new QLabel(control_frame);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(570, 110, 71, 20));
        label_21->setStyleSheet(QString::fromUtf8("border: none;"));
        item_type_item = new QComboBox(control_frame);
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->addItem(QString());
        item_type_item->setObjectName("item_type_item");
        item_type_item->setGeometry(QRect(310, 40, 151, 41));
        line_2 = new QFrame(control_frame);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(0, 190, 1231, 20));
        line_2->setStyleSheet(QString::fromUtf8("border-top:1px;"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_12 = new QLabel(control_frame);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(1090, 210, 121, 81));
        label_12->setStyleSheet(QString::fromUtf8("font-size: 16px;\n"
"border:none;"));
        edit_price = new QPushButton(control_frame);
        edit_price->setObjectName("edit_price");
        edit_price->setGeometry(QRect(30, 230, 181, 31));
        item_name_price = new QComboBox(control_frame);
        item_name_price->setObjectName("item_name_price");
        item_name_price->setGeometry(QRect(690, 240, 341, 41));
        label_27 = new QLabel(control_frame);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(960, 210, 71, 20));
        label_27->setStyleSheet(QString::fromUtf8("border: none;"));
        item_price_price = new QPlainTextEdit(control_frame);
        item_price_price->setObjectName("item_price_price");
        item_price_price->setGeometry(QRect(500, 240, 151, 41));
        label_28 = new QLabel(control_frame);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(580, 210, 71, 20));
        label_28->setStyleSheet(QString::fromUtf8("border: none;"));
        label_22 = new QLabel(admin_form);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(1070, 0, 161, 20));
        label_22->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;"));
        total_operations_frame = new QFrame(admin_form);
        total_operations_frame->setObjectName("total_operations_frame");
        total_operations_frame->setGeometry(QRect(10, 370, 341, 261));
        total_operations_frame->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        total_operations_frame->setFrameShape(QFrame::StyledPanel);
        total_operations_frame->setFrameShadow(QFrame::Raised);
        scrollArea_7 = new QScrollArea(total_operations_frame);
        scrollArea_7->setObjectName("scrollArea_7");
        scrollArea_7->setGeometry(QRect(0, 0, 341, 261));
        scrollArea_7->setWidgetResizable(true);
        total_operations_contents = new QWidget();
        total_operations_contents->setObjectName("total_operations_contents");
        total_operations_contents->setGeometry(QRect(0, 0, 339, 259));
        verticalLayoutWidget_4 = new QWidget(total_operations_contents);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(0, 0, 341, 261));
        total_VLayout = new QVBoxLayout(verticalLayoutWidget_4);
        total_VLayout->setSpacing(6);
        total_VLayout->setContentsMargins(11, 11, 11, 11);
        total_VLayout->setObjectName("total_VLayout");
        total_VLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea_7->setWidget(total_operations_contents);
        return_operations_frame = new QFrame(admin_form);
        return_operations_frame->setObjectName("return_operations_frame");
        return_operations_frame->setGeometry(QRect(360, 370, 341, 261));
        return_operations_frame->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        return_operations_frame->setFrameShape(QFrame::StyledPanel);
        return_operations_frame->setFrameShadow(QFrame::Raised);
        scrollArea_6 = new QScrollArea(return_operations_frame);
        scrollArea_6->setObjectName("scrollArea_6");
        scrollArea_6->setGeometry(QRect(0, 0, 341, 261));
        scrollArea_6->setWidgetResizable(true);
        return_operations_contents = new QWidget();
        return_operations_contents->setObjectName("return_operations_contents");
        return_operations_contents->setGeometry(QRect(0, 0, 339, 259));
        verticalLayoutWidget_3 = new QWidget(return_operations_contents);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(0, 0, 341, 261));
        return_VLayout = new QVBoxLayout(verticalLayoutWidget_3);
        return_VLayout->setSpacing(6);
        return_VLayout->setContentsMargins(11, 11, 11, 11);
        return_VLayout->setObjectName("return_VLayout");
        return_VLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea_6->setWidget(return_operations_contents);
        sell_operations_frame = new QFrame(admin_form);
        sell_operations_frame->setObjectName("sell_operations_frame");
        sell_operations_frame->setGeometry(QRect(710, 370, 341, 261));
        sell_operations_frame->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        sell_operations_frame->setFrameShape(QFrame::StyledPanel);
        sell_operations_frame->setFrameShadow(QFrame::Raised);
        scrollArea_5 = new QScrollArea(sell_operations_frame);
        scrollArea_5->setObjectName("scrollArea_5");
        scrollArea_5->setGeometry(QRect(0, 0, 341, 261));
        scrollArea_5->setWidgetResizable(true);
        sell_operations_contents = new QWidget();
        sell_operations_contents->setObjectName("sell_operations_contents");
        sell_operations_contents->setGeometry(QRect(0, 0, 339, 259));
        verticalLayoutWidget_2 = new QWidget(sell_operations_contents);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 341, 261));
        sell_VLayout = new QVBoxLayout(verticalLayoutWidget_2);
        sell_VLayout->setSpacing(6);
        sell_VLayout->setContentsMargins(11, 11, 11, 11);
        sell_VLayout->setObjectName("sell_VLayout");
        sell_VLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea_5->setWidget(sell_operations_contents);
        label_23 = new QLabel(admin_form);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(940, 330, 111, 31));
        label_23->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;"));
        label_25 = new QLabel(admin_form);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(570, 330, 131, 31));
        label_25->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;"));
        label_24 = new QLabel(admin_form);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(100, 330, 251, 31));
        label_24->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;"));
        day_total_income = new QTextBrowser(admin_form);
        day_total_income->setObjectName("day_total_income");
        day_total_income->setGeometry(QRect(10, 640, 261, 31));
        label_26 = new QLabel(admin_form);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(270, 640, 101, 31));
        label_26->setStyleSheet(QString::fromUtf8("font-size: 18px;\n"
"font-weight: bold;"));
        layoutWidget2 = new QWidget(admin_form);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(1070, 380, 171, 169));
        verticalLayout_9 = new QVBoxLayout(layoutWidget2);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget2);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("margin: 3px"));

        verticalLayout_9->addWidget(label_14);

        opType = new QComboBox(layoutWidget2);
        opType->addItem(QString());
        opType->addItem(QString());
        opType->addItem(QString());
        opType->addItem(QString());
        opType->setObjectName("opType");
        opType->setStyleSheet(QString::fromUtf8("height: 25px"));

        verticalLayout_9->addWidget(opType);

        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("margin: 3px"));

        verticalLayout_9->addWidget(label_11);

        date_search = new QDateEdit(layoutWidget2);
        date_search->setObjectName("date_search");
        date_search->setStyleSheet(QString::fromUtf8("height: 25px"));
        date_search->setCalendarPopup(true);
        date_search->setDate(QDate(2002, 10, 24));

        verticalLayout_9->addWidget(date_search);

        OPsearch = new QPushButton(layoutWidget2);
        OPsearch->setObjectName("OPsearch");
        OPsearch->setStyleSheet(QString::fromUtf8("height: 30px;"));

        verticalLayout_9->addWidget(OPsearch);

        formsStackedWidget->addWidget(admin_form);
        creating_customer_account = new QWidget();
        creating_customer_account->setObjectName("creating_customer_account");
        layoutWidget3 = new QWidget(creating_customer_account);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(520, 140, 401, 261));
        verticalLayout_6 = new QVBoxLayout(layoutWidget3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName("gridLayout_6");
        new_customer_name = new QLineEdit(layoutWidget3);
        new_customer_name->setObjectName("new_customer_name");

        gridLayout_6->addWidget(new_customer_name, 0, 0, 1, 1);

        nameLable = new QLabel(layoutWidget3);
        nameLable->setObjectName("nameLable");

        gridLayout_6->addWidget(nameLable, 0, 1, 1, 1);

        new_customer_phone = new QLineEdit(layoutWidget3);
        new_customer_phone->setObjectName("new_customer_phone");

        gridLayout_6->addWidget(new_customer_phone, 1, 0, 1, 1);

        phoneLable = new QLabel(layoutWidget3);
        phoneLable->setObjectName("phoneLable");

        gridLayout_6->addWidget(phoneLable, 1, 1, 1, 1);

        class_box = new QComboBox(layoutWidget3);
        class_box->setObjectName("class_box");
        class_box->setEditable(false);

        gridLayout_6->addWidget(class_box, 2, 0, 1, 1);

        classLable = new QLabel(layoutWidget3);
        classLable->setObjectName("classLable");

        gridLayout_6->addWidget(classLable, 2, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout_6);

        add_new = new QPushButton(layoutWidget3);
        add_new->setObjectName("add_new");

        verticalLayout_6->addWidget(add_new);

        formsStackedWidget->addWidget(creating_customer_account);
        customers_form = new QWidget();
        customers_form->setObjectName("customers_form");
        results = new QScrollArea(customers_form);
        results->setObjectName("results");
        results->setGeometry(QRect(240, 30, 981, 631));
        results->setStyleSheet(QString::fromUtf8("border: 1px solid black;"));
        results->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 979, 629));
        tableView = new QTableView(scrollAreaWidgetContents);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 0, 981, 631));
        results->setWidget(scrollAreaWidgetContents);
        layoutWidget4 = new QWidget(customers_form);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(20, 80, 201, 431));
        verticalLayout_8 = new QVBoxLayout(layoutWidget4);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_8 = new QLabel(layoutWidget4);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;"));

        verticalLayout_7->addWidget(label_8);

        nameSearch = new QLineEdit(layoutWidget4);
        nameSearch->setObjectName("nameSearch");

        verticalLayout_7->addWidget(nameSearch);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_8);

        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;"));

        verticalLayout_7->addWidget(label_9);

        phoneSearch = new QLineEdit(layoutWidget4);
        phoneSearch->setObjectName("phoneSearch");

        verticalLayout_7->addWidget(phoneSearch);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_9);

        label_10 = new QLabel(layoutWidget4);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;"));

        verticalLayout_7->addWidget(label_10);

        ranksearch = new QComboBox(layoutWidget4);
        ranksearch->addItem(QString());
        ranksearch->addItem(QString());
        ranksearch->addItem(QString());
        ranksearch->addItem(QString());
        ranksearch->setObjectName("ranksearch");

        verticalLayout_7->addWidget(ranksearch);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_10);


        verticalLayout_8->addLayout(verticalLayout_7);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_11);

        Search_btn = new QPushButton(layoutWidget4);
        Search_btn->setObjectName("Search_btn");

        verticalLayout_8->addWidget(Search_btn);

        formsStackedWidget->addWidget(customers_form);
        products_form = new QWidget();
        products_form->setObjectName("products_form");
        porductsForm = new QScrollArea(products_form);
        porductsForm->setObjectName("porductsForm");
        porductsForm->setGeometry(QRect(0, 60, 1241, 591));
        porductsForm->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 1239, 589));
        prodtable = new QTableView(scrollAreaWidgetContents_3);
        prodtable->setObjectName("prodtable");
        prodtable->setGeometry(QRect(0, 0, 1241, 591));
        porductsForm->setWidget(scrollAreaWidgetContents_3);
        ProdTypeSearch = new QComboBox(products_form);
        ProdTypeSearch->addItem(QString());
        ProdTypeSearch->setObjectName("ProdTypeSearch");
        ProdTypeSearch->setGeometry(QRect(600, 20, 141, 31));
        ProdTypeSearch->setStyleSheet(QString::fromUtf8(""));
        searchprobuctsBTN = new QPushButton(products_form);
        searchprobuctsBTN->setObjectName("searchprobuctsBTN");
        searchprobuctsBTN->setGeometry(QRect(280, 20, 131, 31));
        searchprobuctsBTN->setStyleSheet(QString::fromUtf8("\n"
"font-weight:bold;\n"
""));
        ProdNameSearch = new QLineEdit(products_form);
        ProdNameSearch->setObjectName("ProdNameSearch");
        ProdNameSearch->setGeometry(QRect(960, 20, 132, 31));
        ProdTypeLabel = new QLabel(products_form);
        ProdTypeLabel->setObjectName("ProdTypeLabel");
        ProdTypeLabel->setGeometry(QRect(750, 20, 82, 24));
        ProdTypeLabel->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;"));
        ProdNameLabel = new QLabel(products_form);
        ProdNameLabel->setObjectName("ProdNameLabel");
        ProdNameLabel->setGeometry(QRect(1110, 20, 91, 24));
        ProdNameLabel->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;"));
        formsStackedWidget->addWidget(products_form);
        admin_main_form = new QWidget();
        admin_main_form->setObjectName("admin_main_form");
        gridLayout_17 = new QGridLayout(admin_main_form);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName("gridLayout_17");
        admin_main_frame = new QFrame(admin_main_form);
        admin_main_frame->setObjectName("admin_main_frame");
        admin_main_frame->setFrameShape(QFrame::StyledPanel);
        admin_main_frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(admin_main_frame);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName("gridLayout_3");
        admin_categories_list_frame = new QFrame(admin_main_frame);
        admin_categories_list_frame->setObjectName("admin_categories_list_frame");
        admin_categories_list_frame->setMaximumSize(QSize(300, 16777215));
        admin_categories_list_frame->setStyleSheet(QString::fromUtf8(""));
        admin_categories_list_frame->setFrameShape(QFrame::StyledPanel);
        admin_categories_list_frame->setFrameShadow(QFrame::Raised);
        gridLayout_12 = new QGridLayout(admin_categories_list_frame);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName("gridLayout_12");
        admin_categories_list = new QListWidget(admin_categories_list_frame);
        admin_categories_list->setObjectName("admin_categories_list");
        admin_categories_list->setLayoutDirection(Qt::LeftToRight);
        admin_categories_list->setStyleSheet(QString::fromUtf8("font-size: 16px;"));

        gridLayout_12->addWidget(admin_categories_list, 0, 0, 1, 1);


        gridLayout_3->addWidget(admin_categories_list_frame, 0, 2, 1, 1);

        admin_products_frame = new QFrame(admin_main_frame);
        admin_products_frame->setObjectName("admin_products_frame");
        admin_products_frame->setMinimumSize(QSize(300, 0));
        admin_products_frame->setFrameShape(QFrame::StyledPanel);
        admin_products_frame->setFrameShadow(QFrame::Raised);
        gridLayout_13 = new QGridLayout(admin_products_frame);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName("gridLayout_13");
        admin_products_scroll_area = new QScrollArea(admin_products_frame);
        admin_products_scroll_area->setObjectName("admin_products_scroll_area");
        admin_products_scroll_area->setStyleSheet(QString::fromUtf8(""));
        admin_products_scroll_area->setWidgetResizable(true);
        admin_products_scroll_area_content = new QWidget();
        admin_products_scroll_area_content->setObjectName("admin_products_scroll_area_content");
        admin_products_scroll_area_content->setGeometry(QRect(0, 0, 676, 579));
        verticalLayout = new QVBoxLayout(admin_products_scroll_area_content);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        admin_productsVerticalLayout = new QVBoxLayout();
        admin_productsVerticalLayout->setSpacing(6);
        admin_productsVerticalLayout->setObjectName("admin_productsVerticalLayout");

        verticalLayout->addLayout(admin_productsVerticalLayout);

        admin_products_scroll_area->setWidget(admin_products_scroll_area_content);

        gridLayout_13->addWidget(admin_products_scroll_area, 0, 0, 1, 1);


        gridLayout_3->addWidget(admin_products_frame, 0, 1, 1, 1);

        admin_cart_frame = new QFrame(admin_main_frame);
        admin_cart_frame->setObjectName("admin_cart_frame");
        admin_cart_frame->setMinimumSize(QSize(300, 0));
        admin_cart_frame->setMaximumSize(QSize(300, 16777215));
        admin_cart_frame->setFrameShape(QFrame::StyledPanel);
        admin_cart_frame->setFrameShadow(QFrame::Raised);
        gridLayout_15 = new QGridLayout(admin_cart_frame);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName("gridLayout_15");
        gridLayout_16 = new QGridLayout();
        gridLayout_16->setSpacing(6);
        gridLayout_16->setObjectName("gridLayout_16");
        admin_order_type_cmb = new QComboBox(admin_cart_frame);
        admin_order_type_cmb->setObjectName("admin_order_type_cmb");
        admin_order_type_cmb->setMinimumSize(QSize(130, 0));

        gridLayout_16->addWidget(admin_order_type_cmb, 1, 2, 1, 2);

        admin_phone_number_label = new QPushButton(admin_cart_frame);
        admin_phone_number_label->setObjectName("admin_phone_number_label");
        admin_phone_number_label->setMaximumSize(QSize(35, 16777215));
        admin_phone_number_label->setIcon(icon);

        gridLayout_16->addWidget(admin_phone_number_label, 0, 3, 1, 1);

        admin_discount_label = new QLabel(admin_cart_frame);
        admin_discount_label->setObjectName("admin_discount_label");
        admin_discount_label->setMinimumSize(QSize(0, 0));

        gridLayout_16->addWidget(admin_discount_label, 1, 1, 1, 1);

        discount_spinbox = new QDoubleSpinBox(admin_cart_frame);
        discount_spinbox->setObjectName("discount_spinbox");
        discount_spinbox->setMinimumSize(QSize(80, 0));
        discount_spinbox->setMaximumSize(QSize(100, 16777215));

        gridLayout_16->addWidget(discount_spinbox, 1, 0, 1, 1);

        admin_phone_number = new QLineEdit(admin_cart_frame);
        admin_phone_number->setObjectName("admin_phone_number");

        gridLayout_16->addWidget(admin_phone_number, 0, 0, 1, 3);


        gridLayout_15->addLayout(gridLayout_16, 1, 0, 1, 2);

        admin_cartScrollArea = new QScrollArea(admin_cart_frame);
        admin_cartScrollArea->setObjectName("admin_cartScrollArea");
        admin_cartScrollArea->setMinimumSize(QSize(280, 0));
        admin_cartScrollArea->setStyleSheet(QString::fromUtf8(""));
        admin_cartScrollArea->setWidgetResizable(true);
        admin_cart_contents = new QWidget();
        admin_cart_contents->setObjectName("admin_cart_contents");
        admin_cart_contents->setGeometry(QRect(0, 0, 278, 456));
        admin_cart_contents->setMinimumSize(QSize(0, 0));
        layoutWidget5 = new QWidget(admin_cart_contents);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(10, 10, 261, 441));
        admin_cartVerticalLayout = new QVBoxLayout(layoutWidget5);
        admin_cartVerticalLayout->setSpacing(6);
        admin_cartVerticalLayout->setContentsMargins(11, 11, 11, 11);
        admin_cartVerticalLayout->setObjectName("admin_cartVerticalLayout");
        admin_cartVerticalLayout->setContentsMargins(0, 0, 0, 0);
        admin_cartScrollArea->setWidget(admin_cart_contents);

        gridLayout_15->addWidget(admin_cartScrollArea, 0, 0, 1, 2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        admin_check_discount = new QPushButton(admin_cart_frame);
        admin_check_discount->setObjectName("admin_check_discount");
        admin_check_discount->setIcon(icon);

        horizontalLayout_6->addWidget(admin_check_discount);

        admin_price_after = new QLabel(admin_cart_frame);
        admin_price_after->setObjectName("admin_price_after");
        admin_price_after->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: #c92a2a;\n"
"font-weight: bold;\n"
"font-size: 14px;"));

        horizontalLayout_6->addWidget(admin_price_after);

        admin_price_after_const = new QLabel(admin_cart_frame);
        admin_price_after_const->setObjectName("admin_price_after_const");
        admin_price_after_const->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: #c92a2a;\n"
"font-weight: bold;\n"
"font-size: 12px;"));

        horizontalLayout_6->addWidget(admin_price_after_const);

        admin_price_before = new QLabel(admin_cart_frame);
        admin_price_before->setObjectName("admin_price_before");
        admin_price_before->setStyleSheet(QString::fromUtf8("border: none;\n"
"font-size: 14px"));

        horizontalLayout_6->addWidget(admin_price_before);

        admin_price_before_const = new QLabel(admin_cart_frame);
        admin_price_before_const->setObjectName("admin_price_before_const");
        admin_price_before_const->setStyleSheet(QString::fromUtf8("border: none;\n"
"font-size: 12px"));

        horizontalLayout_6->addWidget(admin_price_before_const);


        gridLayout_15->addLayout(horizontalLayout_6, 2, 0, 1, 2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        admin_cancel_order = new QPushButton(admin_cart_frame);
        admin_cancel_order->setObjectName("admin_cancel_order");
        admin_cancel_order->setMaximumSize(QSize(30, 16777215));
        admin_cancel_order->setIcon(icon);

        horizontalLayout_7->addWidget(admin_cancel_order);

        admin_retrieve = new QPushButton(admin_cart_frame);
        admin_retrieve->setObjectName("admin_retrieve");

        horizontalLayout_7->addWidget(admin_retrieve);

        admin_sell = new QPushButton(admin_cart_frame);
        admin_sell->setObjectName("admin_sell");

        horizontalLayout_7->addWidget(admin_sell);


        gridLayout_15->addLayout(horizontalLayout_7, 3, 0, 1, 2);


        gridLayout_3->addWidget(admin_cart_frame, 0, 0, 1, 1);


        gridLayout_17->addWidget(admin_main_frame, 0, 0, 1, 1);

        formsStackedWidget->addWidget(admin_main_form);

        gridLayout_10->addWidget(formsStackedWidget, 1, 0, 1, 1);

        cashRegisterSystem2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(cashRegisterSystem2Class);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1366, 22));
        cashRegisterSystem2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(cashRegisterSystem2Class);
        mainToolBar->setObjectName("mainToolBar");
        cashRegisterSystem2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(cashRegisterSystem2Class);
        statusBar->setObjectName("statusBar");
        cashRegisterSystem2Class->setStatusBar(statusBar);

        retranslateUi(cashRegisterSystem2Class);

        formsStackedWidget->setCurrentIndex(6);
        item_type_item->setCurrentIndex(0);
        class_box->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(cashRegisterSystem2Class);
    } // setupUi

    void retranslateUi(QMainWindow *cashRegisterSystem2Class)
    {
        cashRegisterSystem2Class->setWindowTitle(QCoreApplication::translate("cashRegisterSystem2Class", "cashRegisterSystem2", nullptr));
        main_menu->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\331\202\330\247\330\246\331\205\330\251 \330\247\331\204\330\261\330\246\331\212\330\263\331\212\330\251", nullptr));
        product_menu->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\331\202\330\247\330\246\331\205\330\251 \330\247\331\204\330\263\331\204\330\271", nullptr));
        customers_menu->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\331\202\330\247\330\246\331\205\330\251 \330\247\331\204\330\271\331\205\331\204\330\247\330\241", nullptr));
        add_customers_menu->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\266\330\247\331\201\330\251 \330\271\331\205\331\212\331\204", nullptr));
        go_to_admin_form->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\265\331\201\330\255\330\251 \330\247\331\204\330\247\330\257\331\205\331\206", nullptr));
        logout->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\252\330\263\330\254\331\212\331\204 \330\256\330\261\331\210\330\254", nullptr));
        username_label->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\263\331\205 \330\247\331\204\331\205\330\263\330\252\330\256\330\257\331\205", nullptr));
        password_field->setText(QString());
        passwod_label->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\330\261\331\202\331\205 \330\247\331\204\330\263\330\261\331\212", nullptr));
        login_btn->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\257\330\256\331\210\331\204", nullptr));
        user_phone_number_label->setText(QString());
        user_check_discount->setText(QString());
        user_price_after->setText(QCoreApplication::translate("cashRegisterSystem2Class", "0", nullptr));
        user_price_after_const->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\330\263\330\271\330\261 \330\250\330\271\330\257 \330\247\331\204\330\256\330\265\331\205:", nullptr));
        user_price_before->setText(QCoreApplication::translate("cashRegisterSystem2Class", "0", nullptr));
        user_price_before_const->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\330\263\330\271\330\261 \331\202\330\250\331\204 \330\247\331\204\330\256\330\265\331\205:", nullptr));
        user_cancel_order->setText(QString());
        user_retrieve->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\263\330\252\330\261\330\254\330\247\330\271", nullptr));
        user_sell->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\331\212\330\271", nullptr));
        label_2->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\266\330\247\331\201\330\251/\330\255\330\260\331\201 \330\272\330\261\330\266:", nullptr));
        label_3->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\266\330\247\331\201\330\251/\330\255\330\260\331\201 \331\203\331\205\331\212\330\251:", nullptr));
        label_4->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\263\331\205 \330\247\331\204\330\272\330\261\330\266", nullptr));
        add_item->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\266\330\247\331\201\330\251", nullptr));
        remove_item->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\255\330\260\331\201", nullptr));
        label_5->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\330\263\330\271\330\261", nullptr));
        label_6->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\331\203\331\205\331\212\330\251", nullptr));
        label_7->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\331\206\331\210\330\271", nullptr));
        remove_quantity->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\255\330\260\331\201", nullptr));
        add_quantity->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\266\330\247\331\201\330\251", nullptr));
        label_20->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\263\331\205 \330\247\331\204\330\272\330\261\330\266", nullptr));
        label_21->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\331\203\331\205\331\212\330\251", nullptr));
        item_type_item->setItemText(0, QCoreApplication::translate("cashRegisterSystem2Class", "\330\256\331\212\331\210\330\267 \330\265\331\210\331\201", nullptr));
        item_type_item->setItemText(1, QCoreApplication::translate("cashRegisterSystem2Class", "\330\256\331\212\331\210\330\267 \331\202\330\267\331\206", nullptr));
        item_type_item->setItemText(2, QCoreApplication::translate("cashRegisterSystem2Class", "\330\256\331\212\331\210\330\267 \331\205\331\203\330\261\331\205\331\212\330\251", nullptr));
        item_type_item->setItemText(3, QCoreApplication::translate("cashRegisterSystem2Class", "\330\256\331\212\331\210\330\267 \330\252\330\267\330\261\331\212\330\262", nullptr));
        item_type_item->setItemText(4, QCoreApplication::translate("cashRegisterSystem2Class", "\330\256\331\212\331\210\330\267 \331\203\331\204\331\212\331\205", nullptr));
        item_type_item->setItemText(5, QCoreApplication::translate("cashRegisterSystem2Class", "\330\256\331\212\331\210\330\267 \330\256\331\212\330\247\330\267\330\251", nullptr));
        item_type_item->setItemText(6, QCoreApplication::translate("cashRegisterSystem2Class", "\330\256\331\212\331\210\330\267 \330\256\331\212\330\264", nullptr));
        item_type_item->setItemText(7, QCoreApplication::translate("cashRegisterSystem2Class", "\330\256\331\212\331\210\330\267 \331\205\330\263\330\252\331\210\330\261\330\257\330\251", nullptr));
        item_type_item->setItemText(8, QCoreApplication::translate("cashRegisterSystem2Class", "\331\203\331\206\331\201\330\247\330\251 \331\205\330\265\330\261\331\212", nullptr));
        item_type_item->setItemText(9, QCoreApplication::translate("cashRegisterSystem2Class", "\331\203\331\206\331\201\330\247\330\251 \330\265\331\212\331\206\331\212", nullptr));
        item_type_item->setItemText(10, QCoreApplication::translate("cashRegisterSystem2Class", "\331\203\331\206\331\201\330\247\330\251 \331\205\330\263\330\252\331\210\330\261\330\257\330\251", nullptr));
        item_type_item->setItemText(11, QCoreApplication::translate("cashRegisterSystem2Class", "\330\256\330\261\330\262", nullptr));
        item_type_item->setItemText(12, QCoreApplication::translate("cashRegisterSystem2Class", "\330\271\331\202\330\247\330\257 \330\256\330\261\330\262", nullptr));
        item_type_item->setItemText(13, QCoreApplication::translate("cashRegisterSystem2Class", "\330\262\330\261\330\247\331\212\330\261", nullptr));
        item_type_item->setItemText(14, QCoreApplication::translate("cashRegisterSystem2Class", "\331\205\330\271\330\257\330\247\330\252 \330\247\331\203\330\263\330\263\331\210\330\247\330\261", nullptr));
        item_type_item->setItemText(15, QCoreApplication::translate("cashRegisterSystem2Class", "\331\205\330\271\330\257\330\247\330\252 \330\252\330\267\330\261\331\212\330\262", nullptr));
        item_type_item->setItemText(16, QCoreApplication::translate("cashRegisterSystem2Class", "\331\205\330\271\330\257\330\247\330\252 \330\256\331\212\330\247\330\267\330\251", nullptr));
        item_type_item->setItemText(17, QCoreApplication::translate("cashRegisterSystem2Class", "\331\205\330\271\330\257\330\247\330\252 \331\205\331\203\330\261\331\205\331\212\330\251", nullptr));
        item_type_item->setItemText(18, QCoreApplication::translate("cashRegisterSystem2Class", "\331\205\330\271\330\257\330\247\330\252 \330\254\331\204\330\257", nullptr));
        item_type_item->setItemText(19, QCoreApplication::translate("cashRegisterSystem2Class", "\331\205\330\271\330\257\330\247\330\252 \330\247\331\204\331\203\330\261\330\264\331\212\330\251 \331\210 \330\247\331\204\330\252\330\261\331\203\331\210", nullptr));
        item_type_item->setItemText(20, QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\203\330\263\330\263\331\210\330\247\330\261\330\247\330\252", nullptr));
        item_type_item->setItemText(21, QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\257\331\210\330\247\330\252 \331\204\331\204\330\264\330\271\330\261", nullptr));
        item_type_item->setItemText(22, QCoreApplication::translate("cashRegisterSystem2Class", "\330\264\330\261\330\250\330\247\330\252", nullptr));
        item_type_item->setItemText(23, QCoreApplication::translate("cashRegisterSystem2Class", "\330\261\331\212\330\264", nullptr));
        item_type_item->setItemText(24, QCoreApplication::translate("cashRegisterSystem2Class", "\331\201\330\261\331\210", nullptr));
        item_type_item->setItemText(25, QCoreApplication::translate("cashRegisterSystem2Class", "\331\203\331\210\330\261\331\203", nullptr));
        item_type_item->setItemText(26, QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\267\331\202\331\205 \330\254\331\204\331\210\330\257", nullptr));
        item_type_item->setItemText(27, QCoreApplication::translate("cashRegisterSystem2Class", "\330\254\331\204\331\210\330\257", nullptr));
        item_type_item->setItemText(28, QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\256\330\264\330\247\330\250", nullptr));
        item_type_item->setItemText(29, QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\263\330\252\331\212\331\203", nullptr));
        item_type_item->setItemText(30, QCoreApplication::translate("cashRegisterSystem2Class", "\330\256\331\212\331\210\330\267 \330\247\331\203\330\263\330\263\331\210\330\247\330\261", nullptr));
        item_type_item->setItemText(31, QCoreApplication::translate("cashRegisterSystem2Class", "\330\264\330\261\330\247\330\246\330\267", nullptr));
        item_type_item->setItemText(32, QCoreApplication::translate("cashRegisterSystem2Class", "\330\252\330\271\331\204\331\212\331\202\330\247\330\252", nullptr));
        item_type_item->setItemText(33, QCoreApplication::translate("cashRegisterSystem2Class", "\331\205\331\206\330\270\331\205\330\247\330\252", nullptr));
        item_type_item->setItemText(34, QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\331\204\330\254\330\247\330\252", nullptr));
        item_type_item->setItemText(35, QCoreApplication::translate("cashRegisterSystem2Class", "\331\205\330\255\330\247\331\201\330\270", nullptr));
        item_type_item->setItemText(36, QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\202\331\205\330\264\330\251", nullptr));
        item_type_item->setItemText(37, QCoreApplication::translate("cashRegisterSystem2Class", "\330\257\331\212\331\203\331\210\330\261", nullptr));
        item_type_item->setItemText(38, QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\261\330\250\330\267\330\251", nullptr));
        item_type_item->setItemText(39, QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\331\210\331\203\330\263\330\247\330\252", nullptr));
        item_type_item->setItemText(40, QCoreApplication::translate("cashRegisterSystem2Class", "\331\205\330\263\330\252\331\204\330\262\331\205\330\247\330\252 \330\263\330\252\330\247\330\246\330\261", nullptr));
        item_type_item->setItemText(41, QCoreApplication::translate("cashRegisterSystem2Class", "\331\210\330\261\330\257 \330\265\331\206\330\247\330\271\331\212", nullptr));
        item_type_item->setItemText(42, QCoreApplication::translate("cashRegisterSystem2Class", "\330\263\331\204\330\247\330\263\331\204 \330\250\330\247\331\204\331\205\330\252\330\261", nullptr));
        item_type_item->setItemText(43, QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\330\261\331\210\330\264\330\247\330\252", nullptr));
        item_type_item->setItemText(44, QCoreApplication::translate("cashRegisterSystem2Class", "\331\205\330\263\330\252\331\204\330\262\331\205\330\247\330\252 \330\247\330\255\330\260\331\212\330\251", nullptr));
        item_type_item->setItemText(45, QCoreApplication::translate("cashRegisterSystem2Class", "\330\263\331\210\330\263\330\252", nullptr));
        item_type_item->setItemText(46, QCoreApplication::translate("cashRegisterSystem2Class", "\331\205\330\263\330\252\331\204\330\262\331\205\330\247\330\252 \330\264\331\206\330\267", nullptr));
        item_type_item->setItemText(47, QCoreApplication::translate("cashRegisterSystem2Class", "\330\264\331\206\330\267 \331\202\331\205\330\247\330\264", nullptr));
        item_type_item->setItemText(48, QCoreApplication::translate("cashRegisterSystem2Class", "\330\264\331\206\330\267 \330\256\331\210\330\265", nullptr));
        item_type_item->setItemText(49, QCoreApplication::translate("cashRegisterSystem2Class", "\331\204\330\247\330\265\331\202", nullptr));
        item_type_item->setItemText(50, QCoreApplication::translate("cashRegisterSystem2Class", "\330\254\331\212\330\250\330\261\330\247\330\252", nullptr));
        item_type_item->setItemText(51, QCoreApplication::translate("cashRegisterSystem2Class", "\330\254\330\247\331\204\331\210\331\206\330\247\330\252", nullptr));
        item_type_item->setItemText(52, QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\250\330\261", nullptr));
        item_type_item->setItemText(53, QCoreApplication::translate("cashRegisterSystem2Class", "\331\205\330\263\330\252\331\204\330\262\331\205\330\247\330\252 \331\205\330\247\331\203\331\212\331\206\330\251 \330\256\331\212\330\247\330\267\330\251", nullptr));
        item_type_item->setItemText(54, QCoreApplication::translate("cashRegisterSystem2Class", "\330\252\331\210\331\203", nullptr));
        item_type_item->setItemText(55, QCoreApplication::translate("cashRegisterSystem2Class", "\331\205\331\201\330\247\330\261\330\264 \330\247\331\212\330\252\330\247\331\205\331\212\331\206", nullptr));
        item_type_item->setItemText(56, QCoreApplication::translate("cashRegisterSystem2Class", "\331\205\331\201\330\247\330\261\330\264 \331\204\330\247\330\263\331\212\330\251", nullptr));
        item_type_item->setItemText(57, QCoreApplication::translate("cashRegisterSystem2Class", "\330\271\330\247\331\205\330\251", nullptr));

        label_12->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\252\330\271\330\257\331\212\331\204 \330\247\331\204\330\263\330\271\330\261:", nullptr));
        edit_price->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\252\330\271\330\257\331\212\331\204", nullptr));
        label_27->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\263\331\205 \330\247\331\204\330\272\330\261\330\266", nullptr));
        label_28->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\330\263\330\271\330\261", nullptr));
        label_22->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\330\252\330\255\331\203\331\205 \331\201\331\212 \330\247\331\204\330\250\330\266\330\247\330\271\330\251:", nullptr));
        label_23->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\271\331\205\331\204\331\212\330\247\330\252 \330\247\331\204\330\250\331\212\330\271:", nullptr));
        label_25->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\271\331\205\331\204\331\212\330\247\330\252 \330\247\330\263\330\252\330\261\330\254\330\247\330\271:", nullptr));
        label_24->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\254\331\205\330\247\331\204\331\212 \330\271\331\205\331\204\331\212\330\247\330\252 \330\247\331\204\330\250\331\212\330\271 \331\210 \330\247\331\204\330\247\330\263\330\252\330\261\330\254\330\247\330\271:", nullptr));
        label_26->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\254\331\205\330\247\331\204\331\212 \330\247\331\204\331\212\331\210\331\205", nullptr));
        label_14->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\331\206\331\210\330\271 \330\247\331\204\330\267\331\204\330\250:", nullptr));
        opType->setItemText(0, QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\331\203\331\204", nullptr));
        opType->setItemText(1, QCoreApplication::translate("cashRegisterSystem2Class", "\330\267\331\204\330\250 \330\271\330\247\330\257\331\212", nullptr));
        opType->setItemText(2, QCoreApplication::translate("cashRegisterSystem2Class", "\330\267\331\204\330\250 \330\247\331\210\331\206\331\204\330\247\331\212\331\206", nullptr));
        opType->setItemText(3, QCoreApplication::translate("cashRegisterSystem2Class", "\330\267\331\204\330\250 \330\254\331\205\331\204\330\251", nullptr));

        label_11->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\256\330\252\330\261 \330\247\331\204\330\252\330\247\330\261\331\212\330\256:", nullptr));
        date_search->setDisplayFormat(QCoreApplication::translate("cashRegisterSystem2Class", "d/M/yyyy", nullptr));
        OPsearch->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\330\255\330\253", nullptr));
        nameLable->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\263\331\205 \330\247\331\204\330\271\331\205\331\212\331\204", nullptr));
        phoneLable->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\261\331\202\331\205 \330\247\331\204\331\205\331\210\330\250\330\247\331\212\331\204", nullptr));
        class_box->setCurrentText(QString());
        classLable->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\252\330\265\331\206\331\212\331\201 \330\247\331\204\330\271\331\205\331\212\331\204", nullptr));
        add_new->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\245\330\266\330\247\331\201\330\251", nullptr));
        label_8->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\330\255\330\253 \330\250\330\247\331\204\330\247\330\263\331\205", nullptr));
        label_9->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\330\255\330\253 \330\250\330\261\331\202\331\205 \330\247\331\204\331\207\330\247\330\252\331\201", nullptr));
        label_10->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\330\255\330\253 \330\250\330\247\331\204\331\201\330\246\330\251", nullptr));
        ranksearch->setItemText(0, QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\331\203\331\204", nullptr));
        ranksearch->setItemText(1, QCoreApplication::translate("cashRegisterSystem2Class", "\330\271\331\205\331\212\331\204 \330\271\330\247\330\257\331\212", nullptr));
        ranksearch->setItemText(2, QCoreApplication::translate("cashRegisterSystem2Class", "\330\271\331\205\331\212\331\204 \331\205\331\207\331\205", nullptr));
        ranksearch->setItemText(3, QCoreApplication::translate("cashRegisterSystem2Class", "\330\267\330\247\331\204\330\250", nullptr));

        Search_btn->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\330\255\330\253", nullptr));
        ProdTypeSearch->setItemText(0, QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\331\203\331\204", nullptr));

        searchprobuctsBTN->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\330\255\330\253", nullptr));
        ProdTypeLabel->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\331\206\331\210\330\271 \330\247\331\204\330\263\331\204\330\271\330\251", nullptr));
        ProdNameLabel->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\263\331\205 \330\247\331\204\330\263\331\204\330\271\330\251", nullptr));
        admin_order_type_cmb->setPlaceholderText(QCoreApplication::translate("cashRegisterSystem2Class", "\331\206\331\210\330\271 \330\247\331\204\330\267\331\204\330\250", nullptr));
        admin_phone_number_label->setText(QString());
        admin_discount_label->setText(QCoreApplication::translate("cashRegisterSystem2Class", "     \330\247\331\204\330\256\330\265\331\205:", nullptr));
        admin_check_discount->setText(QString());
        admin_price_after->setText(QCoreApplication::translate("cashRegisterSystem2Class", "0", nullptr));
        admin_price_after_const->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\330\263\330\271\330\261 \330\250\330\271\330\257 \330\247\331\204\330\256\330\265\331\205:", nullptr));
        admin_price_before->setText(QCoreApplication::translate("cashRegisterSystem2Class", "0", nullptr));
        admin_price_before_const->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\331\204\330\263\330\271\330\261 \331\202\330\250\331\204 \330\247\331\204\330\256\330\265\331\205:", nullptr));
        admin_cancel_order->setText(QString());
        admin_retrieve->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\247\330\263\330\252\330\261\330\254\330\247\330\271", nullptr));
        admin_sell->setText(QCoreApplication::translate("cashRegisterSystem2Class", "\330\250\331\212\330\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cashRegisterSystem2Class: public Ui_cashRegisterSystem2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHREGISTERSYSTEM_H
