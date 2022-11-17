#include "dinfo.h"
#include <QDebug>


DInfo::DInfo(QTextDocument *documentoPasado,QWidget *parent):QDialog(parent){
	setupUi(this);
	documento = documentoPasado;
	int numLineas=documentoPasado->lineCount();
	lLineas->setText(QString::number(numLineas));
	this->setFocusPolicy(Qt::ClickFocus);
	

}

void DInfo::showEvent(QShowEvent *event){
	slotActualizar();
}
void DInfo::focusInEvent(QFocusEvent *event){
	slotActualizar();
}
void DInfo::slotActualizar(){
int numLineas=documento->lineCount();
	lLineas->setText(QString::number(numLineas));
	
}

