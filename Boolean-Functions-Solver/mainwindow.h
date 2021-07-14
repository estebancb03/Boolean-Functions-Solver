#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QComboBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void borrar();
    void llenarComboBox(QComboBox *comboBox);
    bool obtenerDatosComboBox(QComboBox *comboBox);

private slots:
    void on_pushButtonEvaluar_clicked();

    void on_pushButtonBorrar_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
