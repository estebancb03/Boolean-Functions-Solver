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
    QPushButton *pushButton;
    QPushButton *pushButton01;
    QPushButton *pushButton02;
    QPushButton *pushButton03;
    QPushButton *pushButton32;
    QPushButton *pushButton31;
    QPushButton *pushButton23;
    QPushButton *pushButton33;
    QPushButton *pushButton22;
    QPushButton *pushButton21;
    QPushButton *pushButton20;
    QPushButton *pushButton30;
    QPushButton *pushButton12;
    QPushButton *pushButton11;
    QPushButton *pushButton10;
    QPushButton *pushButton13;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(520, 625);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 35, 55, 21));
        textEditFuncion = new QTextEdit(centralwidget);
        textEditFuncion->setObjectName(QString::fromUtf8("textEditFuncion"));
        textEditFuncion->setGeometry(QRect(100, 30, 381, 31));
        QFont font;
        font.setPointSize(10);
        textEditFuncion->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 340, 55, 21));
        comboBoxA = new QComboBox(centralwidget);
        comboBoxA->setObjectName(QString::fromUtf8("comboBoxA"));
        comboBoxA->setGeometry(QRect(60, 340, 91, 21));
        comboBoxA->setCursor(QCursor(Qt::PointingHandCursor));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 380, 55, 21));
        comboBoxB = new QComboBox(centralwidget);
        comboBoxB->setObjectName(QString::fromUtf8("comboBoxB"));
        comboBoxB->setGeometry(QRect(60, 380, 91, 21));
        comboBoxB->setCursor(QCursor(Qt::PointingHandCursor));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 420, 55, 21));
        comboBoxC = new QComboBox(centralwidget);
        comboBoxC->setObjectName(QString::fromUtf8("comboBoxC"));
        comboBoxC->setGeometry(QRect(60, 420, 91, 21));
        comboBoxC->setCursor(QCursor(Qt::PointingHandCursor));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 460, 55, 21));
        comboBoxD = new QComboBox(centralwidget);
        comboBoxD->setObjectName(QString::fromUtf8("comboBoxD"));
        comboBoxD->setGeometry(QRect(60, 460, 91, 21));
        comboBoxD->setCursor(QCursor(Qt::PointingHandCursor));
        textEditResult = new QTextEdit(centralwidget);
        textEditResult->setObjectName(QString::fromUtf8("textEditResult"));
        textEditResult->setEnabled(false);
        textEditResult->setGeometry(QRect(40, 520, 441, 31));
        textEditResult->setFont(font);
        pushButtonBorrar = new QPushButton(centralwidget);
        pushButtonBorrar->setObjectName(QString::fromUtf8("pushButtonBorrar"));
        pushButtonBorrar->setGeometry(QRect(170, 340, 311, 61));
        pushButtonBorrar->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonEvaluar = new QPushButton(centralwidget);
        pushButtonEvaluar->setObjectName(QString::fromUtf8("pushButtonEvaluar"));
        pushButtonEvaluar->setGeometry(QRect(170, 420, 311, 61));
        pushButtonEvaluar->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 100, 111, 51));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton01 = new QPushButton(centralwidget);
        pushButton01->setObjectName(QString::fromUtf8("pushButton01"));
        pushButton01->setGeometry(QRect(150, 100, 111, 51));
        pushButton01->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton02 = new QPushButton(centralwidget);
        pushButton02->setObjectName(QString::fromUtf8("pushButton02"));
        pushButton02->setGeometry(QRect(260, 100, 111, 51));
        pushButton02->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton03 = new QPushButton(centralwidget);
        pushButton03->setObjectName(QString::fromUtf8("pushButton03"));
        pushButton03->setGeometry(QRect(370, 100, 111, 51));
        pushButton03->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton32 = new QPushButton(centralwidget);
        pushButton32->setObjectName(QString::fromUtf8("pushButton32"));
        pushButton32->setGeometry(QRect(260, 250, 111, 51));
        pushButton32->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton31 = new QPushButton(centralwidget);
        pushButton31->setObjectName(QString::fromUtf8("pushButton31"));
        pushButton31->setGeometry(QRect(150, 250, 111, 51));
        pushButton31->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton23 = new QPushButton(centralwidget);
        pushButton23->setObjectName(QString::fromUtf8("pushButton23"));
        pushButton23->setGeometry(QRect(370, 200, 111, 51));
        pushButton23->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton33 = new QPushButton(centralwidget);
        pushButton33->setObjectName(QString::fromUtf8("pushButton33"));
        pushButton33->setGeometry(QRect(370, 250, 111, 51));
        pushButton33->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton22 = new QPushButton(centralwidget);
        pushButton22->setObjectName(QString::fromUtf8("pushButton22"));
        pushButton22->setGeometry(QRect(260, 200, 111, 51));
        pushButton22->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton21 = new QPushButton(centralwidget);
        pushButton21->setObjectName(QString::fromUtf8("pushButton21"));
        pushButton21->setGeometry(QRect(150, 200, 111, 51));
        pushButton21->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton20 = new QPushButton(centralwidget);
        pushButton20->setObjectName(QString::fromUtf8("pushButton20"));
        pushButton20->setGeometry(QRect(40, 200, 111, 51));
        pushButton20->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton30 = new QPushButton(centralwidget);
        pushButton30->setObjectName(QString::fromUtf8("pushButton30"));
        pushButton30->setGeometry(QRect(40, 250, 111, 51));
        pushButton30->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton12 = new QPushButton(centralwidget);
        pushButton12->setObjectName(QString::fromUtf8("pushButton12"));
        pushButton12->setGeometry(QRect(260, 150, 111, 51));
        pushButton12->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton11 = new QPushButton(centralwidget);
        pushButton11->setObjectName(QString::fromUtf8("pushButton11"));
        pushButton11->setGeometry(QRect(150, 150, 111, 51));
        pushButton11->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton10 = new QPushButton(centralwidget);
        pushButton10->setObjectName(QString::fromUtf8("pushButton10"));
        pushButton10->setGeometry(QRect(40, 150, 111, 51));
        pushButton10->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton13 = new QPushButton(centralwidget);
        pushButton13->setObjectName(QString::fromUtf8("pushButton13"));
        pushButton13->setGeometry(QRect(370, 150, 111, 51));
        pushButton13->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 520, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Boolean Functions Solver", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "f(a,b,c,d) =", nullptr));
        textEditFuncion->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "a:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "b:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "c:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "d:", nullptr));
        textEditResult->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        pushButtonBorrar->setText(QCoreApplication::translate("MainWindow", "Borrar", nullptr));
        pushButtonEvaluar->setText(QCoreApplication::translate("MainWindow", "Evaluar", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "a'b'c'd'", nullptr));
        pushButton01->setText(QCoreApplication::translate("MainWindow", "a'bc'd'", nullptr));
        pushButton02->setText(QCoreApplication::translate("MainWindow", "abc'd'", nullptr));
        pushButton03->setText(QCoreApplication::translate("MainWindow", "ab'c'd'", nullptr));
        pushButton32->setText(QCoreApplication::translate("MainWindow", "abcd'", nullptr));
        pushButton31->setText(QCoreApplication::translate("MainWindow", "a'cbd'", nullptr));
        pushButton23->setText(QCoreApplication::translate("MainWindow", "ab'cd", nullptr));
        pushButton33->setText(QCoreApplication::translate("MainWindow", "ab'cd'", nullptr));
        pushButton22->setText(QCoreApplication::translate("MainWindow", "abcd", nullptr));
        pushButton21->setText(QCoreApplication::translate("MainWindow", "a'bcd", nullptr));
        pushButton20->setText(QCoreApplication::translate("MainWindow", "a'b'cd", nullptr));
        pushButton30->setText(QCoreApplication::translate("MainWindow", "a'b'cd'", nullptr));
        pushButton12->setText(QCoreApplication::translate("MainWindow", "abc'd", nullptr));
        pushButton11->setText(QCoreApplication::translate("MainWindow", "a'bc'd", nullptr));
        pushButton10->setText(QCoreApplication::translate("MainWindow", "a'b'c'd", nullptr));
        pushButton13->setText(QCoreApplication::translate("MainWindow", "ab'c'd", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
