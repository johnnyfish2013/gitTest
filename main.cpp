#include "firstprogram.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FirstProgram w;
    w.show();

    return a.exec();
}
