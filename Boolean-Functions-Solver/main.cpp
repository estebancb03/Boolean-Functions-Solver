#include "mainwindow.h"
#include "Controlador.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    Controlador *controlador = new Controlador();
    return a.exec();
}
