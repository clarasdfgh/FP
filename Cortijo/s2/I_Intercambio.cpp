/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 2
I_Intercambio: Queremos construir un programa que simule un juego inspirado en 
el de los triles (del que procede el nombre de trilero). 
Suponemos que hay dos participantes y cada uno tiene una caja etiquetada con su 
nombre. Dentro de cada caja hay una cantidad de dinero y el objetivo es 
intercambiar las cantidades que hay dentro. 
Por ahora, s�lo se pide construir un programa que haga lo siguiente:

	�Debe leer desde teclado dos variables caja_izda y caja_dcha.
	�A continuaci�n debe intercambiar sus valores y finalmente, mostrarlos.

Observe  que  se  desea  intercambiar  el  contenido  de  las  variables,  
de  forma  que caja_izda pasa a contener lo que ten�a caja_dcha y viceversa. 
Estar�amos tentados a escribir el siguiente c�digo:
	
	caja_izda = caja_dcha;
	caja_dcha = caja_izda;

Pero no funciona correctamente �Por qu�? Proponga una soluci�n e implem�ntela.

		No funciona porque en la primera asignaci�n machacamos el valor incial
		de la variable caja_izda y lo perdemos. Es necesaria una variable aux

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
	double caja_izda, caja_dcha;
	double intercambio;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca primero la caja izda y luego la caja dcha: " << endl;
	cin >> caja_izda;
	cin >> caja_dcha;
	
	/* C�LCULOS ***************************************************************/
	intercambio = caja_izda;
	caja_izda = caja_dcha;
	caja_dcha = intercambio;
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << "Caja izda: " << caja_izda << endl;
	cout << "Caja dcha: " << caja_dcha;
	
	return 0;
}
	
