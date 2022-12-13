#ifndef _MIBOTON_H
#define _MIBOTON_H
#include <QPushButton>
#include "bola.h"
class MiBoton : public QPushButton{
Q_OBJECT

public:
	MiBoton(QWidget *parent = NULL);
	MiBoton(const QString&,QWidget *parent = NULL);
	Bola *bola;





};





#endif
