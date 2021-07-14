#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include "mainwindow.h"
#include "FuncionBooleana.h"
#include <iostream>
using namespace std;

class MainWindow;

class Controlador{
    FuncionBooleana *funcion;
    MainWindow *ventana;
    public:
        Controlador();
        void push(string ff, bool array[]);
};

#endif // CONTROLADOR_H
