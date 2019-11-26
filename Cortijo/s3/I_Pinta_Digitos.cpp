/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 3
I_Pinta_Digitos: escribir un programa que lea un valor entero en un dato de tipo
string y a continuaci�n convertirlo y asignarlo a un dato int. Supondremos que 
el usuario introduce siempre un entero de tres d�gitos, como por ejemplo 351.
Escribid en pantalla los d�gitos separados por dos espacios en blanco. Con el valor
anterior la salida ser�a: 3  5  1
   
Lo que se muestra en pantalla es el contenido de otro dato
string que se va formando concatenando tres parejas de valores compuestas de 
dos espacios en blanco y un d�gito.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
	string n_string, n_string_final;
	int n;
	int n_cent, n_dec, n_ud;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca un numero entero de tres cifras: ";
	cin >> n_string;
	
	/* C�LCULOS ***************************************************************/
	n = stoi(n_string);
	
	n_cent = n / 100;
	n_dec = (n % 100) / 10;
	n_ud = (n % 100) % 10;
	
	n_string_final = "  " + to_string(n_cent) + "  " + to_string(n_dec)
	+ "  " + to_string(n_ud);
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << n_string_final;
	
	return 0;
}
