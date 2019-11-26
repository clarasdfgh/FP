//SESIÓN 2
//14-Intercambiar variables

#include <iostream>
using namespace std;

int main(){
	int caja_izda, caja_dcha;
	int intercambio;
	
	cout << "Introduzca los valores: " << endl;
	cin >> caja_izda >> caja_dcha;
	
	cout << "\nIZQUIERDA: " << caja_izda << "\tDERECHA: " << caja_dcha;
	
	intercambio = caja_izda;
	caja_izda = caja_dcha;
	caja_dcha = intercambio;

	cout << "\n\n---------- INTERCAMBIO ----------";
 	cout << "\nIZQUIERDA: " << caja_izda << "\tDERECHA: " << caja_dcha;
}
