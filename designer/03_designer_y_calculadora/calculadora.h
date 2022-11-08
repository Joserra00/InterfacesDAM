#ifndef CALCULADORA_H
#define CALCULADORA_H


#include <QDialog>
#include "ui_calculadora.h"

class Calculadora : public QDialog, public Ui::Calculadora{
Q_OBJECT
	public :
		Calculadora(QWidget * parent = NULL);
		
	public slots: 
	
void slotActualizarTexto();
void slotBotonC();
	

};

#endif
