/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 4 OPCIONAL
II_Harversine_con_minimo: modifique la solución del ejercicio 38 de la
Relación de Problemas I de manera que el mínimo que se calculaba con la función
min de la biblioteca algorithm se calcule con un condicional

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	const double RADIO_TIERRA = 6372797.560856;
	const double PI = 6 * asin(0.5);
	const double GRAD_TO_RAD = PI/180;
	double grados_lat1, grados_lon1;
	double grados_lat2, grados_lon2;
	double lat1, lon1, lat2, lon2, alt1, alt2;
	double a, c;
	double min;
	double dif_alt;
	double distancia_plano, distancia_real;
	
	cout.precision(15);
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca la coordenada 1: " << endl;
	cin >> grados_lat1 >> grados_lon1 >> alt1;
	cout << "\nIntroduzca la coordenada 2: " << endl;
	cin >> grados_lat2 >> grados_lon2 >> alt2;
	
	/* CÁLCULOS ***************************************************************/
	lat1 = grados_lat1*GRAD_TO_RAD;
	lat2 = grados_lat2*GRAD_TO_RAD;	
	lon1 = grados_lon1*GRAD_TO_RAD;
	lon2 = grados_lon2*GRAD_TO_RAD;
	
	a = pow(sin(0.5*(lat2-lat1)),2) + cos(lat1)*cos(lat2) * 
	pow(sin(0.5*(lon2-lon1)),2);
	
	if(1.0 < sqrt(a)){
		min = 1.0;
	} else{
		min = sqrt(a);
	}
	
	c = 2 * asin(min);
	
	distancia_plano = RADIO_TIERRA * c;
	
	dif_alt = alt2 - alt1;
	distancia_real = sqrt(pow(dif_alt,2) + pow(distancia_plano,2));
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << "La distancia sobre el plano es de " << distancia_plano << " m";
	cout << endl;
	cout << "La distancia real es de " << distancia_real << " m";
	
	return 0;
}
