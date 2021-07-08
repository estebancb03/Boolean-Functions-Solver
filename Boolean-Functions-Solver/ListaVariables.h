#ifndef LISTAVARIABLES_H
#define LISTAVARIABLES_H
#include "NodoVariables.h"

class ListaVariables {
    NodoVariables *cabeza;
    public:
        ListaVariables() { cabeza = nullptr; };
        ~ListaVariables() { delete cabeza; };
        void agregarVariable(string v, bool vv);
        bool getValorVerdad(string v);
        string getVariable(string v);
        bool encontrar(string v);
        int longitud();
};

#endif // LISTAVARIABLES_H