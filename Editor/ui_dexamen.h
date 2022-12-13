/********************************************************************************
** Form generated from reading UI file 'dexamen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEXAMEN_H
#define UI_DEXAMEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DExamen
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *btnCargar;
    QComboBox *rutaCombobox;
    QLabel *label;
    QLabel *label_2;
    QLabel *txtPrimeraLinea;

    void setupUi(QDialog *DExamen)
    {
        if (DExamen->objectName().isEmpty())
            DExamen->setObjectName(QString::fromUtf8("DExamen"));
        DExamen->resize(417, 314);
        buttonBox = new QDialogButtonBox(DExamen);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        btnCargar = new QPushButton(DExamen);
        btnCargar->setObjectName(QString::fromUtf8("btnCargar"));
        btnCargar->setGeometry(QRect(160, 160, 89, 25));
        rutaCombobox = new QComboBox(DExamen);
        rutaCombobox->setObjectName(QString::fromUtf8("rutaCombobox"));
        rutaCombobox->setGeometry(QRect(160, 60, 201, 25));
        label = new QLabel(DExamen);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 60, 67, 17));
        label_2 = new QLabel(DExamen);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 120, 101, 17));
        txtPrimeraLinea = new QLabel(DExamen);
        txtPrimeraLinea->setObjectName(QString::fromUtf8("txtPrimeraLinea"));
        txtPrimeraLinea->setGeometry(QRect(170, 120, 67, 17));

        retranslateUi(DExamen);
        QObject::connect(buttonBox, SIGNAL(accepted()), DExamen, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DExamen, SLOT(reject()));

        QMetaObject::connectSlotsByName(DExamen);
    } // setupUi

    void retranslateUi(QDialog *DExamen)
    {
        DExamen->setWindowTitle(QCoreApplication::translate("DExamen", "Dialog", nullptr));
        btnCargar->setText(QCoreApplication::translate("DExamen", "Cargar", nullptr));
        label->setText(QCoreApplication::translate("DExamen", "Fichero", nullptr));
        label_2->setText(QCoreApplication::translate("DExamen", "Primera linea", nullptr));
        txtPrimeraLinea->setText(QCoreApplication::translate("DExamen", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DExamen: public Ui_DExamen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEXAMEN_H
