#include "bola.h"
#include <QPainter>
#include <QColor>
#include <QBrush>
#include <math.h>
Bola::Bola(){
	vida = VIDAMAX;
	diametro=50;
}

Bola::Bola(float px, float py, float vx,float vy):
			posX(px),posY(py),velX(vx),velY(vy),vida(VIDAMAX)
{
	color = QColor(rand()%256,rand()%256,rand()%256);
	diametro=50;
	

}
void Bola::mover(float anchura,float altura){
anchura=anchura-50;
altura=altura-50;
if(posX>=anchura){
		velX = -fabs(velX);
	}
	
	if(posX<=0) {
		velX = fabs(velX);
	}
	posX=posX+velX;
		
		
	if(posY<=0)
		velY = fabs(velY);
	if(posY>=altura)
		velY = -fabs(velY);
		
	posY=posY+velY;

}
void Bola::pintar(QPainter &pintor){

	QBrush brush (QColor(this->color));
	int ancho = diametro;
	pintor.setBrush(brush);
	pintor.drawEllipse(posX,posY,diametro,diametro);
	pintor.drawText(posX,posY,nombre);
	float anchoVerde = (((float)vida)/VIDAMAX) * (float)ancho;
	float anchoRojo = (ancho - (float)anchoVerde);
	pintor.setBrush(Qt::green);
	pintor.drawRect(posX,posY,anchoVerde,3);
	pintor.setBrush(Qt::red);
	pintor.drawRect(posX + anchoVerde,posY,anchoRojo,3);
	




}

float Bola::distancia(Bola *otra){
	float dist;
	dist = sqrtf(powf(posX - otra->posX,2)+
				powf(posY - otra->posY,2)	);
				return dist;

}

bool Bola::chocar(Bola * otra){
	bool hayColision=false;
	if (distancia(otra)>diametro)
		return hayColision;
	
	Bola * arriba,* abajo,*derecha,*izquierda;
	
	if(this->posY<otra->posY){
		arriba=this;
		abajo=otra;
	}else{
		abajo=this;
		arriba=otra;
	
	}
	
	
	if(arriba->velY > abajo->velY){
		float aux=arriba->velY;
		arriba->velY = abajo->velY;
		abajo->velY=aux;
		hayColision=true;
		
	
	}
	if(this->posX<otra->posX){
		izquierda=this;
		derecha=otra;
	}else{
		derecha=this;
		izquierda=otra;
	
	}
	if(derecha->velX < izquierda->velX){
		float aux2=derecha->velX;
		derecha->velX = izquierda->velX;
		izquierda->velX=aux2;
		hayColision=true;
		
	
	}
	
	
	return hayColision;
	
	

}
