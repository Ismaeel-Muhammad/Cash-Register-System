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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cashRegisterSystemClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *cashRegisterSystemClass)
    {
        if (cashRegisterSystemClass->objectName().isEmpty())
            cashRegisterSystemClass->setObjectName("cashRegisterSystemClass");
        cashRegisterSystemClass->resize(600, 400);
        menuBar = new QMenuBar(cashRegisterSystemClass);
        menuBar->setObjectName("menuBar");
        cashRegisterSystemClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(cashRegisterSystemClass);
        mainToolBar->setObjectName("mainToolBar");
        cashRegisterSystemClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(cashRegisterSystemClass);
        centralWidget->setObjectName("centralWidget");
        cashRegisterSystemClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(cashRegisterSystemClass);
        statusBar->setObjectName("statusBar");
        cashRegisterSystemClass->setStatusBar(statusBar);

        retranslateUi(cashRegisterSystemClass);

        QMetaObject::connectSlotsByName(cashRegisterSystemClass);
    } // setupUi

    void retranslateUi(QMainWindow *cashRegisterSystemClass)
    {
        cashRegisterSystemClass->setWindowTitle(QCoreApplication::translate("cashRegisterSystemClass", "cashRegisterSystem", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cashRegisterSystemClass: public Ui_cashRegisterSystemClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHREGISTERSYSTEM_H
