#include "Controlador.h"

Controlador::Controlador() {
    dll = new DLLBitacora();
    funcion = new FuncionBooleana();
    ventana = new MainWindow(nullptr);
    ventana -> setControlador(this);
    ventana -> show();
}

/*
  EFECTO: se comunica con el metodo push de la clase FuncionBooleana.cpp
  REQUIERE: string y array tipo bool
  MODIFICA: propiedad formulaFuncion e introducidos
*/
void Controlador :: push(string ff, bool array[]){
    funcion -> push(ff, array);
}

/*
  EFECTO: se comunica con el metodo evaluar de la clase FuncionBooleana.cpp y retorna valorVerdad
*/
bool Controlador :: pull() {
    funcion -> evaluar();
    return funcion -> getValorVerdad();
}

/*
  EFECTO: se comunica con el metodo agregarBitacora de la libreria
  REQUIERE: QString, QString
  MODIFICA: bitacora.txt
*/
void Controlador :: pushBitacora(QString direccion, QString texto) {
    dll -> agregarBitacora(direccion, texto);
}

/*
  EFECTO: se comunica con el metodo devolverBitacora de la libreria
  REQUIERE: QString
*/
string Controlador :: pullBitacora(QString direccion) {
    return dll -> devolverBitacora(direccion);
}
