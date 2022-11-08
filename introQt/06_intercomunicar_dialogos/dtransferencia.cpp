#include "dtransferencia.h"


Dtransferencia::Dtransferencia(QWidget *parent):QDialog(parent){
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


	aceptar = new QPushButton("Aceptar");
	cancelar = new QPushButton("Cancelar");
	aceptar->setEnabled(false);
	
	cuentaH->addWidget(cuenta);
	cuentaH->addWidget(destino);
	
	cantidadH->addWidget(cantidad);
	cantidadH->addWidget(ecantidad);
	
	interesH->addWidget(interes);
	
	vertical2->addWidget(aceptar);
	vertical2->addWidget(cancelar);
	vertical2->addStretch();
	
	vertical1->addLayout(cuentaH);
	vertical1->addLayout(cantidadH);
	vertical1->addLayout(interesH);
	vertical1->addStretch();
	
	connect(destino, SIGNAL(textChanged(const QString &)),
                      this, SLOT(slotActualizarBoton(const QString &)));
    connect(aceptar, SIGNAL(clicked()),
                      this, SLOT(accept()));
	connect(cancelar, SIGNAL(clicked()),
                      this, SLOT(reject()));
	principal->addLayout(vertical1);
	principal->addLayout(vertical2);
	setLayout(principal);
	
	
	
	
}
void Dtransferencia::slotActualizarBoton(const QString &cad){
	QString cadDestino = destino->text();
	QRegularExpression reDestino("^\\d{6}$");
	
	QRegularExpressionMatch mDestino = reDestino.match(cadDestino);
	
	QString cadCantidad = destino->text();
	QRegularExpression reCantidad("^\\d+$");
	
	QRegularExpressionMatch mCantidad = reCantidad.match(cadCantidad);
	
	bool destinoOK = mDestino.hasMatch();
	bool cantidadOK = mCantidad.hasMatch();
	
	if(destinoOK && cantidadOK)
		aceptar->setEnabled(true);
		else aceptar->setEnabled(false);

	


	

}
void Dtransferencia::slotActualizarComision(const QString &cad){
	
	
	}























	

