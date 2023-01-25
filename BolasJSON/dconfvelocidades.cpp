
#include "dconfvelocidades.h"
#include <QDebug>


DConfVelocidades::DConfVelocidades(QVector<Bola*>*pBolas,
			QWidget *parent):
		 QDialog(parent){
		setupUi(this);
	tabBolas->clear();
	lasBolas=pBolas;
	connect(btnActivarColision,SIGNAL(clicked()),
			this,SLOT(slotActivarColision()));
	connect(btnPararTodas,SIGNAL(clicked()),
			this,SLOT(slotPararTodas()));
	for(int i=0; i<pBolas->size(); i++){
		Bola *b;
		b = pBolas->at(i);
		w = new WidgetConfVelocidad(b);
		tabBolas->addTab(w,pBolas->at(i)->nombre);
		
		
	}
	
}


void DConfVelocidades::slotPararTodas(){
	for(int i = 0; i<tabBolas->count();i++){
		QWidget *wAct=tabBolas->widget(i);
		//wPosAct->slVertical->setValue(0);
		WidgetConfVelocidad *wCV;
		wCV = qobject_cast<WidgetConfVelocidad*>(wAct);
		w->slVertical->setValue(0);
		w->slHorizontal->setValue(0);
		lasBolas->at(i)->parar();
	
		
	}

}
void DConfVelocidades::slotActivarColision(){
	



}


