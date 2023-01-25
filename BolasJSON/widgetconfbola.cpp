
#include "widgetconfbola.h"
#include <QDebug>

WidgetConfBola::WidgetConfBola(Bola *bola,QWidget *parent): QWidget(parent){
		setupUi(this);
		bolaSelec=bola;
		connect(rbCirculo,SIGNAL(toggled(bool)),
			this,SLOT(slotCirculo()));
		connect(rbPatron,SIGNAL(toggled(bool)),
			this,SLOT(slotPatron()));
			connect(btnColor,SIGNAL(toggled(bool)),
			this,SLOT(slotColor()));
		dialogo=NULL;
		connect(btnImagen,SIGNAL(clicked()),
			this,SLOT(slotImagen()));
			//connect(rbCirculo,SIGNAL(toggled(bool),
			//this,SIGNAL(senyalAlgoCambiado()));
}
WidgetConfBola::WidgetConfBola(QWidget *parent): QWidget(parent){
		setupUi(this);
		connect(rbCirculo,SIGNAL(clicked()),
			this,SLOT(slotCirculo()));
		connect(rbPatron,SIGNAL(clicked()),
			this,SLOT(slotPatron()));
			connect(btnColor,SIGNAL(clicked()),
			this,SLOT(slotColor()));
		dialogo=NULL;
		connect(btnImagen,SIGNAL(clicked()),
			this,SLOT(slotImagen()));
}


void WidgetConfBola::slotCirculo(){
		bolaSelec->color = QColor(rand()%256,rand()%256,rand()%256);
		bolaSelec->resalte=Bola::BolaCirculo;
	

	

}
void WidgetConfBola::slotPatron(){
		bolaSelec->resalte=Bola::BolaPatron;

	

}
void WidgetConfBola::slotImagen(){
	QString ruta=QFileDialog::getOpenFileName(this, QString("Abrir imagen"),".",QString("Imagenes (*.jpg *.png *.jpeg)"));
	

}
void WidgetConfBola::slotColor(){
		if(dialogo==NULL){
			dialogo = new QColorDialog();
			connect(dialogo,SIGNAL(colorSelected(const QColor &)),
				this,SLOT(slotColorSeleccionado(const QColor &)));
		}
		dialogo->setVisible(true);
		
	

}
void WidgetConfBola::slotColorSeleccionado(const QColor &color){
	qDebug()<<"Dentro Color";
	bolaSelec->color=color;
	
}





