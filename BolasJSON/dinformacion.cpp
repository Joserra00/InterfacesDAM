#include "dinformacion.h"
#include <QVBoxLayout>
#include <QString>
DInformacion::DInformacion(int altura, int anchura,int numBolas,QWidget *parent) : QDialog(parent){
	QVBoxLayout *layout = new QVBoxLayout();
	lResolucion = new QLabel("texto resolucion");
	lNumBolas = new QLabel("texto numbolas");
	QString resolucion("resolucion");
	resolucion = resolucion + " " + QString::number(anchura) + " x " + QString::number(altura);
	QString sNumBolas("Numero de bolas: ");
	sNumBolas = sNumBolas + QString::number(numBolas);
	lResolucion->setText(resolucion);
	lNumBolas->setText(sNumBolas);
	layout->addWidget(lNumBolas);
	layout->addWidget(lResolucion);
	this->setLayout(layout);
	

}
