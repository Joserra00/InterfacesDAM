#ifndef _BOLA_H_
#define _BOLA_H_
#include <QMainWindow>
#include <QPaintEvent>
#include <QTimer>
#include <QPainter>
#include <QColor>
#include <QImage>
class Bola{

public: 
		enum BolaResalte{BolaCirculo,BolaPatron,BolaImagen};
		BolaResalte resalte;
		QImage imagen;
		static const int ARRIBA = 0;
		static const int DERECHA = 1;
		static const int ABAJO = 2;
		static const int IZQUIERDA = 3;
		QVector <int> rebotes;
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
