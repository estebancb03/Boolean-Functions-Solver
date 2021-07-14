#include "mainwindow.h"
#include "ui_mainwindow.h"
<<<<<<< HEAD
#include "controlador.h"
=======
#include "FuncionBooleana.h"

>>>>>>> bf57ee28b69d2f9658d0f09a6b73f74bc10124e8
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    llenarComboBox(ui -> comboBoxA);
    llenarComboBox(ui -> comboBoxB);
    llenarComboBox(ui -> comboBoxC);
    llenarComboBox(ui -> comboBoxD);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow :: llenarComboBox(QComboBox *comboBox) {
    comboBox -> addItems({"True", "False"});
}

bool MainWindow :: obtenerDatosComboBox(QComboBox *comboBox) {
    bool result = true;
    QString valor = comboBox->currentText();
    if(valor == "False")
        result = false;
    return result;
}

<<<<<<< HEAD
void MainWindow::enviarDatosPush(){
    controlador -> push("DATOS");
}
=======
void MainWindow :: borrar() {
    ui -> textEditFuncion -> setText("");
    ui -> textEditResult -> setText("");
}

void MainWindow::on_pushButtonEvaluar_clicked() {
    bool a = obtenerDatosComboBox(ui -> comboBoxA);
    bool b = obtenerDatosComboBox(ui -> comboBoxB);
    bool c = obtenerDatosComboBox(ui -> comboBoxC);
    bool d = obtenerDatosComboBox(ui -> comboBoxD);
    bool array[4] = { a, b, c, d };
    string formula = ui -> textEditFuncion -> toPlainText().toStdString();
    FuncionBooleana *funcion = new FuncionBooleana(formula,array);
    funcion -> evaluar();
    QString resultado = "True";
    if(!funcion -> getValorVerdad())
        resultado = "False";
    ui -> textEditResult -> setText(resultado);
}


void MainWindow::on_pushButtonBorrar_clicked() { borrar(); }

>>>>>>> bf57ee28b69d2f9658d0f09a6b73f74bc10124e8
