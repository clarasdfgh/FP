/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 3
I_Harversine: el sistema de posicionamiento global, más conocido por sus siglas 
en inglés, GPS, es un sistema que permite determinar en toda la Tierra la 
posición de un objeto. 

Un dispositivo GPS es capaz de captar y registrar la posición en el espacio en 
base atres coordenadas: latitud y longitud (grados) y altura (metros). Los 
valores de latitud y longitud deben verificar:

	-90 <=lat <= 90  y -180 < lon <= 180
	
Construir un programa que lea la latitud y longitud (posición en el plano) de 
dos puntos y calcule la distancia sobre plano entre los dos puntos 
(distancia que no considera la altura de los puntos). Use la llamada fórmula 
del Haversine:

	a)Calcular a:
		a = sin^2(1/2*(lat2-lat1)) + cos(lat1)* cos(lat2)*sin^2(1/2*(lon2-lon1))
	
	b)Calcular c:
		c = 2*arcsin(min(1,sqrt(a)))
	
	c)La distancia será:
		 dp = R * c, donde R= 6372797'560856m, la longitud del radio terrestre.
		 
Tenga en cuenta lo siguiente:
	
	a)Los datos de latitud y longitud en las fórmulas vienen expresados 
	en radianes. Recuerde que los valores de latitud y longitud que se leen 
	están expresados en grados, por lo que habrá de transformarlos a radianes.
	
	b)La función arco-seno (arcsin) viene ya implementada en la biblioteca
	cmath con el nombreasin 
	
	c)min representa el mínimo de dos valores. Para implementarlo utilice la 
	función min que viene definida en la biblioteca algorithm. 
	
Una vez calculada la distancia sobre plano, calcular la distancia real entre 
los dos puntos (que considera sus alturas). Observe que puede formar un 
triángulo rectángulo a partir de los segmentos dp, dr y la diferencia de 
las alturas.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <algorithm>
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
	c = 2 * asin(min(1.0,sqrt(a)));
	
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
