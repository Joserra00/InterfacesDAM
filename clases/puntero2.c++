
#include <iostream>

using namespace std;

void decrementar(int &numero){

numero = numero - 1 ;
}


int main(int argc, char *argv[]){
	int original = 9;
	
	int &ref = original;

	cout << "original vale " << original << endl;
	original+=1;
	cout << "original vale " << original << endl;
	cout << "ref vale " << ref << endl;
	ref+=1;
	cout << "original vale " << original << endl;
	cout << "ref vale " << ref << endl;
	
	int j = 7;
	
	decrementar(j);
	cout "j: "<< j << endl;
	
	
}
