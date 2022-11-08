#include "dnicio.h"
#include <QVBoxLayout>


DInicio::DInicio(QWidget *parent){
	boton = new QPushButton("Lanzar Transferencia");
	
	QVBoxLayout *layout = new QVBoxLayout;
	layout->addWidget(boton);
	this->setLayout(layout);
	connect(boton,SIGNAL(clicked()),
		this,SLOT(slotAbrirDialogo()));
	dTransf=NULL;
	

		
	label = new QLabel("Listo para transferir");
	layout->addWidget(label);

}
void DInicio::slotAbrirDialogo(){
	if(dTransf == NULL){
	 dTransf =new Dtransferencia();
	
		connect(dTransf,SIGNAL(accepted()),
		this,SLOT(slotCambiarTexto()));
				connect(dTransf,SIGNAL(rejected()),
		this,SLOT(slotCambiarTextoDenegado()));
	}
dTransf->show();
}
void DInicio::slotCambiarTexto(){

	label->setText("Aceptado");


}
void DInicio::slotCambiarTextoDenegado(){
label->setText("Denegado");


}

