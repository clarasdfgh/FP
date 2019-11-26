/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 5
II_Bisiestos_Intervalo: Ampliad el ejercicio 7. El programa pedirá los valores 
de dos años y mostrará todos los años bisiestos comprendidos entre los dos 
valores dados

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	int anio1, anio2;
	int anio_aux;
	int bisiestos[anio2-anio1];
	int i = 0;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca el primer anio: ";
	cin >> anio1;
	cout << "Introduzca el segundo anio: ";
	cin >> anio2;
	
	/* CÁLCULOS ***************************************************************/	
	for(anio_aux = anio1; anio_aux < anio2; anio_aux++){
		if((((anio_aux % 4 == 0) && (anio_aux % 100 != 0))
		|| anio_aux % 400 == 0)){
			bisiestos[i] = anio_aux;
			i++;
		}	
	}
	
	/* SALIDA DE DATOS ********************************************************/
	cout << "Los anios bisiestos comprendidos entre " << anio1 << " y "
	<< anio2 << " son: " << endl ;
	
	for (int j=0; j < i; j++){
		cout << bisiestos[j] << " - ";
	}
	
	return 0;
}
