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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton33;
    QPushButton *pushButton32;
    QComboBox *comboBoxD;
    QPushButton *pushButton01;
    QComboBox *comboBoxB;
    QTextEdit *textEditFuncion;
    QPushButton *pushButton20;
    QPushButton *pushButton30;
    QPushButton *pushButton12;
    QComboBox *comboBoxA;
    QPushButton *pushButtonBorrar;
    QComboBox *comboBoxC;
    QPushButton *pushButton13;
    QPushButton *pushButton10;
    QPushButton *pushButton03;
    QPushButton *pushButton00;
    QPushButton *pushButton31;
    QPushButton *pushButton02;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *pushButton11;
    QTextEdit *textEditResult;
    QPushButton *pushButtonEvaluar;
    QPushButton *pushButton22;
    QPushButton *pushButton21;
    QLabel *label;
    QLabel *label_5;
    QPushButton *pushButton23;
    QLabel *label_3;
    QWidget *tab_2;
    QTreeWidget *treeWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 543);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../build-Boolean-Functions-Solver-Desktop_Qt_6_2_0_MinGW_64_bit-Debug/debug/Icono.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 491, 521));
        tabWidget->setCursor(QCursor(Qt::PointingHandCursor));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton33 = new QPushButton(tab);
        pushButton33->setObjectName(QString::fromUtf8("pushButton33"));
        pushButton33->setGeometry(QRect(340, 200, 101, 41));
        pushButton33->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton32 = new QPushButton(tab);
        pushButton32->setObjectName(QString::fromUtf8("pushButton32"));
        pushButton32->setGeometry(QRect(240, 200, 101, 41));
        pushButton32->setCursor(QCursor(Qt::PointingHandCursor));
        comboBoxD = new QComboBox(tab);
        comboBoxD->setObjectName(QString::fromUtf8("comboBoxD"));
        comboBoxD->setGeometry(QRect(60, 390, 91, 21));
        comboBoxD->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton01 = new QPushButton(tab);
        pushButton01->setObjectName(QString::fromUtf8("pushButton01"));
        pushButton01->setGeometry(QRect(140, 80, 101, 41));
        pushButton01->setCursor(QCursor(Qt::PointingHandCursor));
        comboBoxB = new QComboBox(tab);
        comboBoxB->setObjectName(QString::fromUtf8("comboBoxB"));
        comboBoxB->setGeometry(QRect(60, 310, 91, 21));
        comboBoxB->setCursor(QCursor(Qt::PointingHandCursor));
        textEditFuncion = new QTextEdit(tab);
        textEditFuncion->setObjectName(QString::fromUtf8("textEditFuncion"));
        textEditFuncion->setGeometry(QRect(100, 20, 341, 31));
        QFont font;
        font.setPointSize(10);
        textEditFuncion->setFont(font);
        pushButton20 = new QPushButton(tab);
        pushButton20->setObjectName(QString::fromUtf8("pushButton20"));
        pushButton20->setGeometry(QRect(40, 160, 101, 41));
        pushButton20->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton30 = new QPushButton(tab);
        pushButton30->setObjectName(QString::fromUtf8("pushButton30"));
        pushButton30->setGeometry(QRect(40, 200, 101, 41));
        pushButton30->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton12 = new QPushButton(tab);
        pushButton12->setObjectName(QString::fromUtf8("pushButton12"));
        pushButton12->setGeometry(QRect(240, 120, 101, 41));
        pushButton12->setCursor(QCursor(Qt::PointingHandCursor));
        comboBoxA = new QComboBox(tab);
        comboBoxA->setObjectName(QString::fromUtf8("comboBoxA"));
        comboBoxA->setGeometry(QRect(60, 270, 91, 21));
        comboBoxA->setCursor(QCursor(Qt::PointingHandCursor));
        pushButtonBorrar = new QPushButton(tab);
        pushButtonBorrar->setObjectName(QString::fromUtf8("pushButtonBorrar"));
        pushButtonBorrar->setGeometry(QRect(170, 270, 271, 61));
        pushButtonBorrar->setCursor(QCursor(Qt::PointingHandCursor));
        comboBoxC = new QComboBox(tab);
        comboBoxC->setObjectName(QString::fromUtf8("comboBoxC"));
        comboBoxC->setGeometry(QRect(60, 350, 91, 21));
        comboBoxC->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton13 = new QPushButton(tab);
        pushButton13->setObjectName(QString::fromUtf8("pushButton13"));
        pushButton13->setGeometry(QRect(340, 120, 101, 41));
        pushButton13->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton10 = new QPushButton(tab);
        pushButton10->setObjectName(QString::fromUtf8("pushButton10"));
        pushButton10->setGeometry(QRect(40, 120, 101, 41));
        pushButton10->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton03 = new QPushButton(tab);
        pushButton03->setObjectName(QString::fromUtf8("pushButton03"));
        pushButton03->setGeometry(QRect(340, 80, 101, 41));
        pushButton03->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton00 = new QPushButton(tab);
        pushButton00->setObjectName(QString::fromUtf8("pushButton00"));
        pushButton00->setGeometry(QRect(40, 80, 101, 41));
        pushButton00->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton31 = new QPushButton(tab);
        pushButton31->setObjectName(QString::fromUtf8("pushButton31"));
        pushButton31->setGeometry(QRect(140, 200, 101, 41));
        pushButton31->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton02 = new QPushButton(tab);
        pushButton02->setObjectName(QString::fromUtf8("pushButton02"));
        pushButton02->setGeometry(QRect(240, 80, 101, 41));
        pushButton02->setCursor(QCursor(Qt::PointingHandCursor));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 270, 55, 21));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 350, 55, 21));
        pushButton11 = new QPushButton(tab);
        pushButton11->setObjectName(QString::fromUtf8("pushButton11"));
        pushButton11->setGeometry(QRect(140, 120, 101, 41));
        pushButton11->setCursor(QCursor(Qt::PointingHandCursor));
        textEditResult = new QTextEdit(tab);
        textEditResult->setObjectName(QString::fromUtf8("textEditResult"));
        textEditResult->setEnabled(false);
        textEditResult->setGeometry(QRect(40, 440, 401, 31));
        textEditResult->setFont(font);
        textEditResult->setOverwriteMode(true);
        pushButtonEvaluar = new QPushButton(tab);
        pushButtonEvaluar->setObjectName(QString::fromUtf8("pushButtonEvaluar"));
        pushButtonEvaluar->setGeometry(QRect(170, 350, 271, 61));
        pushButtonEvaluar->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton22 = new QPushButton(tab);
        pushButton22->setObjectName(QString::fromUtf8("pushButton22"));
        pushButton22->setGeometry(QRect(240, 160, 101, 41));
        pushButton22->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton21 = new QPushButton(tab);
        pushButton21->setObjectName(QString::fromUtf8("pushButton21"));
        pushButton21->setGeometry(QRect(140, 160, 101, 41));
        pushButton21->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 55, 31));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 390, 55, 21));
        pushButton23 = new QPushButton(tab);
        pushButton23->setObjectName(QString::fromUtf8("pushButton23"));
        pushButton23->setGeometry(QRect(340, 160, 101, 41));
        pushButton23->setCursor(QCursor(Qt::PointingHandCursor));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 310, 55, 21));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        treeWidget = new QTreeWidget(tab_2);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setGeometry(QRect(0, 0, 481, 481));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 480, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Boolean Functions Solver", nullptr));
        pushButton33->setText(QCoreApplication::translate("MainWindow", "ab'cd'", nullptr));
        pushButton32->setText(QCoreApplication::translate("MainWindow", "abcd'", nullptr));
        pushButton01->setText(QCoreApplication::translate("MainWindow", "a'bc'd'", nullptr));
        textEditFuncion->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        pushButton20->setText(QCoreApplication::translate("MainWindow", "a'b'cd", nullptr));
        pushButton30->setText(QCoreApplication::translate("MainWindow", "a'b'cd'", nullptr));
        pushButton12->setText(QCoreApplication::translate("MainWindow", "abc'd", nullptr));
        pushButtonBorrar->setText(QCoreApplication::translate("MainWindow", "Borrar", nullptr));
        pushButton13->setText(QCoreApplication::translate("MainWindow", "ab'c'd", nullptr));
        pushButton10->setText(QCoreApplication::translate("MainWindow", "a'b'c'd", nullptr));
        pushButton03->setText(QCoreApplication::translate("MainWindow", "ab'c'd'", nullptr));
        pushButton00->setText(QCoreApplication::translate("MainWindow", "a'b'c'd'", nullptr));
        pushButton31->setText(QCoreApplication::translate("MainWindow", "a'bcd'", nullptr));
        pushButton02->setText(QCoreApplication::translate("MainWindow", "abc'd'", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "a:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "c:", nullptr));
        pushButton11->setText(QCoreApplication::translate("MainWindow", "a'bc'd", nullptr));
        textEditResult->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        pushButtonEvaluar->setText(QCoreApplication::translate("MainWindow", "Evaluar", nullptr));
        pushButton22->setText(QCoreApplication::translate("MainWindow", "abcd", nullptr));
        pushButton21->setText(QCoreApplication::translate("MainWindow", "a'bcd", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "f(a,b,c,d) =", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "d:", nullptr));
        pushButton23->setText(QCoreApplication::translate("MainWindow", "ab'cd", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "b:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Analizador", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("MainWindow", "Funcion", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "Valor", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "Fecha", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Bit\303\241cora", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
