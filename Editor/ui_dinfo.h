/********************************************************************************
** Form generated from reading UI file 'dinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DINFO_H
#define UI_DINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DInfo
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *lLineas;

    void setupUi(QDialog *DInfo)
    {
        if (DInfo->objectName().isEmpty())
            DInfo->setObjectName(QString::fromUtf8("DInfo"));
        DInfo->resize(400, 300);
        buttonBox = new QDialogButtonBox(DInfo);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(DInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 131, 16));
        lLineas = new QLabel(DInfo);
        lLineas->setObjectName(QString::fromUtf8("lLineas"));
        lLineas->setGeometry(QRect(190, 30, 131, 21));

        retranslateUi(DInfo);
        QObject::connect(buttonBox, SIGNAL(accepted()), DInfo, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DInfo, SLOT(reject()));

        QMetaObject::connectSlotsByName(DInfo);
    } // setupUi

    void retranslateUi(QDialog *DInfo)
    {
        DInfo->setWindowTitle(QCoreApplication::translate("DInfo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DInfo", "Numero de lineas", nullptr));
        lLineas->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DInfo: public Ui_DInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DINFO_H
