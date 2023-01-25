/********************************************************************************
** Form generated from reading UI file 'dconfvisualbolas.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DCONFVISUALBOLAS_H
#define UI_DCONFVISUALBOLAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DConfVisualBolas
{
public:
    QDialogButtonBox *buttonBox;
    QTabWidget *tabBolas;
    QWidget *tab;
    QWidget *tab_2;
    QPushButton *btnTodasCirculo;

    void setupUi(QDialog *DConfVisualBolas)
    {
        if (DConfVisualBolas->objectName().isEmpty())
            DConfVisualBolas->setObjectName(QString::fromUtf8("DConfVisualBolas"));
        DConfVisualBolas->resize(828, 488);
        buttonBox = new QDialogButtonBox(DConfVisualBolas);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(450, 430, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabBolas = new QTabWidget(DConfVisualBolas);
        tabBolas->setObjectName(QString::fromUtf8("tabBolas"));
        tabBolas->setGeometry(QRect(40, 90, 751, 271));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabBolas->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabBolas->addTab(tab_2, QString());
        btnTodasCirculo = new QPushButton(DConfVisualBolas);
        btnTodasCirculo->setObjectName(QString::fromUtf8("btnTodasCirculo"));
        btnTodasCirculo->setGeometry(QRect(70, 390, 131, 31));

        retranslateUi(DConfVisualBolas);
        QObject::connect(buttonBox, SIGNAL(accepted()), DConfVisualBolas, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DConfVisualBolas, SLOT(reject()));

        QMetaObject::connectSlotsByName(DConfVisualBolas);
    } // setupUi

    void retranslateUi(QDialog *DConfVisualBolas)
    {
        DConfVisualBolas->setWindowTitle(QCoreApplication::translate("DConfVisualBolas", "Dialog", nullptr));
        tabBolas->setTabText(tabBolas->indexOf(tab), QCoreApplication::translate("DConfVisualBolas", "Tab 1", nullptr));
        tabBolas->setTabText(tabBolas->indexOf(tab_2), QCoreApplication::translate("DConfVisualBolas", "Tab 2", nullptr));
        btnTodasCirculo->setText(QCoreApplication::translate("DConfVisualBolas", "Todas a Circulo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DConfVisualBolas: public Ui_DConfVisualBolas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCONFVISUALBOLAS_H
