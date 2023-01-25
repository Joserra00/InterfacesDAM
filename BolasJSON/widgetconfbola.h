
#ifndef WIDGETCONFBOLA_H
#define WIDGETCONFBOLA_H
#include "ui_widgetconfbola.h"

#include <QVector>
#include <QWidget>
#include <QHBoxLayout>
#include "bola.h"
#include <QColorDialog>
#include <QDebug>
#include <QPainter>
#include <QFileDialog>
#include <QImage>

class WidgetConfBola : public QWidget, public Ui::WidgetConfBola {
Q_OBJECT

public:
	WidgetConfBola(Bola *bola,QWidget *parent = NULL);
	WidgetConfBola(QWidget *parent = NULL);
	QColorDialog *dialogoColor;
	Bola *bolaSelec;
	QColorDialog *dialogo;

public slots:
	void slotCirculo();
	void slotPatron();
	void slotColor();
	void slotColorSeleccionado(const QColor &color);
	void slotImagen();
	
signals:
	void senyalAlgoCambiado();
	

};

#endif 
