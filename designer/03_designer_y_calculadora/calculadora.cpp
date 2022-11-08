#include "calculadora.h"
Calculadora::Calculadora (QWidget * parent) : QDialog(parent){

	setupUi(this);
	connect(btnZero,SIGNAL(clicked()),
		this,SLOT(slotActualizarTexto()));
		
		
		connect(btnUno,SIGNAL(clicked()),
		this,SLOT(slotActualizarTexto()));
		connect(btnDos,SIGNAL(clicked()),
		this,SLOT(slotActualizarTexto()));
		connect(btnTres,SIGNAL(clicked()),
		this,SLOT(slotActualizarTexto()));
		connect(btnCuatro,SIGNAL(clicked()),
		this,SLOT(slotActualizarTexto()));
		connect(btnCinco,SIGNAL(clicked()),
		this,SLOT(slotActualizarTexto()));
		connect(btnSeis,SIGNAL(clicked()),
		this,SLOT(slotActualizarTexto()));
		connect(btnSiete,SIGNAL(clicked()),
		this,SLOT(slotActualizarTexto()));
		connect(btnOcho,SIGNAL(clicked()),
		this,SLOT(slotActualizarTexto()));
		connect(btnNueve,SIGNAL(clicked()),
		this,SLOT(slotActualizarTexto()));
			connect(btnMultiplicar,SIGNAL(clicked()),
		this,SLOT(slotBotonC()));
	
	
	


}
void Calculadora::slotActualizarTexto(){
QObject *oEmisor = sender();
QPushButton *botonCulpable = qobject_cast<QPushButton*>(oEmisor);

	QString cadena = resultado->text();
	
	resultado->setText(cadena+botonCulpable->text());
		
	
	}
void Calculadora::slotBotonC(){
	resultado->setText("");

}
