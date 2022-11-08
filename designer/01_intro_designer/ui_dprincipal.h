/********************************************************************************
** Form generated from reading UI file 'dprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DPRINCIPAL_H
#define UI_DPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DPrincipal
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *BOpcionA;
    QSpacerItem *horizontalSpacer;
    QPushButton *bOpcionb;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *bConsultar;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *consultarText;
    QPlainTextEdit *texto;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *bVerificar;
    QLineEdit *verificarText;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DPrincipal)
    {
        if (DPrincipal->objectName().isEmpty())
            DPrincipal->setObjectName(QString::fromUtf8("DPrincipal"));
        DPrincipal->resize(647, 300);
        verticalLayout_2 = new QVBoxLayout(DPrincipal);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        BOpcionA = new QPushButton(DPrincipal);
        BOpcionA->setObjectName(QString::fromUtf8("BOpcionA"));

        horizontalLayout->addWidget(BOpcionA);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bOpcionb = new QPushButton(DPrincipal);
        bOpcionb->setObjectName(QString::fromUtf8("bOpcionb"));

        horizontalLayout->addWidget(bOpcionb);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        bConsultar = new QPushButton(DPrincipal);
        bConsultar->setObjectName(QString::fromUtf8("bConsultar"));

        horizontalLayout_2->addWidget(bConsultar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        consultarText = new QLineEdit(DPrincipal);
        consultarText->setObjectName(QString::fromUtf8("consultarText"));

        horizontalLayout_2->addWidget(consultarText);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout);

        texto = new QPlainTextEdit(DPrincipal);
        texto->setObjectName(QString::fromUtf8("texto"));

        horizontalLayout_4->addWidget(texto);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        bVerificar = new QPushButton(DPrincipal);
        bVerificar->setObjectName(QString::fromUtf8("bVerificar"));

        horizontalLayout_3->addWidget(bVerificar);

        verificarText = new QLineEdit(DPrincipal);
        verificarText->setObjectName(QString::fromUtf8("verificarText"));

        horizontalLayout_3->addWidget(verificarText);


        verticalLayout_2->addLayout(horizontalLayout_3);

        buttonBox = new QDialogButtonBox(DPrincipal);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(DPrincipal);
        QObject::connect(buttonBox, SIGNAL(accepted()), DPrincipal, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DPrincipal, SLOT(reject()));

        QMetaObject::connectSlotsByName(DPrincipal);
    } // setupUi

    void retranslateUi(QDialog *DPrincipal)
    {
        DPrincipal->setWindowTitle(QCoreApplication::translate("DPrincipal", "Dialog", nullptr));
        BOpcionA->setText(QCoreApplication::translate("DPrincipal", "opcion A", nullptr));
        bOpcionb->setText(QCoreApplication::translate("DPrincipal", "opcion B", nullptr));
        bConsultar->setText(QCoreApplication::translate("DPrincipal", "Consultar", nullptr));
        bVerificar->setText(QCoreApplication::translate("DPrincipal", "Verificar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DPrincipal: public Ui_DPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DPRINCIPAL_H
