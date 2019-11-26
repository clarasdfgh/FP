/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 3 OPCIONAL
I_CifradoRotacion: para intercambiar mensajes de forma privada, se utilizan 
distintos algoritmos que codifican/descodifican una cadena de caracteres. Uno 
de los m�s sencillos y que fue utilizado por Julio C�sar durante la �poca del 
Imperio Romano es el de rotaci�n. Consiste en seleccionar una clave (un n�mero 
entero), y desplazar las letras del alfabeto tantas posiciones como indica la 
clave. 

Trabajaremos �nicamente con may�sculas. Se considera una representaci�n 
circular del alfabeto, de tal forma que el car�cter que sigue a �Z� es �A�. 
Por ejemplo, si clave=4, entonces la �A�se reemplaza por la �E�y la �Z�por la 
�D�. Utilizando clave=0 la secuencia cifrada es igual a la original.

Construya un programa que lea un entero representando la clave y un car�cter 
(supondremos que se introduce correctamente una letra may�scula del alfabeto 
ingl�s). El programa codificar� el car�cter seg�n la clave introducida y lo 
mostrar� por pantalla.

Recomendamos que revise la soluci�n del ejercicio 22 de esta misma 
Relaci�n de Problemas.

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
