//SESIÓN 1 OPCIONAL
//11-DECIMAL REDONDEADO

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double a_redondear, redondeado;
	int posicion;
	int eleva;
	
	cout << "Introduzca el numero a redondear y el numero de decimales: " << endl;
	cin >> a_redondear >> posicion;
	
	eleva = pow(10, posicion);
	redondeado = (round(a_redondear*eleva))/eleva;
	
	cout << "\n\nEl numero redondeado a " << posicion << " decimales es " << redondeado; 
}
