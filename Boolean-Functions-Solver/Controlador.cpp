#include "Controlador.h"

Controlador :: Controlador() {
    funcion = new FuncionBooleana();
    ventana = new MainWindow(nullptr);
    ventana -> setControlador(this);
    ventana -> show();
}


void Controlador :: push(string ff, bool array[]){
    funcion -> push(ff, array);
}


bool Controlador :: pull() {
    funcion -> evaluar();
    return funcion -> getValorVerdad();
}
