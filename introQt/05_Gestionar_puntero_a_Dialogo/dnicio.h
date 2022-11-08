#ifndef _DNICIO_H
#define _DNICIO_H

#include <QDialog>
#include <QPushButton>
#include <QWidget>
#include "dtransferencia.h"


class DInicio : public QDialog{
Q_OBJECT

public:
	DInicio(QWidget *parent = nullptr);
	QPushButton *boton;
	Dtransferencia *dTransf;
	
	
public slots: 
	void slotAbrirDialogo();
};
#endif
