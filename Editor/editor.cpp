#include "editor.h"
#include <QMenuBar>
#include <QTextDocument>
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>
#include <QFile>
#include <QString>
#include <QTextBlock>
#include <QTextStream>
Editor::Editor(QWidget *parent){


	editorCentral = new QTextEdit();
	this->setCentralWidget(editorCentral);
	setWindowIcon(QIcon("imatges/gigachad.jpg"));
	resize (800,600);
	modificado = false;
	hacerMenus();
		connect(editorCentral,SIGNAL(textChanged()),
			this,SLOT(modificarBool()));
	QString ruta;
	

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
	addToolBar(barraHerramientas);
	

}
void Editor::slotGuardarComo(){
	 ruta =QFileDialog::getSaveFileName(this, tr("Batechar i Guardar"),".",tr("Texto(*.txt *.doc *.info)"));
	qDebug()<< "Vas a guardar" << ruta;
	QFile fichero(ruta);
	if(!fichero.open(QIODevice::WriteOnly)){
	QMessageBox::critical(this,QString("Problema gordo"),
			QString("no podemos tocar el arhicvo"),QMessageBox::Close);
			return;
		
	
	}
	QTextStream flujo(&fichero);
	for(int i  =0; i<editorCentral->document()->blockCount();i++){
		QString cadena = editorCentral->document()->findBlockByNumber(i).text();
		flujo << cadena;		
	}

}
void Editor::slotGuardar(){
	
	qDebug() << "Vas a guardar el archivo " << ruta;
	guardarFichero(ruta);
	
	


}
bool Editor::guardarFichero(QString nombreFichero) {
    
        QFile fichero(nombreFichero);
         if (!fichero.open(QIODevice::WriteOnly)) {
                QMessageBox::warning(this, tr("Editor"),
                             tr("Cannot write file %1:\n%2.")
                             .arg(fichero.fileName())
                             .arg(fichero.errorString()));
        return false;
    }
        QTextStream stream(&fichero);


    for(int i=0; i< editorCentral->document()->blockCount();i++)
        stream << editorCentral->document()->findBlockByNumber(i).text() << endl;
        

    modificado=false;
        return true;
}

void Editor::establecerFicheroActual(const QString &nombreFichero)
{
    setWindowModified(false);
    QString nombreAMostrar = tr("Untitled");
    if (!nombreFichero.isEmpty()) {
        nombreAMostrar = nombreCorto(nombreFichero);

   
    }

    setWindowTitle(tr("%1[*] - %2").arg(nombreAMostrar)
                                   .arg(tr("Spreadsheet")));
}
QString Editor::nombreCorto(const QString &nombreCompleto)
{
    return QFileInfo(nombreCompleto).fileName();
}



void Editor::slotAbrir(){
	QTextDocument *document = editorCentral->document();
	document->clear();
	int respuesta = QMessageBox::warning(this,QString("Abrir Documento"),
	QString("¿Seguro? ¿Borro?"),
	QMessageBox::Yes | QMessageBox::No);
	if (respuesta == QMessageBox::No)
	return;
	document->clear();
	ruta =QFileDialog::getOpenFileName(this, QString("Abrir archivo"),".",QString("Ficheros de texto (*.txt)"));
	qDebug() << "Vas a abrir el archivo " << ruta;
	
	QFile fichero(ruta);
	if (!fichero.open(QIODevice::ReadOnly)){
		QMessageBox::critical(this,QString("Problema gordo"),
			QString("no podemos tocar el arhicvo"),QMessageBox::Ok);
			return;
	
	}
	QTextStream flujo(&fichero);
	while(!flujo.atEnd()){
		QString linea = flujo.readLine();
		editorCentral->append(linea);
	}
	modificado = false;

}
void Editor::slotSalir(){
	this->close();


}
void Editor::modificarBool(){

	modificado=true;

}



