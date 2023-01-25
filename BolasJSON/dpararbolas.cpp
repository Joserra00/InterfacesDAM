
#include "dpararbolas.h"
#include <QDebug>


DPararBolas::DPararBolas(QVector <Bola*>*bs,QWidget *parent): QDialog(parent){
		setupUi(this);
	lasBolas=bs;
	layout = new QGridLayout();
	frameBotones->setLayout(layout);
	for (int i = 0; i<bs->size() ; i++){
	QString titulo("boton");
	titulo = titulo + QString::number(i);
	MiBoton *boton=new MiBoton(bs->at(i)->nombre);
	boton->bola=lasBolas->at(i);
		btnBolas.append(boton);
	}
	for (int i = 0; i<bs->size() ; i++){
			layout->addWidget(btnBolas.at(i),i/3,i%3);
			connect(btnBolas.at(i),SIGNAL(clicked()),
		this,SLOT(slotParar()));
		
		
	
	}
	
}


void DPararBolas::slotParar(){
	QObject *oEmisor = sender();
	MiBoton *botonCulpable = qobject_cast<MiBoton*>(oEmisor);
	botonCulpable->bola->velX=0;
	botonCulpable->bola->velY=0;

}

