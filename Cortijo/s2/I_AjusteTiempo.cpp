/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 2
I_AjusteTiempo: Leed desde teclado tres variables correspondientes a un n�mero 
de horas, minutos y segundos,  respectivamente.  Dise�ar  un  algoritmo  que  
calcule  las  horas,  minutos y segundos dentro de su rango correspondiente. 
Por ejemplo, dadas 10 horas, 119 minutos y 280 segundos, deber�a dar como 
resultado 12 horas, 3 minutos y 40 segundos. 

En el caso de que nos salgan m�s de 24 horas, daremos tambi�n los d�as
correspondientes (pero ya no pasamos a ver los meses, a�os, etc)

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
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
	
	/* C�LCULOS ***************************************************************/
	sec = sec_ini % S_TO_M;
	min = (min_ini + (sec_ini / S_TO_M)) % M_TO_H;
	hor = hor_ini + ((min_ini + (sec_ini/S_TO_M)) % M_TO_H); //algo falla x aqui
	hor = hor % H_TO_D;
	dia = hor_ini / H_TO_D;
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << dia << " dias, " << hor << "h " << min << "m " << sec << "s";
}
