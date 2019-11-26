/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 3
I_Gaussiana: la funci�n gaussiana es muy importante en Estad�stica. Es una 
funci�n real de variable real en la que el par�metro nu se conoce como 
esperanza o media y sigma como desviaci�n t�pica (mean y standard deviation).
Su definici�n viene dada por la expresi�n:

   gaussiana(x) = 1 / (sigma* sqrt(2pi)) * e ^ (-1/2 * (x-nu)/sigma)^2)

Realizar un programa que lea los coeficientes reales nu y sigma de una funci�n 
gaussiana. A continuaci�n el programa leer� un valor de abscisa x y se 
imprimir� el valor que toma la funci�n en x. Para realizar las operaciones 
indicadas, debe utilizar las siguientes funciones de la biblioteca cmath:

   -Para elevar el n�mero e a un valor cualquiera, use la funci�n exp.

   -Para calcular la ra�z cuadrada, use sqrt.

   -Para  elevar  un  n�mero  a  otro,  utilice  la  funci�n pow.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
	const double PI = 6 * asin(0.5);
	double esperanza, desviacion;
	double x, y;

	/* ENTRADA DE DATOS *******************************************************/   
	cout << "Introduzca el valor de la esperanza: " << endl;
	cin >> esperanza;
	cout << "Introduzca el valor de la desviacion tipica: " << endl;
	cin >> desviacion;
	cout << "Introduzca el valor de la abscisa: " << endl;
	cin >> x;

	/* C�LCULOS ***************************************************************/	
	y = exp(-(pow( (x - esperanza)/desviacion  ,  2.0)) / 2.0) / 
	(desviacion * sqrt(2.0*PI));
   
	/* SALIDA DE DATOS ********************************************************/	
	cout << "El valor de la funcion gaussiana en " << x << " es " << y;

	return 0;	
}

