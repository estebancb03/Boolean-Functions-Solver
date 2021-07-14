#include "Controlador.h"
#include "mainwindow.h"
#include "FuncionBooleana.h" //Aqui va el otro con el que se conecta y necesita le lleguen los datos

controlador::controlador()
{
    ventana = new MainWindow(nullptr);
    ventana -> setControlador(this);
    ventana -> show;
}

void controlador::push(){ //de parametros van los datos que se van a enviar
    //ObjetoAlQueSeEnvianDatos->push(DATO CONVEVERTIDO);

}




