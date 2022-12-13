/********************************************************************************
** Form generated from reading UI file 'dpararbolas.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DPARARBOLAS_H
#define UI_DPARARBOLAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>

QT_BEGIN_NAMESPACE

class Ui_DPararBolas
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frameBotones;

    void setupUi(QDialog *DPararBolas)
    {
        if (DPararBolas->objectName().isEmpty())
            DPararBolas->setObjectName(QString::fromUtf8("DPararBolas"));
        DPararBolas->resize(400, 300);
        buttonBox = new QDialogButtonBox(DPararBolas);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frameBotones = new QFrame(DPararBolas);
        frameBotones->setObjectName(QString::fromUtf8("frameBotones"));
        frameBotones->setGeometry(QRect(20, 20, 361, 211));
        frameBotones->setFrameShape(QFrame::StyledPanel);
        frameBotones->setFrameShadow(QFrame::Raised);

        retranslateUi(DPararBolas);
        QObject::connect(buttonBox, SIGNAL(accepted()), DPararBolas, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DPararBolas, SLOT(reject()));

        QMetaObject::connectSlotsByName(DPararBolas);
    } // setupUi

    void retranslateUi(QDialog *DPararBolas)
    {
        DPararBolas->setWindowTitle(QCoreApplication::translate("DPararBolas", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DPararBolas: public Ui_DPararBolas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DPARARBOLAS_H
