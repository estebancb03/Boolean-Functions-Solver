#ifndef LISTAMINTERMINOS_H
#define LISTAMINTERMINOS_H
#include "NodoMinterminos.h"

class ListaMinterminos {
    NodoMinterminos *cabeza;
    public:
        ListaMinterminos() { cabeza = nullptr; };
        ~ListaMinterminos() { delete cabeza; };
        void agregarMintermino(Mintermino *m);
        void getValoresVerdad(bool arrayVerdades[]);
        int longitud();
};

#endif // LISTAMINTERMINOS_H