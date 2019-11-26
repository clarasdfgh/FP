/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 4
II_CifradoRotacion_con_condicionales: modifique la soluci�n del ejercicio 28 
y cambie la implementaci�n para realizar la codificaci�n del car�cter 
utilizando un condicional simple en vez de una expresi�n tan compleja como la 
que se utiliz� en dicho ejercicio

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
	const char A = 'A';
	const char Z = 'Z';
	int clave;
	char letra, codif;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca la clave y la letra: " << endl;
	cin >> clave >> letra;
	
	/* C�LCULOS ***************************************************************/	
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
