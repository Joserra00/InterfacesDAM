#include <QApplication>
#include <QLabel>
#include <unistd.h>
#include <QLabel>
#include <QLineEdit>
#include <QDialog>
#include "dtransferencia.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include "dnicio.h"
int main(int argc, char *argv[])
{
     QApplication app(argc, argv);
     DInicio *dialogo = new DInicio();
     dialogo->show();
     
     return app.exec();
 }

