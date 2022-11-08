#include "dtransferencia.h"
#include <QDebug>


Dtransferencia::Dtransferencia(QStringList lista,QWidget *parent):QDialog(parent){
	resize(350,100); 
	principal = new QHBoxLayout();
	cuentaH = new QHBoxLayout();
	cantidadH = new QHBoxLayout();
	interesH = new QHBoxLayout();
	vertical1 = new QVBoxLayout();
	vertical2 = new QVBoxLayout();
	interes = new QLabel("Comisión operación: ");
	cuenta = new QLabel("Cuenta destino: ");
	cantidad = new QLabel("Cantidad: ");
	destino = new QLineEdit();
	ecantidad = new QLineEdit();
	combobox = new QComboBox();
	combobox->addItems(lista);
	aceptar = new QPushButton("Aceptar");
	cancelar = new QPushButton("Cancelar");
	listaWidget = new QListWidget();
	aceptar->setEnabled(false);
	listaWidget->addItems(lista);
	
	cuentaH->addWidget(cuenta);
	cuentaH->addWidget(combobox);
	
	cantidadH->addWidget(cantidad);
	cantidadH->addWidget(ecantidad);
	
	interesH->addWidget(interes);
	
	vertical2->addWidget(listaWidget);
	vertical2->addWidget(aceptar);
	vertical2->addWidget(cancelar);
	vertical2->addStretch();
	
	vertical1->addLayout(cuentaH);
	vertical1->addLayout(cantidadH);
	vertical1->addLayout(interesH);
	vertical1->addStretch();
	
	connect(combobox, SIGNAL(currentTextChanged(const QString &)),
                      this, SLOT(slotActualizarBoton(const QString &)));
    connect(aceptar, SIGNAL(clicked()),
                      this, SLOT(slotAceptar2()));
	connect(cancelar, SIGNAL(clicked()),
                      this, SLOT(reject()));
	principal->addLayout(vertical1);
	principal->addLayout(vertical2);
	setLayout(principal);
	
	
	
	
}
void Dtransferencia::slotActualizarBoton(const QString &cad){
	
		aceptar->setEnabled(true);
		

	

}
void Dtransferencia::slotActualizarComision(const QString &cad){
	
	}
	
void Dtransferencia::slotAceptar(){

	qDebug()<<"Estoy aqui";
	float cantidadEnviar = ecantidad->text().toFloat();
	emit senyalTransferenciaOrdenada(cantidadEnviar);
	accept();


}
void Dtransferencia::slotAceptar2(){

	qDebug()<<"Estoy aqui2";
	float cantidadEnviar = ecantidad->text().toFloat();
	
	emit senyalTransferenciaOrdenada2(cantidadEnviar,combobox->currentText());
	
	accept();


}
void Dtransferencia::ActualizarCuentas(const QStringList &listaNueva){
	combobox->clear();
	combobox->addItems(listaNueva);

}























	

