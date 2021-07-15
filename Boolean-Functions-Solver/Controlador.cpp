#include "Controlador.h"

Controlador :: Controlador() {
    funcion = new FuncionBooleana();
    ventana = new MainWindow(nullptr);
    ventana -> setControlador(this);
    ventana -> show();
}
<<<<<<< HEAD

void Controlador :: push(string ff, bool array[]){
    funcion -> push(ff, array);
=======

void Controlador :: push(string ff, bool *array) {
    funcion -> push(ff, array);
}

bool Controlador :: pull() {
    funcion -> evaluar();
    return funcion -> getValorVerdad();
>>>>>>> 19194caccde3e7c279be59cfc39d0c20035ccc78
}
