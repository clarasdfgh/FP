/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 2
I_AjusteTiempo: Leed desde teclado tres variables correspondientes a un número 
de horas, minutos y segundos,  respectivamente.  Diseñar  un  algoritmo  que  
calcule  las  horas,  minutos y segundos dentro de su rango correspondiente. 
Por ejemplo, dadas 10 horas, 119 minutos y 280 segundos, debería dar como 
resultado 12 horas, 3 minutos y 40 segundos. 

En el caso de que nos salgan más de 24 horas, daremos también los días
correspondientes (pero ya no pasamos a ver los meses, años, etc)

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	const int S_TO_M = 60;
	const int M_TO_H = 60;
	const int S_TO_H = S_TO_M * M_TO_H;
	const int H_TO_D = 24;
	int hor_ini, min_ini, sec_ini;
	int hor, min, sec;
	int dia = 0; 
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca horas, minutos y segundos: " << endl;
	cin >> hor_ini >> min_ini >> sec_ini;
	
	/* CÁLCULOS ***************************************************************/
	sec = sec_ini % S_TO_M;
	min = (min_ini + (sec_ini / S_TO_M)) % M_TO_H;
	hor = hor_ini + ((min_ini + (sec_ini/S_TO_M)) % M_TO_H); //algo falla x aqui
	hor = hor % H_TO_D;
	dia = hor_ini / H_TO_D;
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << dia << " dias, " << hor << "h " << min << "m " << sec << "s";
}
