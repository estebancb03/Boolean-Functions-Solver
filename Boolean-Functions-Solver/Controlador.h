#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "mainwindow.h"
#include "dllbitacora.h"
#include "FuncionBooleana.h"
using namespace std;

class MainWindow;

class Controlador {
    FuncionBooleana *funcion;
    MainWindow *ventana;
    DLLBitacora *dll;
    public:
        Controlador();
        void push(string ff, bool array[]);
        void pushBitacora(QString direccion, QString texto);
        bool pull();
        string pullBitacora(QString direccion);
};

#endif // CONTROLADOR_H
