#include <iostream>

using namespace std;
#include <stdlib.h>

int notas[50];


float calculaMedia(int notasPasadas[50]){
	int media=0;
	for (int i = 0; i<10; i++){
		media+=notasPasadas[i];
	}
	float resultado = (float)media/10;
	return resultado;
	

}
bool existeRepetido(int notas[50]){
for(int i = 0; i<49; i++){
		if(notas[i]==notas[i+1]){
		return true;
		}
	
	}
	return false;

}
int numeroRepetido(int notas[50]){
for(int i = 0; i<49; i++){
		if(notas[i]==notas[i+1]){
		return notas[i];
		}
	
	}
	return 0;
	
	
}


int main(int argc, char *argv[]){
	
	for(int i = 0; i<50; i++){
		notas[i]=random()%11;
		
	
	}
	float media = calculaMedia(notas);
	cout <<  "La media es " << media << endl;
	bool rep=existeRepetido(notas);
	int num = numeroRepetido(notas);
	if(rep){
	cout <<"Ha habido un numero repetido y el numero es: " <<num<< endl;
	}
	
	
	
}
