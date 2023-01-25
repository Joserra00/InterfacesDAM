
#include "widgetconfvelocidad.h"
#include <QDebug>

WidgetConfVelocidad::WidgetConfVelocidad(Bola *b,QWidget *parent): QWidget(parent){
		setupUi(this);
		miBola = b;
			cbColisionar->setChecked(true);
			connect(slVertical,SIGNAL(valueChanged(int)),
			this,SLOT(slotVertical(int)));
			connect(slHorizontal,SIGNAL(valueChanged(int)),
			this,SLOT(slotHorizontal(int)));
			slVertical->setRange(-50,50);
			slHorizontal->setRange(-50,50);
		slVertical->setValue(miBola->velY*50/3);
		slHorizontal->setValue(miBola->velX*50/3);
	
}


void WidgetConfVelocidad::slotPararTodas(){

}
void WidgetConfVelocidad::slotVertical(int vel){
	miBola->velY = (float)vel*3/50;
	


}
void WidgetConfVelocidad::slotHorizontal(int vel){
	miBola->velX = (float)vel*3/50;



}

