/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 3 OPCIONAL
I_CifradoRotacion: para intercambiar mensajes de forma privada, se utilizan 
distintos algoritmos que codifican/descodifican una cadena de caracteres. Uno 
de los más sencillos y que fue utilizado por Julio César durante la época del 
Imperio Romano es el de rotación. Consiste en seleccionar una clave (un número 
entero), y desplazar las letras del alfabeto tantas posiciones como indica la 
clave. 

Trabajaremos únicamente con mayúsculas. Se considera una representación 
circular del alfabeto, de tal forma que el carácter que sigue a ’Z’ es ’A’. 
Por ejemplo, si clave=4, entonces la ’A’se reemplaza por la ’E’y la ’Z’por la 
’D’. Utilizando clave=0 la secuencia cifrada es igual a la original.

Construya un programa que lea un entero representando la clave y un carácter 
(supondremos que se introduce correctamente una letra mayúscula del alfabeto 
inglés). El programa codificará el carácter según la clave introducida y lo 
mostrará por pantalla.

Recomendamos que revise la solución del ejercicio 22 de esta misma 
Relación de Problemas.

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
