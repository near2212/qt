#include "mainwindow.h"
#include "counter.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //Counter c;

    w.show();
    return a.exec();
}
