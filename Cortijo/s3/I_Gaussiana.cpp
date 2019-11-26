/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 3
I_Gaussiana: la función gaussiana es muy importante en Estadística. Es una 
función real de variable real en la que el parámetro nu se conoce como 
esperanza o media y sigma como desviación típica (mean y standard deviation).
Su definición viene dada por la expresión:

   gaussiana(x) = 1 / (sigma* sqrt(2pi)) * e ^ (-1/2 * (x-nu)/sigma)^2)

Realizar un programa que lea los coeficientes reales nu y sigma de una función 
gaussiana. A continuación el programa leerá un valor de abscisa x y se 
imprimirá el valor que toma la función en x. Para realizar las operaciones 
indicadas, debe utilizar las siguientes funciones de la biblioteca cmath:

   -Para elevar el número e a un valor cualquiera, use la función exp.

   -Para calcular la raíz cuadrada, use sqrt.

   -Para  elevar  un  número  a  otro,  utilice  la  función pow.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
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

	/* CÁLCULOS ***************************************************************/	
	y = exp(-(pow( (x - esperanza)/desviacion  ,  2.0)) / 2.0) / 
	(desviacion * sqrt(2.0*PI));
   
	/* SALIDA DE DATOS ********************************************************/	
	cout << "El valor de la funcion gaussiana en " << x << " es " << y;

	return 0;	
}

