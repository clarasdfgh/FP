/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 2 OPCIONAL
I_ConsumoGasolina:  escriba un programa que calcule el consumo de gasolina. 
Pedir� la distancia recorrida (en kms), los litros de gasolina consumidos y los 
litros que quedan en el dep�sito. El programa debe informar el consumo en 
km/litro, los litros/100 km y cuantos kil�metros de autonom�a le restan con 
ese nivel de consumo.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
	double distancia;
	double consumidos, restantes;
	double km_litro, litro_100km, km_autonomia;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca la distancia recorrida: ";
	cin >> distancia;
	cout << "Introduzca la gasolina consumida: ";
	cin >> consumidos;
	cout << "Introduzca la gasolina restante: ";
	cin >> restantes;
	
	/* C�LCULOS ***************************************************************/
	km_litro = distancia/consumidos;
	litro_100km = km_litro * 100;
	km_autonomia = restantes * km_litro;
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << "El consumo es de " << km_litro << " km/litro." << endl;
	cout << "Se consumen " << litro_100km << " cada 100km." << endl;
	cout << "Con el consumo actual, tiene " << km_autonomia << " km mas";
	
	return 0;
}
