#include <QApplication>
#include <QLabel>
#include <unistd.h>
#include <QLabel>
#include <QLineEdit>
#include <QDialog>
#include "editor.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
int main(int argc, char *argv[])
{
     QApplication app(argc, argv);
     Editor *editor = new Editor();
     editor->show();
   
     return app.exec();
 }

