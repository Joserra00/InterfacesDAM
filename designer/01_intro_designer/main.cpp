#include <QApplication>
#include "dprincipal.h"
int main(int argc, char *argv[])
{
     QApplication app(argc, argv);
     DPrincipal *dialogo = new DPrincipal();
     dialogo->show();
     
     return app.exec();
 }

