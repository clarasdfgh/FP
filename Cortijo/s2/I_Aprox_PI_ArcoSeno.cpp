/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 2
I_Aprox_PI_ArcoSeno: El númeropes un número irracional y por tanto tiene 
infinitas cifras decimales. Hay diversos métodos para obtener este valor, 
algunos mejores que otros. 
Una forma simple de obtenerlo es a través de la función arco-seno, ya que
PI/6 es el ángulo (en radianes) cuyo seno vale de 0.5. 
Matemáticamente se expresa como

	PI/6 = arco-seno(0,5)
	
Construir  un  programa  que  imprima  el  valor  de PI calculado  a  
partir  de  la  anterior fórmula. 
El cálculo del arco-seno se realiza en C++ con la función asin de 
la biblioteca cmath.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double pi;
	
	pi = 6 * asin(0.5);
	
	cout << pi;
	
	return 0;
}
