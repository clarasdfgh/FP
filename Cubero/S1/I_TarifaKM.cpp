//SESIÓN 1
//6-TARIFA AÉREA SEGÚN KM

#include <iostream>
using namespace std;

int main(){
	const int BASE = 150;
	const double KM = 0.1;
	double precio;
	double distancia;
	
	cout << "Introduzca la distancia: ";
	cin >> distancia;
	
	precio = (distancia * KM) + BASE;
	
	cout << "\nEl precio final es de " << precio << " euros.";
}
