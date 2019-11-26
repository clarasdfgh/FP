/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 4
II_Tarifa_Aerea_Km: retomando el ejercicio 7, la forma de calcular la tarifa 
final del billete es la siguiente: la tarifa base sigue siendo de 150 euros, 
la misma para todos los destinos. Ahora bien, si el destino está a menos de 300
kilómetros, el precio final es la tarifa base. Para destinos a más de 300 Km, se
suman 10 céntimos por cada kilómetro de distancia al destino 
(a partir del Km 300).

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
	if(distancia <= 300){
		precio = BASE;
		
	} else{
		precio = BASE + ((distancia-300)*KM);
	}
	
	/* SALIDA DE DATOS ********************************************************/
	cout << "\nEl precio final es de " << precio << " euros.";
	
	return 0;
}
