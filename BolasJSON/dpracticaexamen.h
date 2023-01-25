
#ifndef DPRACTICAEXAMEN_H
#define DPRACTICAEXAMEN_H
#include "ui_dpracticaexamen.h"

#include <QVector>
#include <QDialog>
#include <QHBoxLayout>
#include "bola.h"
#include "widgetgravedad.h"

class DPracticaExamen : public QDialog, public Ui::DPracticaExamen {
Q_OBJECT

public:
	DPracticaExamen(QVector <Bola*> *,int altura,QWidget *parent = NULL);
	QVector <Bola*> *lasBolas;	

public slots:
	void slotEjemplo();

};

#endif 
