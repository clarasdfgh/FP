/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 5
II_May_a_Min_viceversa_enum: tome como referencia la soluci�n al ejercicio 13 
de esta misma relaci�n de problemas. Ahora deber� emplear un tipo enumerado que 
permita guardar el tipo de car�cter de letra_original. Considere que ahora 
podr�a ser: una letra may�scula, una letra min�scula, un d�gito u otro car�cter.
Importante: las vocales con tilde (may�sculas y min�sculas) y las letras �, �, �
y � se englobar�n en la categor�a de otros por simplificar la soluci�n

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
