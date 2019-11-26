/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 2
I_ConversionUnidadesDistancia: Realizar un programa que nos pida una longitud 
cualquiera dada en metros. El programa deberá calcular el equivalente de dicha 
longitud en pulgadas, pies, yardas y millas, y mostrarnos los resultados 
en pantalla. 

Para el cálculo, utilice la siguiente tabla de conversión del sistema métrico:

	1 pulgada = 25.4 mm
	1 pie = 30.48 cm
	1 yarda = 0.9144 m
	1 milla = 1609.344 m

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	const double IN_TO_MM = 25.4;
	const double FT_TO_CM = 30.48;
	const double YD_TO_M = 0.9144;
	const double MI_TO_M = 1609.344;
	const double MM_TO_M = 1000;
	const double CM_TO_M = 100;
	double metro;
	double pulgada;
	double pie;
	double yarda;
	double milla;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca una distancia en metros: ";
	cin >> metro;
	
	/* CÁLCULOS ***************************************************************/
	pulgada = metro / IN_TO_MM * MM_TO_M;
	pie = metro / FT_TO_CM * CM_TO_M;
	yarda = metro / YD_TO_M;
	milla = metro / MI_TO_M;
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << metro << " metros son: " << endl;
	cout << pulgada << " pulgadas" << endl;
	cout << pie << " pies" << endl;
	cout << yarda << " yardas" << endl;
	cout << milla << " millas";
	
	return 0;
}
