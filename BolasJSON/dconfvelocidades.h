
#ifndef DCONFVELOCIDADES_H
#define DCONFVELOCIDADES_H
#include "ui_dconfvelocidades.h"
#include "bola.h"
#include <QVector>
#include <QDialog>
#include <QHBoxLayout>
#include "widgetconfvelocidad.h"

class DConfVelocidades : public QDialog, public Ui::DConfVelocidades {
Q_OBJECT

public:
	DConfVelocidades(QVector<Bola*>*pBolas,QWidget *parent = NULL);
	WidgetConfVelocidad *w;
	QVector <Bola*>*lasBolas;

public slots:
	void slotPararTodas();
	void slotActivarColision();

};

#endif 
