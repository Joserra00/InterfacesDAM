#include <iostream>

using namespace std;

void incrementar (int *numero){
	*numero +=1 ;
}

int *maximo(int *num1, int *num2){

	if ( *num1 > *num2 )
		return num1;
	return num2;

}


int &minimo (int &i , int &j){
	if (i < j){
	
	return i;
	}
	return j;


}
int main(int argc, char *argv[]){
	int i = 9;
	int j = 10;
	int *max;
	max=maximo(&i ,&j );
	*max+=1;
	cout  <<"i: " << i << endl;
	cout  <<"j: " << j << endl;
	int x;
	minimo(i,j)--;
	x=minimo(i,j);
	cout << x << endl;
	
	
	//cout << "i vale " <<i << endl;
	//incrementar(&i);
	//cout << "i vale " <<i << endl;
	/*i = 6;
	int *pi;
	pi = &i;
	cout << " i vale " << i << endl;
	cout << " i esta en la posicion " << &i << endl;
	cout << " i esta en la posicion " << pi << endl;
	cout << " i esta en la posicion " << *pi << endl;
	cout << " pi esta en la posicion " << &pi << endl;
*/
}
