/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 2 OPCIONAL
I_Tarifa_Aerea_Km:  Una compañía aérea establece el precio del billete como 
sigue: en primer lugar se fija una tarifa base de 150 euros, la misma para 
todos los destinos. A continuación se suman 10 céntimos por cada kilómetro de 
distancia al destino. Cree un programa que lea el número de kilómetros al 
destino y calcule el precio final del billete.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	const int BASE = 150;
	const double KM = 0.1;
	double precio;
	double distancia;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca la distancia: ";
	cin >> distancia;
	
	/* CÁLCULOS ***************************************************************/
	precio = (distancia * KM) + BASE;
	
	/* SALIDA DE DATOS ********************************************************/
	cout << "\nEl precio final es de " << precio << " euros.";
	
	return 0;
}


	
		
	
	
	
