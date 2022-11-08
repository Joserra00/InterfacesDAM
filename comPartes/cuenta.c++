#include <iostream>
using namespace std;
#include "cuenta.h"

	
	
	

	
	Cuenta::Cuenta(string numc, string tit){
		numCuenta = numc;
		titular = tit;
	
	
	
	}
	Cuenta::Cuenta(){
		numCuenta = "";
		titular = "";
		saldo = 0;
	
	
	
	}
	
	void Cuenta::ingresar(float cantidad){
		cout << "Titular " << titular << " saldo: " << saldo << " numCuenta" << " cantidad a ingresar " << cantidad << endl;
		saldo+=cantidad;
	
	}
	
	
	
	bool Cuenta::retirar(float cantidad){
		if(cantidad>saldo){
			return false;
		}else {
			saldo-=cantidad;
			cout << "Nuevo saldo " << saldo << endl;
			return true;
		}
	
	}
	float Cuenta::dameSaldo(){
		return saldo;
	
	}
	void Cuenta::operator << (Cuenta & pagadora){
		ingresar(pagadora.saldo);
		pagadora.retirar(pagadora.saldo);

	
	}



