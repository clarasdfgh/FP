/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 3
I_TruncaDecimales: se quiere construir un programa que lea un n�mero real r
y un n�mero entero n y trunque r a tantas cifras decimales como indique n. 
El resultado debe guardarse en una variable diferente. La �nica funci�n que 
puede usar de cmath es pow.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
	double r, final, aproximacion;
	int n, truncador;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "\nIntroduzca un numero real: ";
	cin >> r;
	cout << "\nIntroduzca el numero del truncamiento: ";
	cin >> n;
	
	/* C�LCULOS ***************************************************************/
	aproximacion = pow(10,n);
	truncador = r * aproximacion;
	final = truncador / aproximacion;
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << "El numero truncado es " << final;
	
	return 0;
}
