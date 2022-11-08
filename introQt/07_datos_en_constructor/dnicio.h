#ifndef _DNICIO_H
#define _DNICIO_H

#include <QDialog>
#include <QPushButton>
#include <QWidget>
#include "dtransferencia.h"
#include <QLabel>

class DInicio : public QDialog{
Q_OBJECT

public:
	DInicio(QWidget *parent = nullptr);
	QPushButton *boton;
	Dtransferencia *dTransf;
	QLabel *label;
	QStringList listaCuentas;
	
	
public slots: 
	void slotAbrirDialogo();
	void slotCambiarTexto();
	void slotCambiarTextoDenegado();
};
#endif
