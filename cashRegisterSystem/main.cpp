#include "cashRegisterSystem.h"
#include <QtWidgets/QApplication>
#include <QMessageBox>
#include <QInputDialog>
#include "login_form.h"
#include "database.h"
#include "sqlite/sqlite3.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cashRegisterSystem w;
    login_form login;
    login.show();
    /*Database db("mydatabase.db");
    db.initialize();
    db.insertRows("p1","15",20, "drink");
    db.insertRows("p2", "20", 25, "fruit");
    db.insertRows("p3", "25", 30, "vegetables");
    db.insertRows("p4", "30", 35, "snacks");
    db.insertRows("p5", "15", 20, "drink");
    db.insertRows("p6", "20", 25, "fruit");
    db.insertRows("p7", "25", 30, "vegetables");*/

    return a.exec();
}
