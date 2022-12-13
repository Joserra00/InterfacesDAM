#include "editor.h"
#include <QMenuBar>
#include <QTextDocument>
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QTextBlock>
#include <QTextStream>
#include <QStatusBar>
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
	 dBuscar = NULL;
	 dInfo= NULL;
	 dExamen=NULL;
	 crearBarraEstado();
	

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
	
	QMenu * menuEditar = new QMenu("Editar");
	menuBar->addMenu(menuEditar);
	
	accionBuscar = new QAction("Buscar");
	accionBuscar->setShortcut(QString("Ctrl+f"));
	accionBuscar->setStatusTip("Buscar palabras");
	connect (accionBuscar,SIGNAL(triggered()),
		this,SLOT(slotBuscar()));
		menuEditar->addAction(accionBuscar);
	
	accionInfo = new QAction("Info");
	accionInfo->setShortcut(QString("Ctrl+i"));
	accionInfo->setStatusTip("Info");
	connect (accionInfo,SIGNAL(triggered()),
		this,SLOT(slotInfo()));
	menuEditar->addAction(accionInfo);
	
	QMenu * menuExamen = new QMenu("Examen");
	menuBar->addMenu(menuExamen);
	
	accionExamen = new QAction("Examen");
	accionExamen->setShortcut(QString("Ctrl+e"));
	accionExamen->setStatusTip("Examen");
	menuExamen->addAction(accionExamen);
	connect (accionExamen,SIGNAL(triggered()),
		this,SLOT(slotExamen()));
	
	
	
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
void Editor::crearBarraEstado(){
	lEsNombreArchivo = new QLabel("Sin nombre");
	QStatusBar *barraEstado = statusBar();
	barraEstado->addWidget(lEsNombreArchivo);
	lEsModificado = new QLabel("Archivo no modificado");
	barraEstado->addWidget(lEsModificado);
	recargar = new QPushButton("Rescargar");
	recargar->hide();
	connect (recargar,SIGNAL(clicked()),
		this,SLOT(slotAbrirBtn()));
		barraEstado->addWidget(recargar);
	
}
void Editor::slotAbrirBtn(){
	QFile fichero(rutaArchivo);
	qDebug()<< "Vas a guardar" << rutaArchivo;
	if (!fichero.open(QIODevice::ReadOnly)){
		QMessageBox::critical(this,QString("Problema gordo"),
			QString("no podemos tocar el arhicvo"),QMessageBox::Ok);
			
			}
	QTextDocument *document = editorCentral->document();
	document->clear();
	QTextStream flujo(&fichero);
	while(!flujo.atEnd()){
		QString linea = flujo.readLine();
		editorCentral->append(linea);
	}
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
        lEsNombreArchivo->setText(rutaArchivo);
	rutaArchivo=ruta;
    	modificado=false;
    	recargar->hide();
    	lEsModificado->setText("Archivo no modificado");
        return true;
}





void Editor::slotAbrir(){
	if(!continuar()){
	return;
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
void Editor::slotAbrirFicheroExamen(QString ruta){
	abrirFichero(ruta);
	

}
bool Editor::abrirFichero(QString ruta){
	
	if(ruta.isEmpty()){
		return false;
	}
	qDebug()<<modificado;
	rutaArchivo=ruta;
	lEsNombreArchivo->setText(rutaArchivo);

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
	recargar->hide();
	lEsModificado->setText("Archivo no modificado");
	return true;



}
void Editor::slotSalir(){
	this->close();


}
void Editor::modificarBool(){
lEsModificado->setText("Archivo modificado");
recargar->show();
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
	for(int i =0; i<acciones.size();i++){
		disconnect(acciones.at(i),SIGNAL(triggered()));
		menuArchivo->removeAction(acciones.at(i));
	}
	for(int i =0; i<acciones.size();i++){
		delete acciones[i];
	}
	acciones.clear();
	listaArchivosRecientes.removeAll(ruta);
	listaArchivosRecientes.prepend(ruta);
	
	foreach(QString ruta , listaArchivosRecientes){
	
	QString rutaCorta = QFileInfo(ruta).fileName();
	QAction *accion = new QAction(rutaCorta);
	
	QVariant variantRutaCompleta(ruta);
	accion->setData(variantRutaCompleta);
	
	acciones.append(accion);
	menuArchivo->addAction(accion);
	
	connect(accion,SIGNAL(triggered()),
			this,SLOT(slotAbrirReciente()));
			if(dExamen!=NULL){
				dExamen->actualizarDatos(listaArchivosRecientes);
			
			}
			
	
	}
	

	

}
bool Editor::continuar(){
	if(modificado){
		int respuesta = QMessageBox::warning(this,QString("Abrir Documento"),
		QString("Archivo Modificado ¿Que hago, Continuo?"),
		QMessageBox::Cancel |QMessageBox::Save | QMessageBox::Yes);
		if(respuesta==QMessageBox::Cancel)return false;
		if (respuesta == QMessageBox::Save)return slotGuardar();
		
	
	}
	return true;
}
void Editor::slotAbrirReciente(){
	if(!continuar()){
	return;
	}
	QObject *oEmisor = sender();
	QAction *actionCulpable = qobject_cast<QAction*>(oEmisor);
	QString rutaCompleta= actionCulpable->data().toString();
	abrirFichero(rutaCompleta);


}
void Editor::slotBuscar(){
	if(dBuscar==NULL){
		dBuscar = new DBuscar();
		connect(dBuscar, SIGNAL(senyalBuscarAlante(QString)),
			this,SLOT(slotBuscarAlante(QString)));
	}
	dBuscar->show();

	



}
void Editor::slotBuscarAlante(QString palabra){
	qDebug()<<(editorCentral->find(palabra));
	
	
}
void Editor::slotInfo(){
	if(dInfo==NULL){
		QTextDocument *document = editorCentral->document();
		dInfo = new DInfo(document);
					connect(editorCentral,SIGNAL(textChanged()),
			dInfo,SLOT(slotActualizar()));
		
	
	}
	
	dInfo->show();


}
void Editor::slotExamen(){

	if(dExamen==NULL){
		dExamen = new DExamen();
				dExamen->actualizarDatos(listaArchivosRecientes);
				connect(dExamen, SIGNAL(senyalRuta(QString)),
			this,SLOT(slotAbrirFicheroExamen(QString)));
		
	
	}
	
	dExamen->show();


}
	

