#ifndef NODO_H
#define NODO_H
template <class T>

class Nodo {
    T *objeto;
    Nodo<T> *siguiente;
    public:
        Nodo(T *o) { objeto = o; siguiente = nullptr; };
        ~Nodo() { delete objeto; delete siguiente; };
        Nodo<T>* getSiguiente() { return siguiente; };
        T *getObjeto() { return objeto; };
        void setSiguiente(Nodo<T> *s) { siguiente = s; };
};

#endif // NODO_H
