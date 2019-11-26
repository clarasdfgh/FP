/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 2
I_IncrementoSalario: Construya  un  programa  para  leer  el  valor  de  una  
variable salario_base de tipo double, la incremente un 2 % e imprima el 
resultado en pantalla. Para realizar este c�lculo, multiplique por 1.02 
el valor original. Tiene varias alternativas:

	a)Calcular  1.02 * salario_base dentro de la sentencia cout
	b)Introducir una variable salario_final, asignarle la expresi�n anterior 
	y mostrar su contenido en la sentencia cout
	c)Modificar la variable original salario_base con el resultado de 
	incrementarla un 2 %.
	
Indique qu� alternativa elige y justif�quela
		La b. Siempre es preferible almacenar la informaci�n �til en una nueva
		variable antes que a)no guardarla en ning�n lado o c)perder la variable
		original

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACION DE VARIABLES ***********************************************/
	const double INCREMENTO = 1.02;
	double salario_base;
	double salario_final;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca el salario: ";
	cin >> salario_base;
	
	/* C�LCULOS ***************************************************************/
	salario_final = salario_base * INCREMENTO;
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << "Tras el incremento del 2%, el salario es de " << salario_final;
	cout << " euros";
	
	return 0;
}
