/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 2 OPCIONAL
I_TarifaAerea_descuento_ctes: La compa��a a�rea del ejercicio 7 quiere aplicar 
una pol�tica de descuentos al precio del billete. Ampl�e el programa anterior 
para despu�s de imprimir el precio del billete pida un porcentaje de descuento 
(dato double) y muestre el precio final despu�s de aplicar el descuento indicado

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
	const int BASE = 150;
	const double KM = 0.1;
	double precio, precio_descuento;
	double distancia;
	double descuento;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca la distancia: ";
	cin >> distancia;
	cout << "Introduzca el descuento: " ;
	cin >> descuento;
	
	/* C�LCULOS ***************************************************************/
	precio = (distancia * KM) + BASE;
	precio_descuento = precio - precio*descuento;
	
	/* SALIDA DE DATOS ********************************************************/
	cout << "\nEl precio final es de " << precio_descuento << " euros.";
	cout << "\nEl precio sin descuento es de " << precio << " euros.";	
	
	return 0;
}
