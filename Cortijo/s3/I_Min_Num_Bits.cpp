/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 3
I_Min_Num_Bits: los compiladores utilizan siempre el mismo n�mero de bits para 
representar un tipo de dato entero (este n�mero puede variar de un compilador 
a otro). Por ejemplo, 32 bits para un int. Pero, realmente, no se necesitan 
32 bits para representar el 6, por ejemplo, ya que bastar�an 3 bits:

   6 = 1*2^2 + 1*2^1 + 0*2^0 = 110

Se pide crear un programa que lea un entero n, y calcule el m�nimo n�mero de 
d�gitos que se necesitan para su representaci�n. Para simplificar los c�mputos, 
suponed que s�lo queremos representar valores enteros positivos (incluido 0). 

Consejo: se necesitar� usar el logaritmo en base 2 y obtener la parte entera 
de un real (se obtiene tras el truncamiento que se produce al asignar un 
real a un entero)

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
	int n;
	double num_bits;
	int num_bits_real;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca un numero: ";
	cin >> n;
	
	/* C�LCULOS ***************************************************************/
	num_bits = log2(n);
	num_bits_real = ceil(num_bits);
	
	/* SALIDA DE DATOS ********************************************************/
	cout << "Se necesitan " << num_bits_real << " bits para representarlo.";
	
	return 0;
}
