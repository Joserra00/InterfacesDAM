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
#include "dexamen.h"
#include "dconfvisualbolas.h"
#include "dconfvelocidades.h"
#include "dinfotabla.h"
#include "darrastraimagen.h"
#include "dpracticaexamen.h"
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
		DExamen *dExamen;
		Bola *bolaJugador;
		DInfoTabla *dInfoTabla;
		DArrastraImagen *dArrastraImagen;
		DPracticaExamen *dPracticaExamen;
		void crearBolas();
		void crearMenus();
		void crearActions();
		DConfVisualBolas *dConfVisualBolas;
		DConfVelocidades *dConfVelocidades;
		QAction *accionInformacion,*accionPararBolas,*accionExamen,*accionConfBolas,*accionConfVelocidades, *accionInfoTabla, *accionArrastraImagen,*accionGuardarPartida,*accionCargar,*accionExamenPractica;
		void keyPressEvent(QKeyEvent *e);
public slots:
	void slotGuardarPartida();
	void slotTemporizador();
	void slotInformacion();
	void slotPararBolas();
	void slotExamen();
	void slotConfBolas();
	void slotVelocidadBolas();
	void slotInfoTabla();
	void slotArrastraImagen();
	void slotCargar();
	void slotPracticaExamen();

	
	


};

#endif
