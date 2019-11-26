//SESIÓN 3 
//2-Se dividen

#include <iostream>
using namespace std;

int main(){
	int a, b;
	bool es_divisor = false;
	
	cout << "Introduzca a, b: " << endl;
	cin >> a >> b;
	
	if((a % b == 0) || (b % a == 0)){
		es_divisor = true;
	}
	
	if(es_divisor){
		cout << "\nUno es divisor del otro.";
	} else{
		cout << "\nNo son divisores.";
	}
}
