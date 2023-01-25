
#ifndef WIDGETGRAVEDAD_H
#define WIDGETGRAVEDAD_H
#include "ui_widgetgravedad.h"

#include <QVector>
#include <QWidget>
#include <QHBoxLayout>
#include "bola.h"

class WidgetGravedad : public QWidget, public Ui::WidgetGravedad {
Q_OBJECT

public:
	WidgetGravedad(Bola *,int ,QWidget *parent = NULL);
	Bola *bola;
	int altura;
public slots:
	void slotEjemplo(int);

};

#endif 
