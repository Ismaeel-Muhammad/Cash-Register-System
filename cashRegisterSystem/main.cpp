#include "cashRegisterSystem.h"
#include "database.h"
#include <QtWidgets/QApplication>
#include <QFile>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cashRegisterSystem w;
    Database* db = new Database("mydatabase.db");
    db->initialize();
    db->updateCustomerTotalPaid("0",5);
    w.show();
    QFile styleSheetFile("./Integrid.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    w.setStyleSheet(styleSheet);
    return a.exec();
}
