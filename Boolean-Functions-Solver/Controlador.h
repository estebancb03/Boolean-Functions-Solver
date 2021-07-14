#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include <iostream>
using namespace std;

class Controlador {
    public:
        Controlador();
        void push(string formula, bool valoresVerdad[]);
};

#endif // CONTROLADOR_H
