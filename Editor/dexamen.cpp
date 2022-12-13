#include "dexamen.h"
#include <QDebug>

DExamen::DExamen(QWidget *parent):QDialog(parent){
	setupUi(this);
	connect(btnCargar,SIGNAL(clicked()),
			this,SLOT(slotBtnCargar()));
		connect(rutaCombobox,SIGNAL(currentIndexChanged(int)),
			this,SLOT(slotActualizarLinea(int)));
	

}

void DExamen::actualizarDatos(QStringList listaArchivosRecientes){
	qDebug()<<"hola";
	rutaCombobox->clear();
	rutaCombobox->addItems(listaArchivosRecientes);
	/*foreach(QString ruta , listaArchivosRecientes){
	
		QString rutaCorta = QFileInfo(ruta).fileName();
		rutaCombobox
		
		QVariant variantRutaCompleta(ruta);
		accion->setData(variantRutaCompleta);
	}*/

}
void DExamen::slotBtnCargar(){
	
		qDebug()<<rutaCombobox->currentText();
		emit senyalRuta(rutaCombobox->currentText());	


}
void DExamen::slotActualizarLinea(int index){
	qDebug()<<rutaCombobox->currentText();
	QFile fichero(rutaCombobox->currentText());
	QTextStream flujo(&fichero);
	while(!flujo.atEnd()){
		QString linea = flujo.readLine();
		qDebug()<<linea;
		
	}
	

}
	



