/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 5 OPCIONAL
II_Poblacion_China: contamos con los siguientes datos estimados sobre la 
población de China:
	•nace una persona cada 1.87 segundos
	•muere una persona cada 3.27 segundos
	•emigra una personada cada 71.9 segundos

Escribid un programa que pida un valor de población y calcule cuántos años 
(enteros) transcurrirán hasta que la población estimada sea mayor o igual al 
valor dado.

Nota:La población en actual (Octubre de 2019) es de 1.406.862.401 personas,
filtrar el valor de población introducido para que sea mayor que el de la 
población actual

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	const int POBLACION_ACTUAL = 1406862401;
	const int SEG_TO_ANIO = 31536000;
	const double NACIMIENTOS_ANIO = 1/1.87 * SEG_TO_ANIO;
	const double MUERTES_ANIO = 1/3.27 * SEG_TO_ANIO;
	const double EMIGRANTES_ANIO = 1/71.9 * SEG_TO_ANIO; 
	int poblacion_ini, poblacion_acu;
	int anios = 0; 
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca un numero de poblacion futura." << endl;
	do{
		cout << "Tenga en cuenta que la poblacion actual es de " 
		<< POBLACION_ACTUAL << " habitantes." << endl;
		cin >> poblacion_ini;
	} while (poblacion_ini < POBLACION_ACTUAL);

	
	poblacion_acu = POBLACION_ACTUAL;
	
	/* CÁLCULOS ***************************************************************/
	while(poblacion_acu <= poblacion_ini){
		poblacion_acu += NACIMIENTOS_ANIO - MUERTES_ANIO - EMIGRANTES_ANIO;
		anios++;
	}
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << "Tomara " << anios << " anios para alcanzar los " << poblacion_ini 
	<< " habitantes en China.";

}
