/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 4
II_CifradoRotacion_con_condicionales: modifique la solución del ejercicio 28 
y cambie la implementación para realizar la codificación del carácter 
utilizando un condicional simple en vez de una expresión tan compleja como la 
que se utilizó en dicho ejercicio

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	const char A = 'A';
	const char Z = 'Z';
	int clave;
	char letra, codif;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca la clave y la letra: " << endl;
	cin >> clave >> letra;
	
	/* CÁLCULOS ***************************************************************/	
	if(clave+letra > Z){
		clave = clave+letra - Z - 1;
		
		codif = A + clave;
	} else{
		codif = clave+letra;
	}
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << "La letra codificada es: " << codif;
	
	return 0;
}
