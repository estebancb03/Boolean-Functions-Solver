#include <iostream>
#include "ListaMinterminos.h"
using namespace std;

void ListaMinterminos :: agregarMintermino(Mintermino *m) {
    NodoMinterminos *temp = cabeza;
    NodoMinterminos *nuevo = new NodoMinterminos(m);
    if(temp == nullptr)
        cabeza = nuevo;
    else {
        while(temp -> getSiguiente() != nullptr)
            temp = temp -> getSiguiente();
        temp -> setSiguiente(nuevo);
    }
}
