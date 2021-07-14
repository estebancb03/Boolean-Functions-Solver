#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QComboBox>
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
    void push(string formula, bool valoresVerdad[]);
    void setControlador(Controlador *c) { controlador = c; };

private slots:
    void on_pushButtonEvaluar_clicked();

    void on_pushButtonBorrar_clicked();

private:
    Controlador *controlador;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
