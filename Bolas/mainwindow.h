#ifndef _MAINWINDOW_H_
#define _MAINWINDOW_H_
#include <QMainWindow>
#include <QPaintEvent>
#include <QTimer>
#include "bola.h"
#include <QMenuBar>
#include <QAction>
#include <QMenu>
#include "dinformacion.h"
#include <QKeyEvent>
#include "dpararbolas.h"
class MainWindow : public QMainWindow{
Q_OBJECT
public: 
		MainWindow (QWidget * parent = NULL);
		float posX,posY;
		QStringList listaNombres;
		void paintEvent(QPaintEvent * e);
		QTimer *temporizador;
		QVector<Bola*>bolas;
		int velX,velY;
		DInformacion *dInformacion;
		DPararBolas *dPararBolas;
		Bola *bolaJugador;
		void crearBolas();
		void crearMenus();
		void crearActions();
		QAction *accionInformacion,*accionPararBolas;
		void keyPressEvent(QKeyEvent *e);
public slots:
	void slotTemporizador();
	void slotInformacion();
	void slotPararBolas();


};

#endif
