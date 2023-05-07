#include "cashRegisterSystem.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cashRegisterSystem w;
    w.show();
    return a.exec();
}
