/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 4
II_May_a_Min_viceversa: se quiere leer un carácter letra_original desde teclado:
	
	•Si es una letra mayúscula, almacenaremos en la variable letra_convertida
	la correspondiente letra minúscula.
	•Si es una letra minúscula, almacenaremos en la variable letra_convertida 
	la correspondiente letra mayúscula.
	•Si es un carácter no alfabético, almacenaremos el mismo carácter en la 
	variable letra_convertida 
	
Finalmente, imprimiremos en pantalla alguno de los siguientes mensajes:

	•La letra era una mayúscula. Una vez convertida es ...
	•La letra era una minúscula. Una vez convertida es ...
	•El carácter no era una letra.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	const char A = 'A';
	const char a = 'a';
	const char Z = 'Z';
	const char z = 'z';
	char letra_original;
	char letra_convertida;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca una letra: ";
	cin >> letra_original;
	
	/* CÁLCULOS Y SALIDA ******************************************************/
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
