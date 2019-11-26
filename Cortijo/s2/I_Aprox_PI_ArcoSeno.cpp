/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 2
I_Aprox_PI_ArcoSeno: El n�meropes un n�mero irracional y por tanto tiene 
infinitas cifras decimales. Hay diversos m�todos para obtener este valor, 
algunos mejores que otros. 
Una forma simple de obtenerlo es a trav�s de la funci�n arco-seno, ya que
PI/6 es el �ngulo (en radianes) cuyo seno vale de 0.5. 
Matem�ticamente se expresa como

	PI/6 = arco-seno(0,5)
	
Construir  un  programa  que  imprima  el  valor  de PI calculado  a  
partir  de  la  anterior f�rmula. 
El c�lculo del arco-seno se realiza en C++ con la funci�n asin de 
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
