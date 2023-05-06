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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestShitClass
{
public:
    QPushButton *drinks;
    QPushButton *fruits;
    QPushButton *vegetables;
    QPushButton *snacks;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QFrame *frame_snacks;
    QWidget *page_3;
    QFrame *frame_fruits;
    QWidget *page_4;
    QFrame *frame_drinks;
    QWidget *page_2;
    QFrame *frame_vegetables;

    void setupUi(QWidget *TestShitClass)
    {
        if (TestShitClass->objectName().isEmpty())
            TestShitClass->setObjectName("TestShitClass");
        TestShitClass->resize(1026, 800);
        drinks = new QPushButton(TestShitClass);
        drinks->setObjectName("drinks");
        drinks->setGeometry(QRect(520, 10, 91, 71));
        fruits = new QPushButton(TestShitClass);
        fruits->setObjectName("fruits");
        fruits->setGeometry(QRect(650, 10, 91, 71));
        vegetables = new QPushButton(TestShitClass);
        vegetables->setObjectName("vegetables");
        vegetables->setGeometry(QRect(780, 10, 81, 71));
        snacks = new QPushButton(TestShitClass);
        snacks->setObjectName("snacks");
        snacks->setGeometry(QRect(910, 10, 81, 71));
        stackedWidget = new QStackedWidget(TestShitClass);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(460, 90, 541, 551));
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

        retranslateUi(TestShitClass);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(TestShitClass);
    } // setupUi

    void retranslateUi(QWidget *TestShitClass)
    {
        TestShitClass->setWindowTitle(QCoreApplication::translate("TestShitClass", "TestShit", nullptr));
        drinks->setText(QCoreApplication::translate("TestShitClass", "drinks", nullptr));
        fruits->setText(QCoreApplication::translate("TestShitClass", "fruits", nullptr));
        vegetables->setText(QCoreApplication::translate("TestShitClass", "vegetables", nullptr));
        snacks->setText(QCoreApplication::translate("TestShitClass", "snacks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TestShitClass: public Ui_TestShitClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHREGISTERSYSTEM_H
