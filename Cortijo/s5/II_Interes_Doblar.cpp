/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 5
II_Interes_Doblar: modifiquemos nuevamente el ejercicio 10 de la Relaci�n de 
Problemas I. Ahora se trata de construir un programa para calcular cuantos a�os 
han de pasar hasta llegar a doblar, como m�nimo, el capital inicial.
Los valores del capital inicial y del inter�s deben cumplir las restricciones 
indicadas en el ejecicio 27.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
	const int MIN_INTERES =  0;
	const int MAX_INTERES = 10;
	
	// Entradas: 
	double interes, capital_inicial;
	int numero_anios;
	   
	// Salidas
	double capital_acumulado;
  
	// Auxiliares 
	int anio = 1;
	
	
	cout.setf(ios::fixed);		// Notaci�n de punto fijo para los reales
	cout.setf(ios::showpoint);	// Mostrar siempre decimales 


	/* ENTRADA DE DATOS *******************************************************/
	do {	
		cout << "Introduzca capital inicial: ";
		cin >> capital_inicial;
	} while (capital_inicial <= 0);
	

	string mensaje_interes =  "Introduzca % interes (" 
	      + to_string(MIN_INTERES) + "-" +  to_string(MAX_INTERES) + "): ";
	      
	do {	
		cout << mensaje_interes;
		cin >> interes;   
   	} while ((interes<= MIN_INTERES) || (interes>MAX_INTERES));

	cout << endl;

	/* C�LCULOS Y SALIDA DE DATOS *********************************************/	
	for(capital_acumulado = capital_inicial; 
		capital_acumulado <= capital_inicial*2; anio++){
			capital_acumulado += (capital_acumulado * (interes / 100.0));
	}

	cout << endl;
	cout << "Tomara un total de " << anio << " anios con un interes del " 
	<< interes << "% para duplicar el capital inicial";
	
   return 0;
}
