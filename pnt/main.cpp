#include "labelchild.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.getmian(&w);
    w.show();

    return a.exec();
}
