/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTextEdit *textEditFuncion;
    QComboBox *comboBoxB;
    QComboBox *comboBoxA;
    QComboBox *comboBoxC;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *comboBoxD;
    QLabel *label_5;
    QTextEdit *textEditResult;
    QLabel *label_6;
    QPushButton *pushButtonEvaluar;
    QPushButton *pushButtonBorrar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(537, 286);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 61, 31));
        textEditFuncion = new QTextEdit(centralwidget);
        textEditFuncion->setObjectName(QString::fromUtf8("textEditFuncion"));
        textEditFuncion->setGeometry(QRect(90, 40, 421, 31));
        comboBoxB = new QComboBox(centralwidget);
        comboBoxB->setObjectName(QString::fromUtf8("comboBoxB"));
        comboBoxB->setGeometry(QRect(220, 100, 69, 22));
        comboBoxA = new QComboBox(centralwidget);
        comboBoxA->setObjectName(QString::fromUtf8("comboBoxA"));
        comboBoxA->setEnabled(true);
        comboBoxA->setGeometry(QRect(110, 100, 69, 22));
        comboBoxC = new QComboBox(centralwidget);
        comboBoxC->setObjectName(QString::fromUtf8("comboBoxC"));
        comboBoxC->setGeometry(QRect(330, 100, 69, 22));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 100, 47, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(200, 100, 47, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(310, 100, 47, 21));
        comboBoxD = new QComboBox(centralwidget);
        comboBoxD->setObjectName(QString::fromUtf8("comboBoxD"));
        comboBoxD->setGeometry(QRect(440, 100, 69, 22));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(420, 100, 47, 21));
        textEditResult = new QTextEdit(centralwidget);
        textEditResult->setObjectName(QString::fromUtf8("textEditResult"));
        textEditResult->setEnabled(false);
        textEditResult->setGeometry(QRect(90, 210, 421, 31));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 210, 61, 31));
        pushButtonEvaluar = new QPushButton(centralwidget);
        pushButtonEvaluar->setObjectName(QString::fromUtf8("pushButtonEvaluar"));
        pushButtonEvaluar->setGeometry(QRect(90, 150, 201, 31));
        pushButtonBorrar = new QPushButton(centralwidget);
        pushButtonBorrar->setObjectName(QString::fromUtf8("pushButtonBorrar"));
        pushButtonBorrar->setGeometry(QRect(310, 150, 201, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 537, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "f(a,b,c,d) =", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "a", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "b", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "c", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "d", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Resultado", nullptr));
        pushButtonEvaluar->setText(QApplication::translate("MainWindow", "Evaluar", nullptr));
        pushButtonBorrar->setText(QApplication::translate("MainWindow", "Borrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
