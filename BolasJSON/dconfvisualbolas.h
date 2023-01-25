
#ifndef DCONFVISUALBOLAS_H
#define DCONFVISUALBOLAS_H
#include "ui_dconfvisualbolas.h"

#include <QVector>
#include <QDialog>
#include <QHBoxLayout>
#include "widgetconfbola.h"
#include "bola.h"
#include <QVector>
class DConfVisualBolas : public QDialog, public Ui::DConfVisualBolas {
Q_OBJECT

public:
	DConfVisualBolas(QWidget *parent = NULL);
	DConfVisualBolas(QVector<Bola*>bolasCons,QWidget *parent = NULL);
	QVector<Bola*>bolas;
public slots:
	void slotTodasCirculo();
	void slotVerificarBoton();

};

#endif 
