//SESIÓN 1
//7-TARIFA AÉREA CON DESCUENTO

#include <iostream>
using namespace std;

int main(){
	const double DESC_2 = 0.02;
	const double DESC_4 = 0.04;
	double precio, precio_desc2, precio_desc4;
	
	cout << "Introduzca el precio inicial: ";
	cin >> precio;
	
	precio_desc2 = precio - (precio * DESC_2);
	precio_desc4 = precio - (precio * DESC_4);
	
	cout << "\n\tDescuento del 4% : " << precio_desc4;
	cout << "\n\tDescuento del 2% : " << precio_desc2;
}
