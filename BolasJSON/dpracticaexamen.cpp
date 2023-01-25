
#include "dpracticaexamen.h"
#include <QDebug>

DPracticaExamen::DPracticaExamen(QVector <Bola*> *bolasPasadas,int altura,QWidget *parent): QDialog(parent){
		setupUi(this);
	tabBolas->clear();
	lasBolas=bolasPasadas;
	for(int i = 0; i<lasBolas->size(); i++){
		WidgetGravedad *w = new WidgetGravedad(lasBolas->at(i),altura);
		tabBolas->addTab(w,lasBolas->at(i)->nombre);
	}
	
	connect(btnGravedad,SIGNAL(clicked()),this,SLOT(slotEjemplo()));
}


void DPracticaExamen::slotEjemplo(){
for(int i = 0; i<tabBolas->count();i++){
		QWidget *wAct=tabBolas->widget(i);
		//wPosAct->slVertical->setValue(0);
		WidgetGravedad *wCV;
		wCV = qobject_cast<WidgetGravedad*>(wAct);
		wCV->activarGravedad->setChecked(true);
	
		
	}




}

