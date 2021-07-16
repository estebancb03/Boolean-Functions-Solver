#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QComboBox>
#include <QTextEdit>
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

private slots:
    void on_pushButtonBorrar_clicked();

    void on_pushButtonEvaluar_clicked();

    void on_pushButton_clicked();

    void on_pushButton00_clicked();

    void on_pushButton01_clicked();

private:
    Controlador *controlador;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
