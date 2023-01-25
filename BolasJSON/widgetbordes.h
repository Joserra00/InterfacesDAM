#ifndef _WIDGETBORDES_H
#define _WIDGETBORDES_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QPushButton>
#include <QGridLayout>
#include "bola.h"
#include <QDebug>

class WidgetBordes : public QWidget{
Q_OBJECT
public:
	static const int ARRIBA = 0;
	static const int DERECHA = 1;
	static const int ABAJO = 2;
	static const int IZQUIERDA = 3;
	WidgetBordes(Bola *bola,QWidget *parent = nullptr);
	QTimer *temporizador;
	Bola *bola2;
	QGridLayout *layout;
	QPushButton *reset1,*reset2,*reset3,*reset4;
	QLabel *label1,*label2,*label3,*label4;
	
	
	void inicializarWidgets();

public slots:
	void slotBotonCulpable();
	void slotTemporizador();
	
};

#endif
