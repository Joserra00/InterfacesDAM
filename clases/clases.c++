#include <iostream>

using namespace std;


class Cuenta{
	


public:
	float saldo;
	string numCuenta;
	string titular;

	
	Cuenta(string numc, string tit){
		numCuenta = numc;
		titular = tit;
	
	
	
	}
	Cuenta(){
		numCuenta = "";
		titular = "";
		saldo = 0;
	
	
	
	}
	
	void ingresar(float cantidad){
		cout << "error??? tit " << titular << " saldo: " << saldo << " numCuenta" << " cantidad a ingresar " << cantidad << endl;
		saldo+=cantidad;
	
	}
	
	
	
	bool retirar(float cantidad){
		if(cantidad>saldo){
			return false;
		}else {
			saldo-=cantidad;
			cout << "Nuevo saldo " << saldo << endl;
			return true;
		}
	
	}
	float dameSaldo(){
		return saldo;
	
	}


};
	string nombres[5] = {"juan","perico","andres","fulano","vengano"};
	string numCuentas[5] = {"100","101","102","103","104"}; 
	Cuenta * cuentas[5];
void ingresoCuenta( Cuenta *cI){
	float cantidad;
	cout << "por favor, introduce la cantidad a ingresar:";
	cin >> cantidad;
	cI->ingresar(cantidad);
	
	
	}

void mostrarCuenta(Cuenta c){
	cout << " Cuenta: " << c.numCuenta << " Saldo: " << c.saldo << " Titular: " << c.titular<< endl;

}

void retiradaCuenta (Cuenta &c){
	cout << "Introduzca la cantidad a retirar: ";
	int cantidad;
	cin >> cantidad;
	if(c.saldo>cantidad){
		c.saldo-=cantidad;
	}else cout << "No se ha podido retirar del saldo" << endl;


}

void inicializar(Cuenta *cuentasP[5]){
	for (int i = 0; i<3; i++){
		Cuenta * nueva;
		nueva = new Cuenta();
		cuentas[i] = nueva;
 		cuentasP[i]->saldo = 0;
		cuentasP[i]->titular = nombres[i];
		cuentasP[i]->numCuenta = numCuentas[i];
		}
}
void mostrarTodasCuentas(Cuenta *cuentasP[5]){

	for (int i = 0; i<5; i++){
		if(cuentasP[i]==NULL){
		}else
		cout << cuentasP[i]->numCuenta << "\t";
		
	}
	cout << endl;
	for (int i = 0; i<5; i++){
	if(cuentasP[i]==NULL){
		}else
		cout << cuentasP[i]->titular << "\t";
	
	}
	cout << endl;
	for (int i = 0; i<5; i++){
	if(cuentasP[i]==NULL){
		}else
		cout << cuentasP[i]->saldo << "\t";

	}
	cout << endl;


}






int main(int argc, char *argv[]){
for (int i = 0; i<5; i++){{
	cuentas[i]=NULL;
}
	inicializar(cuentas);
	mostrarTodasCuentas(cuentas);
	cout << "Voy a ingresar en una cuenta "<< endl;
	if(cuentas[3]!=NULL){
		cuentas[3]->ingresar(1000);
	}
	mostrarTodasCuentas(cuentas);
	//for (int i = 0; i < 5; i++){
		//cuentas[i].titular=nombres[i];
		//cuentas[i].numCuenta=numCuentas[i];
	
	//}
	///for (int j = 0; j < 5; j++){
		//mostrarCuenta(cuentas[j]);
	
	//}
	
	



	
}
