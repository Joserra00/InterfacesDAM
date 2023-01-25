
#include "darrastraimagen.h"
#include <QDebug>


DArrastraImagen::DArrastraImagen(Bola *bolaPasada,QWidget *parent): QDialog(parent){
		setupUi(this);
		bolaJugador=bolaPasada;
		setAcceptDrops(true);
	
}


void DArrastraImagen::slotEjemplo(){

}
void DArrastraImagen::dragEnterEvent(QDragEnterEvent *event){

	if(!event->mimeData()->hasUrls()){
		event->ignore();
		return;
	}
	event->acceptProposedAction();
	QString text(event->mimeData()->urls().first().path());
	qDebug()<<text;
	
}
void DArrastraImagen::dropEvent(QDropEvent *event){
	QString text(event->mimeData()->urls().first().path());
	QImage imagen(text);
	bolaJugador->imagen = imagen.scaled(bolaJugador->diametro,bolaJugador->diametro);
	bolaJugador->resalte = Bola::BolaImagen;
	update();

}
void DArrastraImagen::paintEvent(QPaintEvent * e){
		QImage imagen = bolaJugador->imagen.scaled(width(),height());
		QPainter pintor(this);
		pintor.drawImage(0,0,imagen);



}

