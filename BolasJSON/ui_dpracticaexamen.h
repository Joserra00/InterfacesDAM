/********************************************************************************
** Form generated from reading UI file 'dpracticaexamen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DPRACTICAEXAMEN_H
#define UI_DPRACTICAEXAMEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DPracticaExamen
{
public:
    QDialogButtonBox *buttonBox;
    QTabWidget *tabBolas;
    QWidget *tab;
    QWidget *tab_2;
    QPushButton *btnGravedad;

    void setupUi(QDialog *DPracticaExamen)
    {
        if (DPracticaExamen->objectName().isEmpty())
            DPracticaExamen->setObjectName(QString::fromUtf8("DPracticaExamen"));
        DPracticaExamen->resize(707, 398);
        buttonBox = new QDialogButtonBox(DPracticaExamen);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(320, 350, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabBolas = new QTabWidget(DPracticaExamen);
        tabBolas->setObjectName(QString::fromUtf8("tabBolas"));
        tabBolas->setGeometry(QRect(40, 30, 461, 281));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabBolas->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabBolas->addTab(tab_2, QString());
        btnGravedad = new QPushButton(DPracticaExamen);
        btnGravedad->setObjectName(QString::fromUtf8("btnGravedad"));
        btnGravedad->setGeometry(QRect(530, 90, 121, 21));

        retranslateUi(DPracticaExamen);
        QObject::connect(buttonBox, SIGNAL(accepted()), DPracticaExamen, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DPracticaExamen, SLOT(reject()));

        QMetaObject::connectSlotsByName(DPracticaExamen);
    } // setupUi

    void retranslateUi(QDialog *DPracticaExamen)
    {
        DPracticaExamen->setWindowTitle(QCoreApplication::translate("DPracticaExamen", "Dialog", nullptr));
        tabBolas->setTabText(tabBolas->indexOf(tab), QCoreApplication::translate("DPracticaExamen", "Tab 1", nullptr));
        tabBolas->setTabText(tabBolas->indexOf(tab_2), QCoreApplication::translate("DPracticaExamen", "Tab 2", nullptr));
        btnGravedad->setText(QCoreApplication::translate("DPracticaExamen", "Gravedad todas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DPracticaExamen: public Ui_DPracticaExamen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DPRACTICAEXAMEN_H
