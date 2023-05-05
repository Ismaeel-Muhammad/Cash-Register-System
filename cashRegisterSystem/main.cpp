#include "cashRegisterSystem.h"
#include <QtWidgets/QApplication>
#include <QMessageBox>
#include <QInputDialog>
#include "login_form.h"

#include "sqlite/sqlite3.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cashRegisterSystem w;
    login_form login;
    login.show();
    
    return a.exec();
}
