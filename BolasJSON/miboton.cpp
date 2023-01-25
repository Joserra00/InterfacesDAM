#include "miboton.h"

MiBoton::MiBoton(QWidget * parent) : QPushButton(parent){
	bola=NULL;


}
MiBoton::MiBoton(const QString &text,QWidget * parent) : QPushButton(text,parent){
	bola=NULL;
}
