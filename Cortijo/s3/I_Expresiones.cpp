/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 3 OPCIONAL
I_Expresiones: declarar las variables necesarias y traducir las siguientes 
f�rmulas a expresiones v�lidas del lenguaje C++

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
	double a, b, c;
	double x, y, h;

	/* C�LCULOS ***************************************************************/
	
	a = (1 + (pow(x,2) / y)) / (pow(x,3) / (1 + y));
	
	b = (1 + ((1.0/3.0) * sin(h)) - ((1.0/7.0) * cos(h))) / (2 * h);
	
	c = sqrt(1 + pow(((exp(x)) / pow(x,2)), 2));
}
