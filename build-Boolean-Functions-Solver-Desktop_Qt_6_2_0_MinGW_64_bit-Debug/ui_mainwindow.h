/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
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
    QLabel *label_2;
    QComboBox *comboBoxA;
    QLabel *label_3;
    QComboBox *comboBoxB;
    QLabel *label_4;
    QComboBox *comboBoxC;
    QLabel *label_5;
    QComboBox *comboBoxD;
    QTextEdit *textEditResult;
    QPushButton *pushButtonBorrar;
    QPushButton *pushButtonEvaluar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(504, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 35, 55, 21));
        textEditFuncion = new QTextEdit(centralwidget);
        textEditFuncion->setObjectName(QString::fromUtf8("textEditFuncion"));
        textEditFuncion->setGeometry(QRect(100, 30, 361, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 80, 55, 21));
        comboBoxA = new QComboBox(centralwidget);
        comboBoxA->setObjectName(QString::fromUtf8("comboBoxA"));
        comboBoxA->setGeometry(QRect(60, 80, 91, 21));
        comboBoxA->setCursor(QCursor(Qt::PointingHandCursor));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 120, 55, 21));
        comboBoxB = new QComboBox(centralwidget);
        comboBoxB->setObjectName(QString::fromUtf8("comboBoxB"));
        comboBoxB->setGeometry(QRect(60, 120, 91, 21));
        comboBoxB->setCursor(QCursor(Qt::PointingHandCursor));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 160, 55, 21));
        comboBoxC = new QComboBox(centralwidget);
        comboBoxC->setObjectName(QString::fromUtf8("comboBoxC"));
        comboBoxC->setGeometry(QRect(60, 160, 91, 21));
        comboBoxC->setCursor(QCursor(Qt::PointingHandCursor));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 200, 55, 21));
        comboBoxD = new QComboBox(centralwidget);
        comboBoxD->setObjectName(QString::fromUtf8("comboBoxD"));
        comboBoxD->setGeometry(QRect(60, 200, 91, 21));
        comboBoxD->setCursor(QCursor(Qt::PointingHandCursor));
        textEditResult = new QTextEdit(centralwidget);
        textEditResult->setObjectName(QString::fromUtf8("textEditResult"));
        textEditResult->setEnabled(false);
        textEditResult->setGeometry(QRect(40, 240, 421, 31));
        pushButtonBorrar = new QPushButton(centralwidget);
        pushButtonBorrar->setObjectName(QString::fromUtf8("pushButtonBorrar"));
        pushButtonBorrar->setGeometry(QRect(170, 80, 291, 61));
        pushButtonBorrar->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonEvaluar = new QPushButton(centralwidget);
        pushButtonEvaluar->setObjectName(QString::fromUtf8("pushButtonEvaluar"));
        pushButtonEvaluar->setGeometry(QRect(170, 160, 291, 61));
        pushButtonEvaluar->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 504, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "f(a,b,c,d) =", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "a:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "b:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "c:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "d:", nullptr));
        pushButtonBorrar->setText(QCoreApplication::translate("MainWindow", "Borrar", nullptr));
        pushButtonEvaluar->setText(QCoreApplication::translate("MainWindow", "Evaluar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
