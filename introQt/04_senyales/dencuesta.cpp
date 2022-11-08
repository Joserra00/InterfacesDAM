#include "dencuesta.h"


DEncuesta::DEncuesta(QWidget *parent):QDialog(parent){
	resize(400,400); 
	principal = new QHBoxLayout();
	vertical1 = new QVBoxLayout();
	vertical2 = new QVBoxLayout();
	ePregunta = new QLabel("Cuanto te gusta la asignatura");
	slider = new QSlider(Qt::Horizontal);
	slider->setRange(0, 10);
	QPushButton *boton = new QPushButton("Salir");
	QPushButton *maximizar = new QPushButton("Maximizar");
	QPushButton *mierda = new QPushButton("Vaya mierda");
	
	connect(boton, SIGNAL(clicked()),
                      this, SLOT(accept()));
    
    connect(maximizar, SIGNAL(clicked()),
                      this, SLOT(showMinimized()));
    connect(mierda, SIGNAL(clicked()),
                      this, SLOT(slotMierda()));
	connect(slider, SIGNAL(valueChanged(int)),
                      this, SLOT(gustaAsignatura(int)));
	vertical1->addWidget(ePregunta);
	vertical1->addWidget(slider);
	vertical1->addWidget(mierda);
	vertical1->addWidget(boton);
	vertical2->addWidget(maximizar);
	principal->addLayout(vertical1);
	principal->addLayout(vertical2);
	setLayout(principal);
}
void DEncuesta::slotMierda(){
	ePregunta->setText("Esta asignatura es una mierda");

}
void DEncuesta::gustaAsignatura(int num){
	switch (num){
		case 1:
		ePregunta->setText("wes");
			break;
			case 3:
		ePregunta->setText("yes");
			break;
			default:
			ePregunta->setText("no");
			break;
	
	
	}
	
}
