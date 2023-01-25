
#ifndef DARRASTRAIMAGEN_H
#define DARRASTRAIMAGEN_H
#include "ui_darrastraimagen.h"

#include <QVector>
#include <QDialog>
#include <QHBoxLayout>
#include "bola.h"
#include <QPainter>
#include <QImage>
#include <QDragEnterEvent>
#include <QMimeData>
#include <QDropEvent>
#include <QImage>
class DArrastraImagen : public QDialog, public Ui::DArrastraImagen {
Q_OBJECT

public:
	DArrastraImagen(Bola *,QWidget *parent = NULL);
	Bola *bolaJugador;
	void paintEvent(QPaintEvent * e);
	void dragEnterEvent(QDragEnterEvent *event);
	void dropEvent(QDropEvent *event);
public slots:
	void slotEjemplo();

};

#endif 
