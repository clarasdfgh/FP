/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 2
I_Intercambio: Queremos construir un programa que simule un juego inspirado en 
el de los triles (del que procede el nombre de trilero). 
Suponemos que hay dos participantes y cada uno tiene una caja etiquetada con su 
nombre. Dentro de cada caja hay una cantidad de dinero y el objetivo es 
intercambiar las cantidades que hay dentro. 
Por ahora, sólo se pide construir un programa que haga lo siguiente:

	•Debe leer desde teclado dos variables caja_izda y caja_dcha.
	•A continuación debe intercambiar sus valores y finalmente, mostrarlos.

Observe  que  se  desea  intercambiar  el  contenido  de  las  variables,  
de  forma  que caja_izda pasa a contener lo que tenía caja_dcha y viceversa. 
Estaríamos tentados a escribir el siguiente código:
	
	caja_izda = caja_dcha;
	caja_dcha = caja_izda;

Pero no funciona correctamente ¿Por qué? Proponga una solución e impleméntela.

		No funciona porque en la primera asignación machacamos el valor incial
		de la variable caja_izda y lo perdemos. Es necesaria una variable aux

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	double caja_izda, caja_dcha;
	double intercambio;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca primero la caja izda y luego la caja dcha: " << endl;
	cin >> caja_izda;
	cin >> caja_dcha;
	
	/* CÁLCULOS ***************************************************************/
	intercambio = caja_izda;
	caja_izda = caja_dcha;
	caja_dcha = intercambio;
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << "Caja izda: " << caja_izda << endl;
	cout << "Caja dcha: " << caja_dcha;
	
	return 0;
}
	
