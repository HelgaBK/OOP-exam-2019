/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QPushButton *pushButton_3;
    QTableWidget *tableWidget;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QLabel *label_7;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(572, 571);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 120, 47, 13));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 10, 55, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(210, 450, 191, 21));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(250, 470, 61, 16));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 60, 461, 28));
        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(390, 30, 111, 22));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(220, 520, 121, 28));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(40, 100, 461, 301));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(390, 10, 55, 16));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 30, 113, 22));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(170, 10, 55, 16));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 410, 461, 28));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 30, 113, 22));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(300, 30, 71, 22));
        spinBox->setMinimum(1900);
        spinBox->setMaximum(2019);
        spinBox_2 = new QSpinBox(centralWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(220, 490, 121, 22));
        spinBox_2->setMinimum(1);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(300, 10, 55, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 572, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\275\320\264\320\276\320\274\320\275\320\260 \320\263\320\265\320\275\320\265\321\200\320\260\321\206\321\226\321\217", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214:", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "\320\240\320\276\320\274\320\260\320\275", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "\320\242\321\200\320\260\320\263\320\265\320\264\321\226\321\217", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "\320\235\320\276\320\262\320\265\320\273\320\260", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "\320\237\320\276\320\262\321\226\321\201\321\202\321\214", nullptr));
        comboBox->setItemText(4, QApplication::translate("MainWindow", "\320\224\321\200\320\260\320\274\320\260", nullptr));
        comboBox->setItemText(5, QApplication::translate("MainWindow", "\320\232\320\276\320\274\320\265\320\264\321\226\321\217", nullptr));

        pushButton_3->setText(QApplication::translate("MainWindow", "\320\227\320\263\320\265\320\275\320\265\321\200\321\203\320\262\320\260\321\202\320\270", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\226\320\260\320\275\321\200:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200:", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "\320\236\320\275\320\276\320\262\320\270\321\202\320\270 \321\202\320\260\320\261\320\273\320\270\321\206\321\216", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\320\240\321\226\320\272:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
