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
    cargarBitacora();
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
  EFECTO: agrega items al comboBox
  REQUIERE: QComboBox
  MODIFICA: items del QComboBox
*/
void MainWindow :: llenarComboBox(QComboBox *comboBox) {
    comboBox -> addItems({"True", "False"});
}

/*
  EFECTO:  obtiene texto del item mencionado en el comboBox y devuelve un bool de esta
  REQUIERE: QComboBox
*/
bool MainWindow :: obtenerDatosComboBox(QComboBox *comboBox) {
    bool result = true;
    QString valor = comboBox -> currentText();
    if(valor == "False")
        result = false;
    return result;
}

/*
  EFECTO: agrega minterminos a QTextEdit dependiendo del boton de la matriz seleccionada
  REQUIERE: QTextEdit y QString
*/
void MainWindow :: agregarMinterminoMatriz(QTextEdit *textEdit, QString mintermino) {
    QString resultado = textEdit -> toPlainText();
    if(resultado != "")
        resultado += "+";
    resultado += mintermino;
    textEdit -> setText(resultado);
}

/*
  EFECTO: devuelve a todos los objetos al estado predeterminado
  MODIFICA: QComboBox y QTextEdit
*/
void MainWindow :: borrar() {
    ui -> textEditFuncion -> setText("");
    ui -> textEditResult -> setText("");
    ui -> comboBoxA -> setCurrentText("True");
    ui -> comboBoxB -> setCurrentText("True");
    ui -> comboBoxC -> setCurrentText("True");
    ui -> comboBoxD -> setCurrentText("True");
}

/*
  EFECTO: le da formato a una cadena de texto
  REQUIERE: array tipo string
*/
string MainWindow::formatearTexto(string array[]){
    string resultado;
    string recorrido;
    for(int i = 0; i < 3; i++) {
        recorrido = array[i];
        resultado += recorrido;
        if(i != 2) {
            resultado += "|";
        }
    }
    resultado += " ";
    return resultado;
}

string MainWindow::obtenerHora(){
    auto t = time(nullptr);
    auto tm = *localtime(&t);
    ostringstream oss;
    oss << put_time(&tm, "%d/%m/%Y/%H:%M:%S");
    return oss.str();
}


void MainWindow :: push(string formula, bool valoresVerdad[]) {
    controlador -> push(formula, valoresVerdad);
}

/*
  EFECTO: agrega el contenido de bitacota.txt al QTreeWidget
  MODIFICA: QTreeWidget
*/
void MainWindow :: cargarBitacora() {
    QString arrayContenido[3];
    QFile file(QCoreApplication::applicationDirPath()+"/bitacora.txt");
    file.open(QIODevice::ReadOnly);
    QTextStream texto(&file);
    string contenido;
    stringstream ssContenido(QTextStream(&file).readAll().toStdString());
    while(getline(ssContenido, contenido, ' ')) {
        separarRegistro(arrayContenido, contenido);
        agregarRegistro(arrayContenido[0],arrayContenido[1],arrayContenido[2]);
    }
    file.close();
}

/*
  EFECTO: Separa elementos de un registro
  REQUIERE: string y un array QString
*/
void MainWindow :: separarRegistro(QString array[], string cadena) {
    stringstream ssCadena(cadena);
    string control;
    int i = 0;
    while(getline(ssCadena, control, '|')) {
        array[i] = QString::fromUtf8(control);
        i++;
    }
}
/*
  EFECTO: agrega items al QTreeWidget
  REQUIERE: QString, QString, QString
  MODIFICA: QTreeWidget
*/
void MainWindow :: agregarRegistro(QString fecha, QString valor, QString funcion) {
    QTreeWidgetItem *item = new QTreeWidgetItem(ui -> treeWidget);
    item -> setText(0, fecha);
    item -> setText(1, valor);
    item -> setText(2, funcion);
    ui -> treeWidget -> addTopLevelItem(item);
}

//Eventos de los botones
void MainWindow::on_pushButtonBorrar_clicked() {
    borrar();
}

/*
  EFECTO: agrega items al comboBox
  REQUIERE: QComboBox
  MODIFICA: items del QComboBox
*/
void MainWindow::on_pushButtonEvaluar_clicked() {
    bool a = obtenerDatosComboBox(ui -> comboBoxA);
    bool b = obtenerDatosComboBox(ui -> comboBoxB);
    bool c = obtenerDatosComboBox(ui -> comboBoxC);
    bool d = obtenerDatosComboBox(ui -> comboBoxD);
    bool array[4] = { a, b, c, d };
    string formula = ui -> textEditFuncion -> toPlainText().toStdString();
    push(formula,array);
    QString resultado = "True";
    if(!controlador -> pull()){
        resultado = "False";
    }
    ui -> textEditResult -> setText(resultado);
    string arrayFormateo[3] = { obtenerHora(), resultado.toStdString(), formula };
    QString contenido = QString::fromUtf8(formatearTexto(arrayFormateo).c_str());
    controlador -> pushBitacora(QCoreApplication::applicationDirPath() + "/bitacora.txt",contenido);
    agregarRegistro(QString::fromUtf8(obtenerHora()),resultado,QString::fromUtf8(formula));
}

void MainWindow::on_pushButton00_clicked() {
    agregarMinterminoMatriz(ui -> textEditFuncion, "a'b'c'd'");
}


void MainWindow::on_pushButton01_clicked() {
    agregarMinterminoMatriz(ui -> textEditFuncion, "a'bc'd'");
}


void MainWindow::on_pushButton02_clicked() {
    agregarMinterminoMatriz(ui -> textEditFuncion, "abc'd'");
}


void MainWindow::on_pushButton03_clicked() {
    agregarMinterminoMatriz(ui -> textEditFuncion, "ab'c'd'");
}


void MainWindow::on_pushButton10_clicked() {
    agregarMinterminoMatriz(ui -> textEditFuncion, "a'b'c'd");
}


void MainWindow::on_pushButton11_clicked() {
    agregarMinterminoMatriz(ui -> textEditFuncion, "a'bc'd");
}


void MainWindow::on_pushButton12_clicked() {
    agregarMinterminoMatriz(ui -> textEditFuncion, "abc'd");
}


void MainWindow::on_pushButton13_clicked() {
    agregarMinterminoMatriz(ui -> textEditFuncion, "ab'c'd");
}


void MainWindow::on_pushButton20_clicked() {
    agregarMinterminoMatriz(ui -> textEditFuncion, "a'b'cd");
}


void MainWindow::on_pushButton21_clicked() {
    agregarMinterminoMatriz(ui -> textEditFuncion, "a'bcd");
}


void MainWindow::on_pushButton22_clicked() {
    agregarMinterminoMatriz(ui -> textEditFuncion, "abcd");
}


void MainWindow::on_pushButton23_clicked() {
    agregarMinterminoMatriz(ui -> textEditFuncion, "ab'cd");
}


void MainWindow::on_pushButton30_clicked() {
    agregarMinterminoMatriz(ui -> textEditFuncion, "a'b'cd'");
}


void MainWindow::on_pushButton31_clicked() {
    agregarMinterminoMatriz(ui -> textEditFuncion, "a'bcd'");
}


void MainWindow::on_pushButton32_clicked() {
    agregarMinterminoMatriz(ui -> textEditFuncion, "abcd'");
}


void MainWindow::on_pushButton33_clicked() {
    agregarMinterminoMatriz(ui -> textEditFuncion, "ab'cd'");
}


