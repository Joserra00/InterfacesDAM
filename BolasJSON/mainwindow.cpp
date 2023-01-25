#include "mainwindow.h"
#include <QPainter>
#include <QColor>
#include <QBrush>
#include <math.h>
#include <stdlib.h>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QByteArray>
#define NUMBOLAS 10
MainWindow::MainWindow(QWidget * parent) : QMainWindow(parent){
	temporizador = new QTimer();
	temporizador->setInterval(20);
	temporizador->setSingleShot(false);
	temporizador->start();
	resize (800,600);
	QStringList lista = {"Manolo","Pablo","Antonio","Geronimo","Pepe","Nacho","Sam","Gofre","Santo","Franco"};
	listaNombres=lista;
		connect(temporizador,SIGNAL(timeout()),
			this,SLOT(slotTemporizador()));
	dInformacion=NULL;
	dPararBolas=NULL;
	dExamen=NULL;
	dConfVisualBolas=NULL;
	dConfVelocidades=NULL;
	dInfoTabla=NULL;
	dArrastraImagen=NULL;
	dPracticaExamen=NULL;
	crearActions();
	crearMenus();
	crearBolas();
			
}

void MainWindow::paintEvent(QPaintEvent * e){
	QPainter pintor(this);
	for(int i = 0; i<NUMBOLAS; i++){
		bolas.at(i)->pintar(pintor);
		
	}
	bolaJugador->pintar(pintor);
	
}
void MainWindow::keyPressEvent(QKeyEvent * e){
	int tecla = e->key();
	switch (tecla){
		case Qt::Key_Up:
			bolaJugador->velY-=1;
			break;
		case Qt::Key_Down:
			bolaJugador->velY+=1;
			break;
		case Qt::Key_Left:
			bolaJugador->velX-=1;
			break;
		case Qt::Key_Right:
			bolaJugador->velX+=1;
			break;
			
	
	}



}
void MainWindow::crearActions(){
	accionInformacion = new QAction("Informacion Juego");
	connect(accionInformacion,SIGNAL(triggered()),
			this,SLOT(slotInformacion()));
	accionPararBolas = new QAction("Parar Bolas");
	connect(accionPararBolas,SIGNAL(triggered()),
			this,SLOT(slotPararBolas()));
	accionExamen = new QAction("Examen");
	connect(accionExamen,SIGNAL(triggered()),
			this,SLOT(slotExamen()));
	accionConfBolas = new QAction("ConfBolas");
	connect(accionConfBolas,SIGNAL(triggered()),
			this,SLOT(slotConfBolas()));
	accionConfVelocidades= new QAction("ConfVelocidades");
	connect(accionConfVelocidades,SIGNAL(triggered()),
			this,SLOT(slotVelocidadBolas()));
	accionInfoTabla = new QAction("InfoTabla");
	connect(accionInfoTabla,SIGNAL(triggered()),
			this,SLOT(slotInfoTabla()));
	accionArrastraImagen = new QAction("Arrastra Imagen");
	connect(accionArrastraImagen,SIGNAL(triggered()),
			this,SLOT(slotArrastraImagen()));
	accionGuardarPartida = new QAction("Guardar partida");
	connect(accionGuardarPartida,SIGNAL(triggered()),
			this,SLOT(slotGuardarPartida()));
	accionCargar = new QAction("Cargar partida");
	connect(accionCargar,SIGNAL(triggered()),
			this,SLOT(slotCargar()));
	accionExamenPractica = new QAction("Examen practica");
	connect(accionExamenPractica,SIGNAL(triggered()),
			this,SLOT(slotPracticaExamen()));
}
void MainWindow::crearMenus(){
	//QMenuBar *menuBar = menuBar();
	QMenu * menuArchivo = menuBar()->addMenu("Archivo");
	QMenu * menuBolas = menuBar()->addMenu("ConfBolas");
	menuArchivo->addAction(accionInformacion);
	menuArchivo->addAction(accionPararBolas);
	menuArchivo->addAction(accionExamen);
	menuBolas->addAction(accionConfBolas);
	menuBolas->addAction(accionConfVelocidades);
	menuBolas->addAction(accionInfoTabla);
	menuBolas->addAction(accionArrastraImagen);
	menuBolas->addAction(accionGuardarPartida);
	menuBolas->addAction(accionCargar);
	menuBolas->addAction(accionExamenPractica);
}

