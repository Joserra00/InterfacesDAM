
#ifndef WIDGETCONFVELOCIDAD_H
#define WIDGETCONFVELOCIDAD_H
#include "ui_widgetconfvelocidad.h"

#include <QVector>
#include <QWidget>
#include <QHBoxLayout>
#include "bola.h"

class WidgetConfVelocidad : public QWidget, public Ui::WidgetConfVelocidad {
Q_OBJECT

public:
	WidgetConfVelocidad(Bola *,QWidget *parent = NULL);
	Bola *miBola;

public slots:
	void slotPararTodas();
	void slotVertical(int);
	void slotHorizontal(int);

};

#endif 
