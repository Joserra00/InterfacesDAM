/********************************************************************************
** Form generated from reading UI file 'widgetconfbola.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETCONFBOLA_H
#define UI_WIDGETCONFBOLA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetConfBola
{
public:
    QGroupBox *groupBox;
    QRadioButton *rbCirculo;
    QRadioButton *rbPatron;
    QRadioButton *rbImagen;
    QLineEdit *leNombre;
    QLabel *label;
    QPushButton *btnColor;
    QPushButton *btnImagen;

    void setupUi(QWidget *WidgetConfBola)
    {
        if (WidgetConfBola->objectName().isEmpty())
            WidgetConfBola->setObjectName(QString::fromUtf8("WidgetConfBola"));
        WidgetConfBola->resize(398, 254);
        groupBox = new QGroupBox(WidgetConfBola);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 161, 111));
        rbCirculo = new QRadioButton(groupBox);
        rbCirculo->setObjectName(QString::fromUtf8("rbCirculo"));
        rbCirculo->setGeometry(QRect(20, 20, 96, 22));
        rbPatron = new QRadioButton(groupBox);
        rbPatron->setObjectName(QString::fromUtf8("rbPatron"));
        rbPatron->setGeometry(QRect(20, 50, 96, 22));
        rbImagen = new QRadioButton(groupBox);
        rbImagen->setObjectName(QString::fromUtf8("rbImagen"));
        rbImagen->setGeometry(QRect(20, 80, 96, 22));
        leNombre = new QLineEdit(WidgetConfBola);
        leNombre->setObjectName(QString::fromUtf8("leNombre"));
        leNombre->setGeometry(QRect(250, 10, 113, 26));
        label = new QLabel(WidgetConfBola);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 10, 57, 16));
        btnColor = new QPushButton(WidgetConfBola);
        btnColor->setObjectName(QString::fromUtf8("btnColor"));
        btnColor->setGeometry(QRect(180, 50, 80, 27));
        btnImagen = new QPushButton(WidgetConfBola);
        btnImagen->setObjectName(QString::fromUtf8("btnImagen"));
        btnImagen->setGeometry(QRect(280, 50, 80, 27));

        retranslateUi(WidgetConfBola);

        QMetaObject::connectSlotsByName(WidgetConfBola);
    } // setupUi

    void retranslateUi(QWidget *WidgetConfBola)
    {
        WidgetConfBola->setWindowTitle(QCoreApplication::translate("WidgetConfBola", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WidgetConfBola", "GroupBox", nullptr));
        rbCirculo->setText(QCoreApplication::translate("WidgetConfBola", "Circulo", nullptr));
        rbPatron->setText(QCoreApplication::translate("WidgetConfBola", "Patron", nullptr));
        rbImagen->setText(QCoreApplication::translate("WidgetConfBola", "Imagen", nullptr));
        label->setText(QCoreApplication::translate("WidgetConfBola", "Nombre", nullptr));
        btnColor->setText(QCoreApplication::translate("WidgetConfBola", "Color", nullptr));
        btnImagen->setText(QCoreApplication::translate("WidgetConfBola", "imagen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetConfBola: public Ui_WidgetConfBola {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETCONFBOLA_H
