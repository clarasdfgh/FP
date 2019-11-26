/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 2 OPCIONAL
I_TarifaAerea_descuento_ctes: La compañía aérea del ejercicio 7 quiere aplicar 
una política de descuentos al precio del billete. Amplíe el programa anterior 
para después de imprimir el precio del billete pida un porcentaje de descuento 
(dato double) y muestre el precio final después de aplicar el descuento indicado

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
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
	
	/* CÁLCULOS ***************************************************************/
	precio = (distancia * KM) + BASE;
	precio_descuento = precio - precio*descuento;
	
	/* SALIDA DE DATOS ********************************************************/
	cout << "\nEl precio final es de " << precio_descuento << " euros.";
	cout << "\nEl precio sin descuento es de " << precio << " euros.";	
	
	return 0;
}
