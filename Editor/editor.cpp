#include "editor.h"
#include <QMenuBar>
#include <QTextDocument>
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QTextBlock>
#include <QTextStream>
Editor::Editor(QWidget *parent):QMainWindow(parent){


	editorCentral = new QTextEdit();
	this->setCentralWidget(editorCentral);
	setWindowIcon(QIcon("imatges/gigachad.jpg"));
	resize (800,600);
	modificado = false;
	hacerMenus();
		connect(editorCentral,SIGNAL(textChanged()),
			this,SLOT(modificarBool()));
	 rutaArchivo="";
	 
	

}

void Editor::hacerMenus(){
	menuArchivo = new QMenu("Archivo");
	QMenuBar *menuBar = new QMenuBar();
	menuBar->addMenu(menuArchivo);
	this->setMenuBar(menuBar);
	accionSalir = new QAction("Salir");
	accionSalir->setIcon(QIcon("imatges/gigachad.jpg"));
	accionSalir->setShortcut(QString("Ctrl+q"));
	accionSalir->setStatusTip(tr("Salir del programa"));
	connect(accionSalir,SIGNAL(triggered()),
			this,SLOT(slotSalir()));
	menuArchivo->addAction(accionSalir);
	
	accionAbrir = new QAction("Abrir");
	accionAbrir->setIcon(QIcon("imatges/abrir.png"));
	accionAbrir->setShortcut(QString("Ctrl+a"));
	accionAbrir->setToolTip("Abrir");
	connect(accionAbrir,SIGNAL(triggered()),
			this,SLOT(slotAbrir()));
			menuArchivo->addAction(accionAbrir);
	
	accionGuardar = new QAction("Guardar");
	accionGuardar->setIcon(QIcon("imatges/guardar.png"));
	accionGuardar->setShortcut(QString("Ctrl+s"));
	accionGuardar->setToolTip("Guardar");

	connect(accionGuardar,SIGNAL(triggered()),
			this,SLOT(slotGuardar()));
	menuArchivo->addAction(accionGuardar);
	
	accionGuardarComo = new QAction("Guardar Como");
	accionGuardarComo->setIcon(QIcon("imatges/guardarcomo.png"));
	accionGuardarComo->setShortcut(QString("Ctrl+v"));
	accionGuardarComo->setToolTip("Guardar como");
	connect(accionGuardarComo,SIGNAL(triggered()),
			this,SLOT(slotGuardarComo()));
	menuArchivo->addAction(accionGuardarComo);
	editorCentral->addAction(accionSalir);
	editorCentral->addAction(accionAbrir);
	editorCentral->addAction(accionGuardar);
	editorCentral->setContextMenuPolicy(Qt::ActionsContextMenu);
	barraHerramientas = new QToolBar();
	barraHerramientas->addAction(accionSalir);
	barraHerramientas->addAction(accionAbrir);
	barraHerramientas->addAction(accionGuardar);
	barraHerramientas->addAction(accionGuardarComo);
	menuArchivo->addSeparator();
	addToolBar(barraHerramientas);
	

}
bool Editor::slotGuardarComo(){
	 QString ruta =QFileDialog::getSaveFileName(this, tr("Batechar i Guardar"),".",tr("Texto(*.txt *.doc *.info)"));
	qDebug()<< "Vas a guardar" << ruta;
	return guardarFichero(ruta);

}
bool Editor::slotGuardar(){
	if(rutaArchivo.isEmpty()){
		
		return slotGuardarComo();
	}
	return guardarFichero(rutaArchivo);
	
	


}
bool Editor::guardarFichero(QString ruta) {
    	if(ruta.isEmpty()){
    		return false;
    	}
        QFile fichero(ruta);
         if (!fichero.open(QIODevice::WriteOnly)) {
                QMessageBox::warning(this, tr("Editor"),
                             tr("Cannot write file %1:\n%2.")
                             .arg(fichero.fileName())
                             .arg(fichero.errorString()));
        return false;
    }
        QTextStream stream(&fichero);


    for(int i=0; i< editorCentral->document()->blockCount();i++){
        stream << editorCentral->document()->findBlockByNumber(i).text() << "\n";
        }
        
	rutaArchivo=ruta;
    	modificado=false;
        return true;
}





void Editor::slotAbrir(){
	if(modificado){
		int respuesta = QMessageBox::warning(this,QString("Abrir Documento"),
		QString("Archivo Modificado ¿Que hago?"),
		QMessageBox::Cancel |QMessageBox::Save | QMessageBox::Yes);
		if(respuesta==QMessageBox::Cancel)return;
		if (respuesta == QMessageBox::Save)slotGuardar();
		
	
	}
	
	int respuesta = QMessageBox::warning(this,QString("Abrir Documento"),
	QString("¿Seguro? ¿Borro?"),
	QMessageBox::Yes | QMessageBox::No);
	if (respuesta == QMessageBox::No)
	return;
	QString ruta =QFileDialog::getOpenFileName(this, QString("Abrir archivo"),".",QString("Ficheros de texto (*.txt)"));
	qDebug() << "Vas a abrir el archivo " << ruta;
	abrirFichero(ruta);
	anyadirArchivoMenu(ruta);

}
bool Editor::abrirFichero(QString ruta){
	
	if(ruta.isEmpty()){
		return false;
	}	
	
	rutaArchivo=ruta;
		

	QFile fichero(ruta);
	if (!fichero.open(QIODevice::ReadOnly)){
		QMessageBox::critical(this,QString("Problema gordo"),
			QString("no podemos tocar el arhicvo"),QMessageBox::Ok);
			return false;
			}
	
	QTextDocument *document = editorCentral->document();
	document->clear();
	QTextStream flujo(&fichero);
	while(!flujo.atEnd()){
		QString linea = flujo.readLine();
		editorCentral->append(linea);
	}
	
	
	modificado = false;
	return true;



}
void Editor::slotSalir(){
	this->close();


}
void Editor::modificarBool(){

	modificado=true;

}
void Editor::closeEvent(QCloseEvent *event){
	qDebug()<< modificado;
	if(modificado){
		int respuesta = QMessageBox::warning(this,QString("Guardar Documento"),
		QString("Archivo Modificado ¿Quieres Guardar?"),
		QMessageBox::Yes | QMessageBox::Cancel);
		if(respuesta==QMessageBox::Cancel){
		event->accept();
		}
		if (respuesta == QMessageBox::Yes){
		if(slotGuardar()){
			event->accept();
			return;
		
		}else event->ignore();
		}
	
	}else{
	event->accept();
	
	}
}
void Editor::anyadirArchivoMenu(QString ruta){
	QString rutaCorta = QFileInfo(ruta).fileName();
	QAction *accion = new QAction(rutaCorta);
	QVariant variantRutaCompleta(ruta);
	accion->setData(variantRutaCompleta);
	connect(accion,SIGNAL(triggered()),
			this,SLOT(slotAbrirReciente()));
	acciones.append(accion);
	
		menuArchivo->addAction(accion);
	
	

	

}
void Editor:: slotAbrirReciente(){
	QObject *oEmisor = sender();
	QAction *actionCulpable = qobject_cast<QAction*>(oEmisor);
	QString rutaCompleta= actionCulpable->data().toString();
	abrirFichero(rutaCompleta);


}
	

