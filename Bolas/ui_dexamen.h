/********************************************************************************
** Form generated from reading UI file 'dexamen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEXAMEN_H
#define UI_DEXAMEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>

QT_BEGIN_NAMESPACE

class Ui_DExamen
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frameBolas;

    void setupUi(QDialog *DExamen)
    {
        if (DExamen->objectName().isEmpty())
            DExamen->setObjectName(QString::fromUtf8("DExamen"));
        DExamen->resize(446, 335);
        buttonBox = new QDialogButtonBox(DExamen);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(90, 290, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frameBolas = new QFrame(DExamen);
        frameBolas->setObjectName(QString::fromUtf8("frameBolas"));
        frameBolas->setGeometry(QRect(10, 100, 241, 121));
        frameBolas->setFrameShape(QFrame::StyledPanel);
        frameBolas->setFrameShadow(QFrame::Raised);

        retranslateUi(DExamen);
        QObject::connect(buttonBox, SIGNAL(accepted()), DExamen, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DExamen, SLOT(reject()));

        QMetaObject::connectSlotsByName(DExamen);
    } // setupUi

    void retranslateUi(QDialog *DExamen)
    {
        DExamen->setWindowTitle(QApplication::translate("DExamen", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DExamen: public Ui_DExamen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEXAMEN_H
