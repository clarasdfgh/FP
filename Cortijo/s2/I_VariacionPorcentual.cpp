/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 2 OPCIONAL
I_VariacionPorcentual: se define el concepto variaci�n porcentual como:

	VP = abs(100 � (valor_final - valor_inicial / valor_inicial))
	
donde abs calcula el valor absoluto (cmath). Escriba un programa en C++ que 
lea el valor inicial y final de un producto (variables de tipo double) y 
calcule la variaci�n porcentual del mismo.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
	double var_porcentual;
	double v_inicial, v_final;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca el valor inicial: ";
	cin >> v_inicial;
	cout << "\nIntroduzca el valor final: ";
	cin >> v_final;
	
	/* C�LCULOS ***************************************************************/	
	var_porcentual = abs(100 * ((v_final-v_inicial)/v_inicial));

	/* SALIDA DE DATOS ********************************************************/	
	cout << "\n\nLa variacion porcentual es del " << var_porcentual << "%";
	
	return 0;
}
	
	

	
	
	
	
