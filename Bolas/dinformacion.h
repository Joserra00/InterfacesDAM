#ifndef _DINFORMACION_H_
#define _DINFORMACION_H_

#include <QDialog>
#include <QLabel>
class DInformacion : public QDialog{
Q_OBJECT
public:
	DInformacion(int,int,int,QWidget *parent=NULL);
	QLabel *lResolucion;
	QLabel *lNumBolas;


};
#endif
