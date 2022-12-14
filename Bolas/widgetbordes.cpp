#include "widgetbordes.h"

WidgetBordes::WidgetBordes(Bola *bola,QWidget * parent) : QWidget(parent){
	bola2=bola;
	inicializarWidgets();
	layout = new QGridLayout();
	setLayout(layout);
	layout->addWidget(reset1,0,3);
	layout->addWidget(reset2,1,2);
	layout->addWidget(reset3,1,5);
	layout->addWidget(reset4,3,3);
	layout->addWidget(label1,0,4);
	layout->addWidget(label2,1,1);
	layout->addWidget(label3,1,6);
	layout->addWidget(label4,3,4);
	temporizador = new QTimer();
	temporizador->setInterval(20);
	temporizador->setSingleShot(false);
	temporizador->start();
	
	connect(reset1,SIGNAL(clicked()),
			this,SLOT(slotBotonCulpable()));
	connect(reset2,SIGNAL(clicked()),
			this,SLOT(slotBotonCulpable()));
	connect(reset3,SIGNAL(clicked()),
			this,SLOT(slotBotonCulpable()));
	connect(reset4,SIGNAL(clicked()),
			this,SLOT(slotBotonCulpable()));
	
	connect(temporizador,SIGNAL(timeout()),
			this,SLOT(slotTemporizador()));
	

}
void WidgetBordes::inicializarWidgets(){
	reset1 = new QPushButton("Reset");
	reset2 = new QPushButton("Reset");
	reset3 = new QPushButton("Reset");
	reset4 = new QPushButton("Reset");
	label1 = new QLabel("0");
	label2 = new QLabel("0");
	label3 = new QLabel("0");
	label4 = new QLabel("0");
	
	
}
void WidgetBordes::slotBotonCulpable(){
	qDebug()<<"dentro";
	QObject *oEmisor = sender();
	QPushButton *botonCulpable = qobject_cast<QPushButton*> (oEmisor);
	if(botonCulpable==reset1)
		bola2->rebotes[ARRIBA]=0;
	if(botonCulpable==reset2)
		bola2->rebotes[IZQUIERDA]=0;
	if(botonCulpable==reset3)
		bola2->rebotes[DERECHA]=0;
	if(botonCulpable==reset4)
		bola2->rebotes[ABAJO]=0;
	
}
void WidgetBordes::slotTemporizador(){
	QString info("0");
	info = QString::number(bola2->rebotes[Bola::ARRIBA]);
	label1->setText(info);
	info = QString::number(bola2->rebotes[Bola::IZQUIERDA]);
	label2->setText(info);
	info = QString::number(bola2->rebotes[Bola::DERECHA]);
	label3->setText(info);
	info = QString::number(bola2->rebotes[Bola::ABAJO]);
	label4->setText(info);
	update();

}
