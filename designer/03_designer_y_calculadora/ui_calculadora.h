/********************************************************************************
** Form generated from reading UI file 'calculadora.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULADORA_H
#define UI_CALCULADORA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Calculadora
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridDigitos;
    QPushButton *btnSiete;
    QPushButton *btnMultiplicar;
    QPushButton *btnOcho;
    QPushButton *btnDos;
    QPushButton *btnNueve;
    QPushButton *btnCuatro;
    QPushButton *btnZero;
    QPushButton *btnSeis;
    QPushButton *btnIgual;
    QPushButton *btnUno;
    QPushButton *btnTres;
    QPushButton *btnCinco;
    QPushButton *btnSuma;
    QLineEdit *resultado;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Calculadora)
    {
        if (Calculadora->objectName().isEmpty())
            Calculadora->setObjectName(QString::fromUtf8("Calculadora"));
        Calculadora->resize(429, 223);
        Calculadora->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(Calculadora);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridDigitos = new QGridLayout();
        gridDigitos->setObjectName(QString::fromUtf8("gridDigitos"));
        btnSiete = new QPushButton(Calculadora);
        btnSiete->setObjectName(QString::fromUtf8("btnSiete"));

        gridDigitos->addWidget(btnSiete, 1, 0, 1, 1);

        btnMultiplicar = new QPushButton(Calculadora);
        btnMultiplicar->setObjectName(QString::fromUtf8("btnMultiplicar"));

        gridDigitos->addWidget(btnMultiplicar, 4, 2, 1, 1);

        btnOcho = new QPushButton(Calculadora);
        btnOcho->setObjectName(QString::fromUtf8("btnOcho"));

        gridDigitos->addWidget(btnOcho, 1, 1, 1, 1);

        btnDos = new QPushButton(Calculadora);
        btnDos->setObjectName(QString::fromUtf8("btnDos"));

        gridDigitos->addWidget(btnDos, 3, 1, 1, 1);

        btnNueve = new QPushButton(Calculadora);
        btnNueve->setObjectName(QString::fromUtf8("btnNueve"));

        gridDigitos->addWidget(btnNueve, 1, 2, 1, 1);

        btnCuatro = new QPushButton(Calculadora);
        btnCuatro->setObjectName(QString::fromUtf8("btnCuatro"));

        gridDigitos->addWidget(btnCuatro, 2, 0, 1, 1);

        btnZero = new QPushButton(Calculadora);
        btnZero->setObjectName(QString::fromUtf8("btnZero"));

        gridDigitos->addWidget(btnZero, 4, 0, 1, 2);

        btnSeis = new QPushButton(Calculadora);
        btnSeis->setObjectName(QString::fromUtf8("btnSeis"));

        gridDigitos->addWidget(btnSeis, 2, 2, 1, 1);

        btnIgual = new QPushButton(Calculadora);
        btnIgual->setObjectName(QString::fromUtf8("btnIgual"));

        gridDigitos->addWidget(btnIgual, 3, 3, 2, 1);

        btnUno = new QPushButton(Calculadora);
        btnUno->setObjectName(QString::fromUtf8("btnUno"));

        gridDigitos->addWidget(btnUno, 3, 0, 1, 1);

        btnTres = new QPushButton(Calculadora);
        btnTres->setObjectName(QString::fromUtf8("btnTres"));

        gridDigitos->addWidget(btnTres, 3, 2, 1, 1);

        btnCinco = new QPushButton(Calculadora);
        btnCinco->setObjectName(QString::fromUtf8("btnCinco"));

        gridDigitos->addWidget(btnCinco, 2, 1, 1, 1);

        btnSuma = new QPushButton(Calculadora);
        btnSuma->setObjectName(QString::fromUtf8("btnSuma"));

        gridDigitos->addWidget(btnSuma, 1, 3, 2, 1);

        resultado = new QLineEdit(Calculadora);
        resultado->setObjectName(QString::fromUtf8("resultado"));

        gridDigitos->addWidget(resultado, 0, 0, 1, 3);


        verticalLayout->addLayout(gridDigitos);

        buttonBox = new QDialogButtonBox(Calculadora);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Calculadora);
        QObject::connect(buttonBox, SIGNAL(accepted()), Calculadora, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Calculadora, SLOT(reject()));

        QMetaObject::connectSlotsByName(Calculadora);
    } // setupUi

    void retranslateUi(QDialog *Calculadora)
    {
        Calculadora->setWindowTitle(QCoreApplication::translate("Calculadora", "Dialog", nullptr));
        btnSiete->setText(QCoreApplication::translate("Calculadora", "7", nullptr));
        btnMultiplicar->setText(QCoreApplication::translate("Calculadora", ".", nullptr));
        btnOcho->setText(QCoreApplication::translate("Calculadora", "8", nullptr));
        btnDos->setText(QCoreApplication::translate("Calculadora", "2", nullptr));
        btnNueve->setText(QCoreApplication::translate("Calculadora", "9", nullptr));
        btnCuatro->setText(QCoreApplication::translate("Calculadora", "4", nullptr));
        btnZero->setText(QCoreApplication::translate("Calculadora", "0", nullptr));
        btnSeis->setText(QCoreApplication::translate("Calculadora", "6", nullptr));
        btnIgual->setText(QCoreApplication::translate("Calculadora", "=", nullptr));
        btnUno->setText(QCoreApplication::translate("Calculadora", "1", nullptr));
        btnTres->setText(QCoreApplication::translate("Calculadora", "3", nullptr));
        btnCinco->setText(QCoreApplication::translate("Calculadora", "5", nullptr));
        btnSuma->setText(QCoreApplication::translate("Calculadora", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculadora: public Ui_Calculadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULADORA_H
