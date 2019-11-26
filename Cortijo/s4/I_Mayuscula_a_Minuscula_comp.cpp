/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 3
I_Mayuscula_a_Minuscula: diseñar un programa que lea un carácter (supondremos 
que el usuario introduce una mayúscula), lo pase a minúscula y lo imprima en 
pantalla. Hacedlo sin usar las funciones toupper ni tolower de la biblioteca
cctype. Para ello, debe considerarse la equivalencia en C++ entre los tipos 
enteros y caracteres

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	const char A = 'A';
	const char Z = 'Z';
	const char a = 'a'; 
	char mayus, minus;
	
	/* ENTRADA DE DATOS *******************************************************/
	do{
		cout << "Introduzca una mayuscula: ";
		cin >> mayus;
	} while(mayus > Z || mayus < A);
	
	/* CÁLCULOS ***************************************************************/
	minus = mayus + (a - A);
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << mayus << " -> " << minus;

	return 0;
}
