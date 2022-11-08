#include <iostream>
using namespace std;

class Cuenta{
	
	
	public:
	float saldo;
	string numCuenta;
	string titular;
	Cuenta(string numc, string tit);
	Cuenta();
	void ingresar(float cantidad);
	bool retirar(float cantidad);
	float dameSaldo();
	void operator << (Cuenta & pagadora);


};
