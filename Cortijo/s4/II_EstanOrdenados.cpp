/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 4
II_EstanOrdenados: escribir un programa que lea tres enteros desde teclado y nos 
diga si  est�n ordenados(da igual si es de forma ascendente o descendente) o 
no lo est�n
Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
	int a, b, c;
	bool es_b_medio;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca tres numeros enteros: " << endl;
	cin >> a >> b >> c;
	
	/* C�LCULOS ***************************************************************/
	if((b < a && b > c) || (b < c && b > a)){
		es_b_medio = true;
	}
	
	/* SALIDA DE DATOS ********************************************************/
	if (es_b_medio){
		cout << "Estan ordenados.";
	} else{
		cout << "No estan ordenados.";
	}
}
