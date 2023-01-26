/********************************************************************************
** Form generated from reading UI file 'darrastraimagen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DARRASTRAIMAGEN_H
#define UI_DARRASTRAIMAGEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_DArrastraImagen
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DArrastraImagen)
    {
        if (DArrastraImagen->objectName().isEmpty())
            DArrastraImagen->setObjectName(QString::fromUtf8("DArrastraImagen"));
        DArrastraImagen->resize(400, 300);
        buttonBox = new QDialogButtonBox(DArrastraImagen);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(DArrastraImagen);
        QObject::connect(buttonBox, SIGNAL(accepted()), DArrastraImagen, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DArrastraImagen, SLOT(reject()));

        QMetaObject::connectSlotsByName(DArrastraImagen);
    } // setupUi

    void retranslateUi(QDialog *DArrastraImagen)
    {
        DArrastraImagen->setWindowTitle(QCoreApplication::translate("DArrastraImagen", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DArrastraImagen: public Ui_DArrastraImagen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DARRASTRAIMAGEN_H
