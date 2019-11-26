/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 3
I_TruncaDecimales: se quiere construir un programa que lea un número real r
y un número entero n y trunque r a tantas cifras decimales como indique n. 
El resultado debe guardarse en una variable diferente. La única función que 
puede usar de cmath es pow.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	double r, final, aproximacion;
	int n, truncador;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "\nIntroduzca un numero real: ";
	cin >> r;
	cout << "\nIntroduzca el numero del truncamiento: ";
	cin >> n;
	
	/* CÁLCULOS ***************************************************************/
	aproximacion = pow(10,n);
	truncador = r * aproximacion;
	final = truncador / aproximacion;
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << "El numero truncado es " << final;
	
	return 0;
}
