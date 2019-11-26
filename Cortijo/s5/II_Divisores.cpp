/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 5
II_Divisores: realizar un programa que lea desde teclado un entero positivo e 
imprima en pantalla todos susdivisores propios. Para obtener los divisores, 
basta recorrer todos los enteros menores que el valor introducido y comprobar 
si lo dividen.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	int entero;
	int divisores[entero];
	int j = 0;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca un numero entero: ";
	cin >> entero;
	
	/* CÁLCULOS ***************************************************************/
	for(int i = entero; i > 0; i--){
		if(entero % i == 0){
			divisores[j] = i;
			j++;
		}
	}
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << "La lista de divisores de " << entero << " es: " << endl;
	for (int k = 0; k < j; k++){
		cout << divisores[k] << " - ";
	}

	return 0;
}
