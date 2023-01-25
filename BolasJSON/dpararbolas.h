
#ifndef DPARARBOLAS_H
#define DPARARBOLAS_H
#include "ui_dpararbolas.h"

#include <QVector>
#include <QDialog>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QFrame>
#include <QVector>
#include <QPushButton>
#include "bola.h"
#include "miboton.h"
class DPararBolas : public QDialog, public Ui::DPararBolas {
Q_OBJECT

public:
	DPararBolas(QVector <Bola*>*,QWidget *parent = NULL);
	QGridLayout *layout;
	QVector<QPushButton*>btnBolas;
	QVector <Bola*>*lasBolas;

public slots:
	void slotParar();

};

#endif 
