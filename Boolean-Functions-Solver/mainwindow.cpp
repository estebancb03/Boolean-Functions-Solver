#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "FuncionBooleana.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    llenarComboBox(ui->comboBoxA);
    llenarComboBox(ui->comboBoxB);
    llenarComboBox(ui->comboBoxC);
    llenarComboBox(ui->comboBoxD);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow :: llenarComboBox(QComboBox *comboBox) {
    comboBox->addItems({"True", "False"});
}

bool MainWindow :: obtenerDatosComboBox(QComboBox *comboBox) {
    bool result = true;
    QString valor = comboBox->currentText();
    if(valor == "False")
        !result;
    return result;
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
    QString resultado;
    if(funcion->getValorVerdad())
        resultado = "True";
    else
        resultado = "False";
    ui -> textEditResult -> setText(resultado);
}

