#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QComboBox>
#include <QTextEdit>
#include <QFile>
#include <ctime>
#include <iomanip>
#include <sstream>
#include "Controlador.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Controlador;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void borrar();
    void llenarComboBox(QComboBox *comboBox);
    bool obtenerDatosComboBox(QComboBox *comboBox);
    void agregarMinterminoMatriz(QTextEdit *textEdit, QString mintermino);
    void push(string formula, bool valoresVerdad[]);
    void setControlador(Controlador *c) { controlador = c; };
    void cargarBitacora();
    void agregarRegistro(QString fecha, QString valor, QString funcion);
    void separarRegistro(QString array[], string cadena);
    string formatearTexto(string array[]);
    string obtenerHora();

private slots:
    void on_pushButtonBorrar_clicked();
    void on_pushButtonEvaluar_clicked();
    void on_pushButton00_clicked();
    void on_pushButton01_clicked();
    void on_pushButton02_clicked();
    void on_pushButton03_clicked();
    void on_pushButton10_clicked();
    void on_pushButton11_clicked();
    void on_pushButton12_clicked();
    void on_pushButton13_clicked();
    void on_pushButton20_clicked();
    void on_pushButton21_clicked();
    void on_pushButton22_clicked();
    void on_pushButton23_clicked();
    void on_pushButton30_clicked();
    void on_pushButton31_clicked();
    void on_pushButton32_clicked();
    void on_pushButton33_clicked();

private:
    Controlador *controlador;
    Ui :: MainWindow *ui;
};

#endif // MAINWINDOW_H
