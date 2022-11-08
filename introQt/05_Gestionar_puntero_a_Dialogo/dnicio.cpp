#include "dnicio.h"
#include <QHBoxLayout>


DInicio::DInicio(QWidget *parent){
	boton = new QPushButton("Lanzar");
	
	QHBoxLayout *layout = new QHBoxLayout;
	layout->addWidget(boton);
	this->setLayout(layout);
	connect(boton,SIGNAL(clicked()),
		this,SLOT(slotAbrirDialogo()));
	dTransf=NULL;


}
void DInicio::slotAbrirDialogo(){
	if(dTransf == NULL)
	 dTransf =new Dtransferencia();
	dTransf->show();


}
