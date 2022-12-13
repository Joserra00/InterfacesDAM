#ifndef _DEXAMEN_H
#define _DEXAMEN_H

#include <QDialog>
#include "ui_dexamen.h"
#include <QFile>
#include <QTextStream>

class DExamen : public QDialog, public Ui::DExamen{
Q_OBJECT
	public:
		DExamen(QWidget *parent = NULL);
		void actualizarDatos(QStringList listaArchivosRecientes);
	public slots:
		void slotBtnCargar();
		void slotActualizarLinea(int);
	
	signals:
	void senyalRuta(QString);
	
	
};

#endif 
