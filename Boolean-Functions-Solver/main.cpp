//Daniel Lizano Morales C04285
//Esteban Castaneda Blanco C01795
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
