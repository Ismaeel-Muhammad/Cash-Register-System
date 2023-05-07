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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestShitClass
{
public:
    QStackedWidget *stackedWidget_2;
    QWidget *page_5;
    QPushButton *login_btn;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *password;
    QLineEdit *name;
    QWidget *page_6;
    QPushButton *vegetables;
    QPushButton *fruits;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QFrame *frame_snacks;
    QWidget *page_3;
    QFrame *frame_fruits;
    QWidget *page_4;
    QFrame *frame_drinks;
    QWidget *page_2;
    QFrame *frame_vegetables;
    QPushButton *drinks;
    QPushButton *snacks;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QPushButton *search;
    QWidget *page_7;
    QPushButton *back;
    QLCDNumber *totalpaid;
    QLabel *customername;
    QLabel *customerPH;
    QLabel *class_2;
    QLCDNumber *id;

    void setupUi(QWidget *TestShitClass)
    {
        if (TestShitClass->objectName().isEmpty())
            TestShitClass->setObjectName("TestShitClass");
        TestShitClass->resize(1026, 800);
        stackedWidget_2 = new QStackedWidget(TestShitClass);
        stackedWidget_2->setObjectName("stackedWidget_2");
        stackedWidget_2->setGeometry(QRect(0, 0, 1021, 791));
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        login_btn = new QPushButton(page_5);
        login_btn->setObjectName("login_btn");
        login_btn->setGeometry(QRect(440, 440, 100, 61));
        login_btn->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;"));
        label = new QLabel(page_5);
        label->setObjectName("label");
        label->setGeometry(QRect(610, 310, 111, 31));
        label->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;\n"
""));
        label_2 = new QLabel(page_5);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(630, 370, 91, 31));
        label_2->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;"));
        password = new QLineEdit(page_5);
        password->setObjectName("password");
        password->setGeometry(QRect(390, 370, 200, 31));
        name = new QLineEdit(page_5);
        name->setObjectName("name");
        name->setGeometry(QRect(390, 310, 200, 31));
        stackedWidget_2->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        vegetables = new QPushButton(page_6);
        vegetables->setObjectName("vegetables");
        vegetables->setGeometry(QRect(750, 10, 81, 71));
        fruits = new QPushButton(page_6);
        fruits->setObjectName("fruits");
        fruits->setGeometry(QRect(620, 10, 91, 71));
        stackedWidget = new QStackedWidget(page_6);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(440, 110, 541, 551));
        page = new QWidget();
        page->setObjectName("page");
        frame_snacks = new QFrame(page);
        frame_snacks->setObjectName("frame_snacks");
        frame_snacks->setGeometry(QRect(0, 0, 541, 551));
        frame_snacks->setStyleSheet(QString::fromUtf8("border:1px solid black"));
        frame_snacks->setFrameShape(QFrame::StyledPanel);
        frame_snacks->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        frame_fruits = new QFrame(page_3);
        frame_fruits->setObjectName("frame_fruits");
        frame_fruits->setGeometry(QRect(0, 0, 541, 551));
        frame_fruits->setStyleSheet(QString::fromUtf8("border:1px solid black"));
        frame_fruits->setFrameShape(QFrame::StyledPanel);
        frame_fruits->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        frame_drinks = new QFrame(page_4);
        frame_drinks->setObjectName("frame_drinks");
        frame_drinks->setGeometry(QRect(0, 0, 541, 551));
        frame_drinks->setStyleSheet(QString::fromUtf8("border:1px solid black"));
        frame_drinks->setFrameShape(QFrame::StyledPanel);
        frame_drinks->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        frame_vegetables = new QFrame(page_2);
        frame_vegetables->setObjectName("frame_vegetables");
        frame_vegetables->setGeometry(QRect(0, 0, 541, 551));
        frame_vegetables->setStyleSheet(QString::fromUtf8("border:1px solid black"));
        frame_vegetables->setFrameShape(QFrame::StyledPanel);
        frame_vegetables->setFrameShadow(QFrame::Raised);
        stackedWidget->addWidget(page_2);
        drinks = new QPushButton(page_6);
        drinks->setObjectName("drinks");
        drinks->setGeometry(QRect(490, 10, 91, 71));
        snacks = new QPushButton(page_6);
        snacks->setObjectName("snacks");
        snacks->setGeometry(QRect(870, 10, 81, 71));
        lineEdit = new QLineEdit(page_6);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(112, 20, 221, 21));
        label_3 = new QLabel(page_6);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(340, 20, 61, 16));
        search = new QPushButton(page_6);
        search->setObjectName("search");
        search->setGeometry(QRect(20, 20, 75, 24));
        stackedWidget_2->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        back = new QPushButton(page_7);
        back->setObjectName("back");
        back->setGeometry(QRect(400, 640, 200, 30));
        totalpaid = new QLCDNumber(page_7);
        totalpaid->setObjectName("totalpaid");
        totalpaid->setGeometry(QRect(780, 470, 161, 131));
        customername = new QLabel(page_7);
        customername->setObjectName("customername");
        customername->setGeometry(QRect(30, 30, 891, 111));
        customername->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:30px;"));
        customerPH = new QLabel(page_7);
        customerPH->setObjectName("customerPH");
        customerPH->setGeometry(QRect(30, 180, 891, 111));
        customerPH->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:30px;"));
        class_2 = new QLabel(page_7);
        class_2->setObjectName("class_2");
        class_2->setGeometry(QRect(30, 330, 121, 41));
        class_2->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"font-size:18px;"));
        id = new QLCDNumber(page_7);
        id->setObjectName("id");
        id->setGeometry(QRect(470, 20, 64, 51));
        stackedWidget_2->addWidget(page_7);

        retranslateUi(TestShitClass);

        stackedWidget_2->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(TestShitClass);
    } // setupUi

    void retranslateUi(QWidget *TestShitClass)
    {
        TestShitClass->setWindowTitle(QCoreApplication::translate("TestShitClass", "TestShit", nullptr));
        login_btn->setText(QCoreApplication::translate("TestShitClass", "\330\257\330\256\331\210\331\204", nullptr));
        label->setText(QCoreApplication::translate("TestShitClass", "\330\247\330\263\331\205 \330\247\331\204\331\205\330\263\330\252\330\256\330\257\331\205", nullptr));
        label_2->setText(QCoreApplication::translate("TestShitClass", "\330\247\331\204\330\261\331\202\331\205 \330\247\331\204\330\263\330\261\331\212", nullptr));
        vegetables->setText(QCoreApplication::translate("TestShitClass", "vegetables", nullptr));
        fruits->setText(QCoreApplication::translate("TestShitClass", "fruits", nullptr));
        drinks->setText(QCoreApplication::translate("TestShitClass", "drinks", nullptr));
        snacks->setText(QCoreApplication::translate("TestShitClass", "snacks", nullptr));
        label_3->setText(QCoreApplication::translate("TestShitClass", "\330\261\331\202\331\205 \330\247\331\204\330\271\331\205\331\212\331\204", nullptr));
        search->setText(QCoreApplication::translate("TestShitClass", "\330\250\330\255\330\253", nullptr));
        back->setText(QCoreApplication::translate("TestShitClass", "\330\271\331\210\330\257\330\251", nullptr));
        customername->setText(QCoreApplication::translate("TestShitClass", "TextLabel", nullptr));
        customerPH->setText(QCoreApplication::translate("TestShitClass", "TextLabel", nullptr));
        class_2->setText(QCoreApplication::translate("TestShitClass", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestShitClass: public Ui_TestShitClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHREGISTERSYSTEM_H
