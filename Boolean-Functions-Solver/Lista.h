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

/*
  EFECTO: agrega un nodo al final de la lista
  REQUIERE: objeto tipo T
  MODIFICA: lista enlazada
*/
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

/*
  EFECTO: obtiene la cantidad de nodos de la lista
*/
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

/*
  EFECTO: obtiene un nodo que contenga el string de parametro
  REQUIERE: string
*/
template <typename T>
Nodo<T>* Lista<T> :: getNodo(string s) {
    Nodo<T> *temp = cabeza;
    while(temp -> getSiguiente() != nullptr && temp -> getObjeto() -> getFormula().find(s) == string :: npos) {
        temp = temp -> getSiguiente();
    }
    return temp;
}

/*
  EFECTO: encuentra un nodo que tenga el string de parametro y devuelve un bool
  REQUIERE: string
*/
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

/*
  EFECTO: elimina un nodo de una posicion determinada
  REQUIERE: int
  MODIFICA: lista enlazada
*/
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
