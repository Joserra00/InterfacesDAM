#ifndef DEXAMEN_H
#define DEXAMEN_H
#include "ui_dexamen.h"
#include "widgetbordes.h"
#include <QVector>
#include <QDialog>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QFrame>
#include "bola.h"

class DExamen : public QDialog, public Ui::DExamen {
Q_OBJECT

public:
	DExamen(Bola *bola,QWidget *parent=nullptr);
	WidgetBordes *bordes;
	QHBoxLayout *layout;
	
	
public slots:
	void slotEjemplo();

};

#endif 
