#include "dbuscar.h"
#include <QDebug>

DBuscar::DBuscar(QWidget *parent):QDialog(parent){
	setupUi(this);
	connect(btnBuscar,SIGNAL(clicked()),
			this,SLOT(slotBtnBuscar()));
	

}
void DBuscar::slotBtnBuscar(){
QString texto(leBuscar->text());
qDebug()<<texto;
emit senyalBuscarAlante(texto);

	

}

