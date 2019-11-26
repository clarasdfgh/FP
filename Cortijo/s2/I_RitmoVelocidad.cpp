/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 2
I_RitmoVelocidad:  en atletismo se expresa la rapidez de un atleta en 4
términos de ritmo (minutos y segundos por kilómetro) más que en unidades de 
velocidad (kilómetros por hora). Escribid dos programas para convertir entre 
estas dos medidas:

	a)  El primero leerá el ritmo (minutos y segundos, por separado) y 
	mostrará la velocidad (kilómetros por hora).
	b)  El segundo leerá la velocidad (kilómetros por hora) y mostrará el 
	ritmo (minutos y segundos).

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

//PROGRAMA A
int main(){
	// DECLARACIÓN DE VARIABLES ***********************************************
	const int S_TO_M = 60;
	const int M_TO_H = 60;
	const int S_TO_H = 3600;
	double minutos, segundos;
	double minutos_totales;
	double velocidad;
	
	// ENTRADA DE DATOS *******************************************************
	cout << "Introduzca los minutos: ";
	cin >> minutos;
	cout << "Introduzca los segundos: ";
	cin >> segundos;
	
	// CÁLCULOS ***************************************************************
	minutos_totales = minutos + (segundos / S_TO_M);
	velocidad = M_TO_H / minutos_totales; 
	
	
	// SALIDA DE DATOS ********************************************************
	cout << endl;
	cout << "La velocidad es " << velocidad << " km/h.";
	
	return 0;
}


/*//PROGRAMA B
int main(){
	//DECLARACIÓN DE VARIABLES ***********************************************
	const int S_TO_M = 60;
	const int S_TO_H = 3600;
	double velocidad;
	double ritmo;
	
	//ENTRADA DE DATOS *******************************************************
	cout << "Introduzca la velocidad ";
	cin >> velocidad;
	
	// CÁLCULOS ***************************************************************
	ritmo = (S_TO_H/velocidad) / S_TO_M;
	
	// SALIDA DE DATOS ********************************************************
	cout << endl;
	cout << "El ritmo es " << ritmo << " min/km.";
	
	return 0;
}*/


