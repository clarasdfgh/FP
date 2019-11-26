/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 4
II_May_a_Min_viceversa: se quiere leer un car�cter letra_original desde teclado:
	
	�Si es una letra may�scula, almacenaremos en la variable letra_convertida
	la correspondiente letra min�scula.
	�Si es una letra min�scula, almacenaremos en la variable letra_convertida 
	la correspondiente letra may�scula.
	�Si es un car�cter no alfab�tico, almacenaremos el mismo car�cter en la 
	variable letra_convertida 
	
Finalmente, imprimiremos en pantalla alguno de los siguientes mensajes:

	�La letra era una may�scula. Una vez convertida es ...
	�La letra era una min�scula. Una vez convertida es ...
	�El car�cter no era una letra.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
	const char A = 'A';
	const char a = 'a';
	const char Z = 'Z';
	const char z = 'z';
	char letra_original;
	char letra_convertida;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca una letra: ";
	cin >> letra_original;
	
	/* C�LCULOS Y SALIDA ******************************************************/
	bool es_mayus = letra_original >= A && letra_original <= Z;
	bool es_minus = letra_original >= a && letra_original <= z;
	
	if(es_mayus){
		letra_convertida = letra_original + (a - A);
		
		cout << "La letra era mayuscula. Convertida es " << letra_convertida;
	}else if (es_minus){
		letra_convertida = letra_original - (a - A);
		
		cout << "La letra era minuscula. Convertida es " << letra_convertida;
	} else{
		
		cout << "El caracter no era una letra." ;
	}

	return 0;
}
