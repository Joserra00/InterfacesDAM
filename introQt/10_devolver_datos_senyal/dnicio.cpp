#include "dnicio.h"
#include <QVBoxLayout>


DInicio::DInicio(QWidget *parent){
	boton = new QPushButton("Lanzar Transferencia");
	QHBoxLayout *lyPrincipal = new QHBoxLayout;
	QVBoxLayout *layout = new QVBoxLayout;
	botonAct = new QPushButton("Actualizar Cuentas");
	
	layout->addWidget(boton);
	label = new QLabel("Listo para transferir");
	layout->addWidget(label);
	this->setLayout(layout);
	connect(boton,SIGNAL(clicked()),
		this,SLOT(slotAbrirDialogo()));
	dTransf=NULL;
	QStringList l = {"999999","555555","888888"};
	listaCuentas=l;
	layout->addWidget(botonAct);
	connect(botonAct,SIGNAL(clicked()),
		this,SLOT(slotActualizar()));

		
	

}
void DInicio::slotAbrirDialogo(){
	if(dTransf == NULL)
	
	 dTransf =new Dtransferencia(listaCuentas);
	 
	
		connect(dTransf,SIGNAL(senyalTransferenciaOrdenada2(float,QString)),
		this,SLOT(slotTransfCompleta(float,QString)));
				connect(dTransf,SIGNAL(rejected()),
		this,SLOT(slotCambiarTextoDenegado()));
	
dTransf->show();
}
void DInicio::slotCambiarTexto(){

	label->setText("Aceptado");
	delete dTransf;
	dTransf = NULL;


}
void DInicio::slotCambiarTextoDenegado(){
label->setText("Denegado");


}
void DInicio::slotActualizar(){
if(dTransf != NULL){
	QStringList l2 = {"333333","666666","777777"};
	dTransf->ActualizarCuentas(l2);
	dTransf->listaWidget->clear();
	dTransf->listaWidget->addItems(l2);
	}


}
void DInicio::slotTransferenciaCantidadAceptar(float cant){
	QString izq("Transf de ");
	QString cantidad2 = QString::number(cant);
	QString der(" eurillos ");
	
	label->setText(izq+cantidad2+der);
	


}
void DInicio::slotTransfCompleta(float cant, QString cuen){
	slotTransferenciaCantidadAceptar(cant);
	label->setText(label->text()+"a la cuenta: "+cuen);
}




