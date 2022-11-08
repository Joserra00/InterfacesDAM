#ifndef _DNICIO_H
#define _DNICIO_H

#include <QDialog>
#include <QPushButton>
#include <QWidget>
#include "dtransferencia.h"
#include <QLabel>
#include <QString>

class DInicio : public QDialog{
Q_OBJECT

public:
	DInicio(QWidget *parent = nullptr);
	QPushButton *boton,*botonAct;
	Dtransferencia *dTransf;
	QLabel *label;
	QStringList listaCuentas;
	
	
public slots: 
	void slotAbrirDialogo();
	void slotCambiarTexto();
	void slotCambiarTextoDenegado();
	void slotActualizar();
	void slotTransferenciaCantidadAceptar(float);
	void slotTransfCompleta(float, QString);
};
#endif