void MainWindow::slotTemporizador(){

	for(int i = 0; i<NUMBOLAS; i++){
		bolas.at(i)->mover(width(),height());
		
	}
	bolaJugador->mover(width(),height());
	for(int i = 0; i<NUMBOLAS; i++){
		if(bolaJugador->chocar(bolas.at(i))){
			bolaJugador->vida -= 2;
			bolas.at(i)->vida -=2;
			
		}
		for(int j = 0; j<NUMBOLAS; j++){
			if(i!=j){
				if(bolas.at(i)->chocar(bolas.at(j))){
					bolas.at(i)->vida -=2;
					bolas.at(j)->vida -=2;
					qDebug()<<"Bola"<<bolas.at(i)->nombre<<"choca con bola"<< bolas.at(j)->nombre<<" en " << bolas.at(i)->posX << " , "<<bolas.at(i)->posY;
				}
				
			}
	}
		
		
	}
	
	
	update();
}
void MainWindow::crearBolas(){
		
	for(int i =0; i<NUMBOLAS;i++){
		float posX=random()%width();
		float posY=random()%height();
		float velX=(float)(rand()%100)/50-1;
		float velY=(float)(rand()%100)/50-1;
		velX=velX*5;
		velY=velY*5;
		Bola *nueva = new Bola(posX,posY,velX,velY);
		nueva->nombre=listaNombres.at(i%listaNombres.size());
		bolas.append(nueva);
	
	}
	bolaJugador = new Bola(50,50,0.5,0.5);
	bolaJugador->color=QColor("Black");
	QImage imagen("smiley.png");
	bolaJugador->imagen = imagen.scaled(bolaJugador->diametro,bolaJugador->diametro);
	bolaJugador->resalte = Bola::BolaImagen;
	
}

void MainWindow::slotPararBolas(){
	if(dPararBolas==NULL){
		dPararBolas = new DPararBolas(&bolas);
		}
		dPararBolas->show();
}

void MainWindow::slotInformacion(){
	if(dInformacion==NULL){
		dInformacion = new DInformacion(width(),height(),bolas.size());
		}
		dInformacion->show();



}

void MainWindow::slotExamen(){
	if(dExamen==NULL){
		dExamen = new DExamen(bolaJugador);
		}
		dExamen->show();


}

void MainWindow::slotConfBolas(){
if(dConfVisualBolas==NULL){
		dConfVisualBolas = new DConfVisualBolas(bolas);
		}
		dConfVisualBolas->show();

}


void MainWindow::slotVelocidadBolas(){
	if(dConfVelocidades==NULL){
		dConfVelocidades = new DConfVelocidades(&bolas);
		}
		dConfVelocidades->show();

}
void MainWindow::slotInfoTabla(){
if(dInfoTabla==NULL){
		dInfoTabla = new DInfoTabla(&bolas);
		}
		dInfoTabla->show();



}
void MainWindow::slotArrastraImagen(){
if(dArrastraImagen==NULL){
		dArrastraImagen = new DArrastraImagen(bolaJugador);
		}
		dArrastraImagen->show();


}
void MainWindow::slotGuardarPartida(){
	/*QJsonObject objetoPrincipal;
	objetoPrincipal["autor"] = QString("joserraco");
	QJsonObject objetoBolas;
	objetoBolas["bolas"] = bolas.size();
	for (int i  = 0; i<bolas.size(); i++){
		QJsonArray datosBola;
		datosBola.append(bolas.at(i)->posX);
		datosBola.append(bolas.at(i)->posY);
		datosBola.append(bolas.at(i)->velX);
		datosBola.append(bolas.at(i)->velY);
		objetoBolas[bolas.at(i)->nombre]=datosBola;
	}
	objetoPrincipal["seccionBolas"] = objetoBolas;
	QJsonDocument documento(objetoPrincipal);
	QFile saveFile(QStringLiteral("save.json"));
	saveFile.open(QIODevice::WriteOnly);
	


		QString rutaArchivo("./partida.sav");
		QFile fichero(rutaArchivo);
		fichero.open(QIODevice::WriteOnly);
		fichero.write(documento.toJson());
		QTextStream outStream(&fichero);
		outStream<<"Hola "<<Qt::endl;
		fichero.close();
		

*/

}
void MainWindow::slotCargar(){
	/*QFile fichero("./partida.sav");
	if(saveFile.open(QIODevice::ReadOnly)){
	return;
	}
	QByteArray savedData = fichero.readAll();
	QJsonDocument documento(QJsonDocument::fromJson(savedData));
	
*/



}
void MainWindow::slotPracticaExamen(){
if(dPracticaExamen==NULL){
		dPracticaExamen = new DPracticaExamen(&bolas,height());
		}
		dPracticaExamen->show();

	


}














