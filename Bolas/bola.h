#ifndef _BOLA_H_
#define _BOLA_H_
#include <QMainWindow>
#include <QPaintEvent>
#include <QTimer>
#include <QPainter>
#include <QColor>
class Bola{

public: 
		const static int VIDAMAX = 100;
		Bola();
		int vida;
		Bola(float,float,float,float);
		float posX;
		float posY;
		float diametro;
		QColor color;
		QString nombre;
		float velX,velY;
		void mover(float,float);
		void pintar(QPainter&);
		float distancia(Bola*);
		bool chocar(Bola*);

};

#endif
