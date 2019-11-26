/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 5
II_May_a_Min_viceversa_enum: tome como referencia la solución al ejercicio 13 
de esta misma relación de problemas. Ahora deberá emplear un tipo enumerado que 
permita guardar el tipo de carácter de letra_original. Considere que ahora 
podría ser: una letra mayúscula, una letra minúscula, un dígito u otro carácter.
Importante: las vocales con tilde (mayúsculas y minúsculas) y las letras ú, Ü, ñ
y Ñ se englobarán en la categoría de otros por simplificar la solución

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

enum class TipoLetra{
	Mayus,
	Minus,
	Digito,
	Otro
}

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
	bool es_digito = 
		
	switch (letra_original){
		case ()
	}
	
	
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
