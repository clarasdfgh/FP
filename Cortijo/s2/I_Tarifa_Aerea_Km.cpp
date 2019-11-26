/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 2 OPCIONAL
I_Tarifa_Aerea_Km:  Una compa��a a�rea establece el precio del billete como 
sigue: en primer lugar se fija una tarifa base de 150 euros, la misma para 
todos los destinos. A continuaci�n se suman 10 c�ntimos por cada kil�metro de 
distancia al destino. Cree un programa que lea el n�mero de kil�metros al 
destino y calcule el precio final del billete.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
	const int BASE = 150;
	const double KM = 0.1;
	double precio;
	double distancia;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca la distancia: ";
	cin >> distancia;
	
	/* C�LCULOS ***************************************************************/
	precio = (distancia * KM) + BASE;
	
	/* SALIDA DE DATOS ********************************************************/
	cout << "\nEl precio final es de " << precio << " euros.";
	
	return 0;
}


	
		
	
	
	
