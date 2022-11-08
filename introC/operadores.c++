#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

class Complejo {
public:
    float real;
    float imaginaria;
    
    Complejo(float r, float i){
    	real = r;
    	imaginaria=i;
    
    }
    Complejo(){
    	real = 0;
    	imaginaria=0;
    }
    
Complejo operator+( Complejo s2){
	return Complejo(real+s2.real, imaginaria + s2.imaginaria);

}
Complejo operator+(float r){
	return Complejo(real+r, imaginaria);

}

float modulo(){
	return sqrtf(pow(imaginaria,2)+pow(real,2));
	


}
bool operator>(Complejo s1){

	if (modulo()>s1.modulo()){
		return true;
	}
	return false;
}
bool operator<(Complejo s1){

	if (modulo()<s1.modulo()){
		return true;
	}
	return false;
}

};


/*Complejo operator+(Complejo s1, float numero){
	return Complejo(s1.real+numero, s1.imaginaria);

}*/
Complejo operator+(float numero, Complejo s2){
	return Complejo(s2.real+numero, s2.imaginaria);
}

void mostrar(Complejo c){
    cout << "( " << c.real << " + " << c.imaginaria << "i )" << endl;
}

/*Complejo operator+(Complejo s1, Complejo s2){
	return Complejo((s1.real+s2.real), (s1.imaginaria + s2.imaginaria));

}*/



/*Complejo sumar(Complejo s1, Complejo s2 ){
	
		return Complejo(s1.real+s2.real, s1.imaginaria + s2.imaginaria);
		Complejo suma2;
		suma2.real=s1.real+s2.real;
		suma2.imaginaria=s1.imaginaria+s2.imaginaria;
		
		return suma2;


}*/

int main (int argc, char *argv[] ) {
    Complejo c;
    c.real = 9;
    c.imaginaria = 2;

    mostrar(c);
    cout << endl;
    Complejo d (8,-6);
   	mostrar(d);
    cout << endl;
        
    Complejo suma;
    //suma = sumar(c,d);
    suma = c + d;
    suma = 2 + c;
    suma = c + 2;
    mostrar(suma);
    cout << endl;
    cout << c.modulo()<< endl;
    cout << d.modulo()<< endl;
    
    if (c>d) cout << "c es mayor que d " << endl;
    if (d>c) cout << "d es mayor que c  " << endl;

    
  
	
}

