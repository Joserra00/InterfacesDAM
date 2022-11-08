#include <QApplication>
#include <QLabel>
#include <unistd.h>
#include <QLabel>
#include <QLineEdit>
#include <QDialog>
#include "dtransferencia.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
int main(int argc, char *argv[])
{
     QApplication app(argc, argv);
     Dtransferencia *dialogo = new Dtransferencia();
     dialogo->show();
     /*QLineEdit *entrada;
     QLabel *etiqueta;
     QObject::connect(entrada,SIGNAL(textChanged(const QSTring&)),
     				etiqueta,SLOT(setText(const QString&)));*/
     return app.exec();
 }

