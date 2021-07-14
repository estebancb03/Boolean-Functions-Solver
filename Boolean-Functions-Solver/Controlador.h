#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "mainwindow.h"
#include "FuncionBooleana.h"
#include <iostream>
using namespace std;

class MainWindow;

class Controlador{
    string formula;
    FuncionBooleana *funcion;
    MainWindow *ventana;
    bool valoresVerdad[4];
    public:
        Controlador();
        void push(string ff, bool array[]);
};

#endif // CONTROLADOR_H
