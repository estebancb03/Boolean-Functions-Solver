#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include <iostream>
using namespace std;
template <class T>

class Lista {
    Nodo<T> *cabeza;
    public:
        Lista() { cabeza = nullptr; };
        ~Lista() { delete cabeza; };
        void agregarObjeto(T *o);
        Nodo<T> *getNodo(string s);
        bool encontrar(string s);
        void imprimirLista();
        int longitud();
};

template <typename T>
void Lista<T> :: agregarObjeto(T *o) {
    Nodo<T> *temp = cabeza;
    Nodo<T> *nuevo = new Nodo<T>(o);
    if(temp == nullptr)
        cabeza = nuevo;
    else {
        while(temp -> getSiguiente() != nullptr)
            temp = temp -> getSiguiente();
        temp -> setSiguiente(nuevo);
    }
}

#endif 