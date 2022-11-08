#include <iostream>
#include <stdlib.h>
using namespace std;

#define BORRARPANTALLA for (int i = 0; i<10; i++) cout << endl;

#define TAMVECTOR 5

	string nombres[5] = {"juan","perico","andres","fulano","vengano"};
	string numCuentas[5] = {"100","101","102","103","104"}; 

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
		cout << "Titular " << titular << " saldo: " << saldo << " numCuenta" << " cantidad a ingresar " << cantidad << endl;
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
	void operator << (Cuenta & pagadora){
		ingresar(pagadora.saldo);
		pagadora.retirar(pagadora.saldo);

	
	}


};


	
	Cuenta * cuentas[5];
void ingresoCuenta( Cuenta *cI){
	float cantidad;
	cout << "por favor, introduce la cantidad a ingresar:";
	cin >> cantidad;
	cI->ingresar(cantidad);
	
	
	}

bool retirarCuenta(Cuenta *cR){
	float cantidad;
	cout << "cantidad a retirar: "<< endl;
	cin >>cantidad;
	if (cR!=NULL){
		if(cR->retirar(cantidad))
			return true;
	}
	return false;

}

void mostrarCuenta(Cuenta c){
	cout << " Cuenta: " << c.numCuenta << " Saldo: " << c.saldo << " Titular: " << c.titular<< endl;

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

	for (int i = 0; i<TAMVECTOR; i++){
		if(cuentasP[i]==NULL){
		}else
		cout << cuentasP[i]->numCuenta << "\t";
		
	}
	cout << endl;
	for (int i = 0; i<TAMVECTOR; i++){
	if(cuentasP[i]==NULL){
		}else
		cout << cuentasP[i]->titular << "\t";
	
	}
	cout << endl;
	for (int i = 0; i<TAMVECTOR; i++){
	if(cuentasP[i]==NULL){
		}else
		cout << cuentasP[i]->saldo << "\t";

	}
	cout << endl;

}
void menu(){
 BORRARPANTALLA
   cout << "        1 - Elegir Cuenta " << endl;
   cout << "        2 - Ingresar " << endl;
   cout << "        3 - Retirar " << endl;
   cout << "        4 - Ver saldo " << endl;
   cout << "        b - Borrar Cuenta " << endl;
   cout << "        g - Agregar Cuentas " << endl;
   cout << "        5 - Salir a MSDOS " << endl;
   BORRARPANTALLA


}
Cuenta * seleccionar(Cuenta *cuentas[TAMVECTOR]){
	cout << "Selecciona una de las cuentas"<< endl;
	mostrarTodasCuentas(cuentas);
	string seleccion;
	cin >> seleccion;
	for(int i = 0; i<TAMVECTOR; i++){
		if(cuentas[i]!=NULL){
			if (seleccion==cuentas[i]->numCuenta){
			return cuentas[i];
		
			}
			}else return NULL;
	}
	return NULL;
}
void borrar(Cuenta *p,Cuenta *cuentasP[TAMVECTOR]){
	for (int i = 0; i<TAMVECTOR; i++){
		if (cuentasP[i]!=NULL){
			if(cuentasP[i]==p){
				cout << "Se ha eliminado la cuenta correctamente"<<endl;	
				delete cuentasP[i];
				cuentasP[i]=NULL;
				
			
			}
		}
	}
	
	
	

}
int main(int argc, char *argv[]){
	Cuenta c1,c2;
	c1.saldo = 100;
	c1.titular = "cobrador";
	c2.saldo = 100;
	c2.titular = "pagador";
	c1 << c2;
	mostrarCuenta(c1);
	mostrarCuenta(c2);
	return 1;
	char opcion='0';
	for (int i = 0; i<TAMVECTOR; i++)
		cuentas[i] = NULL;
	inicializar(cuentas);
	Cuenta * cuentaSeleccionada = NULL;
	
	while(opcion!='5'){
		menu();
		cin>>opcion;
		
		switch (opcion){
			case '1': cuentaSeleccionada=seleccionar(cuentas);
				break;
			case '2':
					ingresoCuenta(cuentaSeleccionada);
				break;
			case '3':
					retirarCuenta(cuentaSeleccionada);
				break;
			case '4':
				break;
			case 'b':
				borrar(cuentaSeleccionada,cuentas);
				break;
			case '5':exit(0);
	
		}
		mostrarTodasCuentas(cuentas);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
