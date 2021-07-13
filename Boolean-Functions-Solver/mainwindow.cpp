#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow :: llenarComboBox(QComboBox comboBox) {
    comboBox.addItems({"True", "False"});
}

bool MainWindow :: obtenerDatosComboBox(QComboBox comboBox) {
    bool result = true;
    QString valor = comboBox.currentText();
    if(valor == "False")
        !result;
    return result;
}
