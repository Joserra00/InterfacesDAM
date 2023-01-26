#include "dexamen.h"
#include <QDebug>


DExamen::DExamen(Bola *bola,QWidget *parent): QDialog(parent){
		setupUi(this);
	bordes = new WidgetBordes(bola);
	layout = new QHBoxLayout();
	layout->addWidget(bordes);
	frameBolas->setLayout(layout);
	
}


void DExamen::slotEjemplo(){

}

