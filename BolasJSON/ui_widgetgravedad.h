/********************************************************************************
** Form generated from reading UI file 'widgetgravedad.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETGRAVEDAD_H
#define UI_WIDGETGRAVEDAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetGravedad
{
public:
    QCheckBox *activarGravedad;

    void setupUi(QWidget *WidgetGravedad)
    {
        if (WidgetGravedad->objectName().isEmpty())
            WidgetGravedad->setObjectName(QString::fromUtf8("WidgetGravedad"));
        WidgetGravedad->resize(400, 300);
        activarGravedad = new QCheckBox(WidgetGravedad);
        activarGravedad->setObjectName(QString::fromUtf8("activarGravedad"));
        activarGravedad->setGeometry(QRect(100, 100, 141, 21));

        retranslateUi(WidgetGravedad);

        QMetaObject::connectSlotsByName(WidgetGravedad);
    } // setupUi

    void retranslateUi(QWidget *WidgetGravedad)
    {
        WidgetGravedad->setWindowTitle(QCoreApplication::translate("WidgetGravedad", "Form", nullptr));
        activarGravedad->setText(QCoreApplication::translate("WidgetGravedad", "Activar Gravedad", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetGravedad: public Ui_WidgetGravedad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETGRAVEDAD_H
