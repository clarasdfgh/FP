//SESIÓN 4
//5-Tarifa aérea

#include <iostream>
using namespace std;

int main(){
	const int BASE = 150;
	const double KM = 0.1;
	double precio;
	double distancia;
	
	cout << "Introduzca la distancia: ";
	cin >> distancia;
	
	if(distancia <= 300){
		precio = BASE;
		
	} else{
		precio = BASE + ((distancia-300)*KM);
	}
	
	cout << "\nEl precio final es de " << precio << " euros.";
}
