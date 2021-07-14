#include "mainwindow.h"

#include <QApplication>
#include "Controlador.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Controlador *controlador = new Controlador();
    return a.exec();
}
