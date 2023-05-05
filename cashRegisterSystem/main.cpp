#include "cashRegisterSystem.h"
#include <QtWidgets/QApplication>
#include <QMessageBox>
#include <QInputDialog>

#include "sqlite/sqlite3.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cashRegisterSystem w;
    w.show();
    /*sqlite3* dp;
    int rc;
    rc = sqlite3_open("DB.db",&dp);
    if (rc != SQLITE_OK) {
        QMessageBox msg;
        msg.setText("NOPE");
        msg.exec();
    }
    else {
        QMessageBox msg;
        msg.setText("YAAAY");
        msg.exec();
    }*/
    return a.exec();
}
