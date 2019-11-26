/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 4
II_Pertenece_Intervalo: ampliad el ejercicio 21 de la Relación de Problemas I. 
Después de haber leído los datos que definen el intervalo, el programa debe 
leer un valor real y determinar si estáo no dentro del intervalo.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	const char COMA = ',';
	const char IZQ_ABIERTO = '(';
	const char IZQ_CERRADO = '[';
	const char DCH_ABIERTO = ')';
	const char DCH_CERRADO = ']';
	double cota_izq, cota_dch;
	char separador, izq, dch;
	double n;
	bool pertenece;
	
	
	/* ENTRADA DE DATOS *******************************************************/	
	cout << "Introduzca su intervalo: " << endl;
	cin >> izq >> cota_izq >> separador >> cota_dch >> dch;
	cout << "\nIntroduzca un numero: " << endl;
	cin >> n;
		
	/* CÁLCULOS ***************************************************************/
	if (n >= cota_izq && n<= cota_dch){
		pertenece = true;
		
		if((izq == IZQ_ABIERTO && n == cota_izq) || (dch == DCH_ABIERTO && n == cota_dch)){
			pertenece = false;
		}
	}
		
	/* SALIDA DE DATOS ********************************************************/
	if(pertenece){
		cout << n << " pertenece al intervalo " << izq << cota_izq << COMA << cota_dch << dch; 
	} else{
		cout << n << " no pertenece al intervalo " << izq << cota_izq << COMA << cota_dch << dch; 
	}

	return 0;
}
