/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 3 OPCIONAL
I_PVP_Automovil: el precio final de un automóvil para un comprador es la 
suma total del costo del vehículo, del porcentaje de ganancia de dicho vendedor 
y del I.V.A. 

Diseñar un algoritmo para obtener el precio final de un automóvil sabiendo que 
el porcentaje de ganancia de este vendedor es del 20 % y el I.V.A. aplicable 
es del 16 %.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	const double GANANCIA = 0.2;
	const double IVA = 0.16; 
	double precio_ini, precio_fin;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca el precio inicial del vehiculo: ";
	cin >> precio_ini;
	
	/* CÁLCULOS ***************************************************************/
	precio_fin = (precio_ini * GANANCIA) + (precio_ini * IVA) + precio_ini;
	
	/* SALIDA DE DATOS ********************************************************/
	cout << "El precio final es de " << precio_fin << " euros."; 

	return 0;
}
