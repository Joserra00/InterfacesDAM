/********************************************************************************
** Form generated from reading UI file 'dconfvelocidades.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DCONFVELOCIDADES_H
#define UI_DCONFVELOCIDADES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DConfVelocidades
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabBolas;
    QWidget *tab;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnPararTodas;
    QPushButton *btnActivarColision;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DConfVelocidades)
    {
        if (DConfVelocidades->objectName().isEmpty())
            DConfVelocidades->setObjectName(QString::fromUtf8("DConfVelocidades"));
        DConfVelocidades->resize(825, 436);
        verticalLayout = new QVBoxLayout(DConfVelocidades);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabBolas = new QTabWidget(DConfVelocidades);
        tabBolas->setObjectName(QString::fromUtf8("tabBolas"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabBolas->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabBolas->addTab(tab_2, QString());

        verticalLayout->addWidget(tabBolas);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnPararTodas = new QPushButton(DConfVelocidades);
        btnPararTodas->setObjectName(QString::fromUtf8("btnPararTodas"));

        horizontalLayout->addWidget(btnPararTodas);

        btnActivarColision = new QPushButton(DConfVelocidades);
        btnActivarColision->setObjectName(QString::fromUtf8("btnActivarColision"));

        horizontalLayout->addWidget(btnActivarColision);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(DConfVelocidades);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DConfVelocidades);
        QObject::connect(buttonBox, SIGNAL(accepted()), DConfVelocidades, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DConfVelocidades, SLOT(reject()));

        tabBolas->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DConfVelocidades);
    } // setupUi

    void retranslateUi(QDialog *DConfVelocidades)
    {
        DConfVelocidades->setWindowTitle(QApplication::translate("DConfVelocidades", "Dialog", nullptr));
        tabBolas->setTabText(tabBolas->indexOf(tab), QApplication::translate("DConfVelocidades", "Tab 1", nullptr));
        tabBolas->setTabText(tabBolas->indexOf(tab_2), QApplication::translate("DConfVelocidades", "Tab 2", nullptr));
        btnPararTodas->setText(QApplication::translate("DConfVelocidades", "Parar todas", nullptr));
        btnActivarColision->setText(QApplication::translate("DConfVelocidades", "Activar Colision", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DConfVelocidades: public Ui_DConfVelocidades {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCONFVELOCIDADES_H
