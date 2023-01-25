
#include "widgetgravedad.h"
#include <QDebug>

WidgetGravedad::WidgetGravedad(Bola *bolaPasada,int alturaPasada,QWidget *parent): QWidget(parent){
		setupUi(this);
	bola=bolaPasada;
	connect(activarGravedad,SIGNAL(stateChanged(int)),this,SLOT(slotEjemplo(int)));
	altura = alturaPasada;
}


void WidgetGravedad::slotEjemplo(int estado){
	if(estado==Qt::Checked){
		bola->velX=0;
		bola->velY=0;
		bola->posY=altura-40;
		qDebug()<<altura;
	}

}

