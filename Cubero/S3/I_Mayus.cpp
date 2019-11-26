//SESIÓN 3
//27-Pasar de mayúscula a minúscula

#include <iostream>
using namespace std;

int main(){
	const char A = 'A';
	const char a = 'a';
	const int diferencia = a - A;
	char mayus, minus;	
	
	cout << "Introduzca una mayuscula: ";
	cin >> mayus;
	
	minus = mayus + diferencia;
	
	cout << "\n\nLa minuscula es: " << minus;
}
