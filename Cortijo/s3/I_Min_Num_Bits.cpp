/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 3
I_Min_Num_Bits: los compiladores utilizan siempre el mismo número de bits para 
representar un tipo de dato entero (este número puede variar de un compilador 
a otro). Por ejemplo, 32 bits para un int. Pero, realmente, no se necesitan 
32 bits para representar el 6, por ejemplo, ya que bastarían 3 bits:

   6 = 1*2^2 + 1*2^1 + 0*2^0 = 110

Se pide crear un programa que lea un entero n, y calcule el mínimo número de 
dígitos que se necesitan para su representación. Para simplificar los cómputos, 
suponed que sólo queremos representar valores enteros positivos (incluido 0). 

Consejo: se necesitará usar el logaritmo en base 2 y obtener la parte entera 
de un real (se obtiene tras el truncamiento que se produce al asignar un 
real a un entero)

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	int n;
	double num_bits;
	int num_bits_real;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca un numero: ";
	cin >> n;
	
	/* CÁLCULOS ***************************************************************/
	num_bits = log2(n);
	num_bits_real = ceil(num_bits);
	
	/* SALIDA DE DATOS ********************************************************/
	cout << "Se necesitan " << num_bits_real << " bits para representarlo.";
	
	return 0;
}
