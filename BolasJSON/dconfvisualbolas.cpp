
#include "dconfvisualbolas.h"
#include <QDebug>

DConfVisualBolas::DConfVisualBolas(QWidget *parent): QDialog(parent){
		setupUi(this);
		
		

	
}
DConfVisualBolas::DConfVisualBolas(QVector<Bola*>bolasCons,QWidget *parent): QDialog(parent){
		setupUi(this);
		tabBolas->clear();
		bolas = bolasCons;
		for(int i = 0; i<bolas.size();i++){
			WidgetConfBola *w = new WidgetConfBola(bolas.at(i));
			tabBolas->addTab(w,bolas.at(i)->nombre);
			//connect(w,SIGNAL(senyalAlgoCambiado()),
				//this,SLOT(slotVerificarBoton()));
		}
		connect(btnTodasCirculo,SIGNAL(clicked()),
			this,SLOT(slotTodasCirculo()));
		
		

	
}


void DConfVisualBolas::slotTodasCirculo(){

	for (int i = 0; i<tabBolas->count(); i++){
		WidgetConfBola *wCB;
		QWidget *widgetDelTab;
		widgetDelTab=tabBolas->widget(i);
		wCB= qobject_cast<WidgetConfBola*>(widgetDelTab);
		wCB->rbCirculo->setChecked(true);
	}

}
void DConfVisualBolas::slotVerificarBoton(){



}

