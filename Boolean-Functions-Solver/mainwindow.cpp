#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui -> setupUi(this);
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
    QString valor = comboBox -> currentText();
    if(valor == "False")
        result = false;
    return result;
}

void MainWindow :: agregarMinterminoMatriz(QTextEdit *textEdit, QString mintermino) {
    QString resultado = textEdit -> toPlainText();
    if(resultado != "")
        resultado += "+";
    resultado += mintermino;
    textEdit -> setText(resultado);
}

void MainWindow :: borrar() {
    ui -> textEditFuncion -> setText("");
    ui -> textEditResult -> setText("");
    ui -> comboBoxA -> setCurrentText("True");
    ui -> comboBoxB -> setCurrentText("True");
    ui -> comboBoxC -> setCurrentText("True");
    ui -> comboBoxD -> setCurrentText("True");
}

void MainWindow :: push(string formula, bool valoresVerdad[]) {
    controlador -> push(formula, valoresVerdad);
}

void MainWindow :: agregarMinterminoMatriz(QTextEdit *textEdit, QString mintermino) {
    QString resultado = textEdit -> toPlainText();
    resultado += mintermino;
    textEdit -> setText("+a'b'c'd'");
}

void MainWindow::on_pushButtonBorrar_clicked() {
    borrar();
}


void MainWindow::on_pushButtonEvaluar_clicked() {
    bool a = obtenerDatosComboBox(ui -> comboBoxA);
    bool b = obtenerDatosComboBox(ui -> comboBoxB);
    bool c = obtenerDatosComboBox(ui -> comboBoxC);
    bool d = obtenerDatosComboBox(ui -> comboBoxD);
    bool array[4] = { a, b, c, d };
    string formula = ui -> textEditFuncion -> toPlainText().toStdString();
    push(formula,array);
    QString resultado;
    if(!controlador -> pull())
        resultado = "False";
    else
        resultado = "True";
     ui -> textEditResult -> setText(resultado);
}


<<<<<<< HEAD
void MainWindow::on_pushButton00_clicked() {
    agregarMinterminoMatriz(ui -> textEditFuncion, "a'b'c'd'");
}


void MainWindow::on_pushButton01_clicked() {
    agregarMinterminoMatriz(ui -> textEditFuncion, "a'bc'd'");
=======
void MainWindow::on_pushButton_clicked()
{
    agregarMinterminoMatriz(ui -> textEditFuncion, "+a'b'c'd'");
}


void MainWindow::on_pushButton01_clicked()
{
    agregarMinterminoMatriz(ui -> textEditFuncion, "+a'b'c'd'");
>>>>>>> 738d9515fcfe1849c16788dffe3982b2d7579fd8
}

