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
        void eliminarObjeto(int i);
        Nodo<T> *getNodo(string s);
        bool encontrar(string s);
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

template <typename T>
int Lista<T> :: longitud() {
    int cont = 0;
    Nodo<T> *temp = cabeza;
    while(temp != nullptr) {
        cont++;
        temp = temp -> getSiguiente();
    }
        return cont;
}

template <typename T>
Nodo<T>* Lista<T> :: getNodo(string s) {
    Nodo<T> *temp = cabeza;
    while(temp -> getSiguiente() != nullptr && temp -> getObjeto() -> getFormula().find(s) == string :: npos) {
        temp = temp -> getSiguiente();
    }
    return temp;
}

template <typename T>
bool Lista<T> :: encontrar(string s) {
    bool encontrado = false;
    Nodo<T> *temp = cabeza;
    while(encontrado == false && temp != nullptr) {
        if(temp -> getObjeto() -> getFormula().find(s) != string :: npos)
            encontrado = true;
        temp = temp -> getSiguiente();
    }
    return encontrado;
}

template <typename T>
void Lista<T> :: eliminarObjeto(int i) {
    Nodo<T> *temp= cabeza;
        int posicion = 0;
        int encontrado = i;
        while((cabeza != nullptr) && posicion <= encontrado){
            cabeza = temp -> getSiguiente();
            posicion++;
            if(posicion == encontrado)
                temp = nullptr;
        }
}

#endif  // LISTA_H
