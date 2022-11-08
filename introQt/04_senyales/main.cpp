#include <QApplication>
#include <QLabel>
#include <unistd.h>
#include <QLabel>
#include <QLineEdit>
#include <QDialog>
#include "dencuesta.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
int main(int argc, char *argv[])
{
     QApplication app(argc, argv);
     DEncuesta *dialogo = new DEncuesta();
     dialogo->show();
     /*QLineEdit *entrada;
     QLabel *etiqueta;
     QObject::connect(entrada,SIGNAL(textChanged(const QSTring&)),
     				etiqueta,SLOT(setText(const QString&)));*/
     return app.exec();
 }

