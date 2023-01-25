#include "bola.h"
#include <QPainter>
#include <QColor>
#include <QBrush>
#include <math.h>
Bola::Bola(){
	vida = VIDAMAX;
	diametro = 50;
	resalte = BolaCirculo;
}

Bola::Bola(float px, float py, float vx,float vy):
			posX(px),posY(py),velX(vx),velY(vy),vida(VIDAMAX)
{
resalte = BolaCirculo;
	vida = VIDAMAX;
	color = QColor(rand()%256,rand()%256,rand()%256);
	diametro=50;
	rebotes.resize(IZQUIERDA+1);
	for(int i = 0; i<rebotes.size();i++)
		rebotes[i] = 0;
		
	

}
void Bola::mover(float anchura,float altura){
anchura=anchura-50;
altura=altura-50;
	if(posX>=anchura){
		rebotes[DERECHA]++;
		velX = -fabs(velX);
	}
	
	if(posX<=0) {
		rebotes[IZQUIERDA]++;
		velX = fabs(velX);
	}
	posX=posX+velX;
		
		
	if(posY<=0){
		velY = fabs(velY);
		rebotes[ARRIBA]++;
	}
	if(posY>=altura){
		velY = -fabs(velY);
		rebotes[ABAJO]++;
	}
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
	switch(resalte){
		case BolaPatron:
			pintor.setBrush(Qt::CrossPattern);
		case BolaCirculo:
			pintor.drawEllipse(posX,posY,diametro,diametro);
			break;
		case BolaImagen:
			pintor.drawImage(posX,posY,imagen);
			break;
	}
	
	/*for(int l = ARRIBA; l<=IZQUIERDA; l = l+1){
		int pX = posX + diametro/2;
		int pY = posY + diametro/2;
		if(l == ARRIBA) pY = posY -10;
		if(l == DERECHA) pX = posX + diametro +10;
		if(l == ABAJO) pY = posY+ diametro +10;
		if(l == IZQUIERDA) pX = posX -10;
		pintor.drawText(pX,pY,QString::number(rebotes.at(l)));
		
	}*/




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
		//otra->rebotes[ARRIBA]++;
		//rebotes[ABAJO]++;
		arriba=this;
		abajo=otra;
	}else{
		//otra->rebotes[ABAJO]++;
		//rebotes[ARRIBA]++;
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
		//otra->rebotes[IZQUIERDA]++;
		//rebotes[DERECHA]++;
		izquierda=this;
		derecha=otra;
	}else{
		//otra->rebotes[DERECHA]++;
		//rebotes[IZQUIERDA]++;
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
void Bola::parar(){
	velX=0;
	velY=0;


}
