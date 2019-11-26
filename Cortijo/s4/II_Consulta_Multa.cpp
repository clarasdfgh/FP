/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 4 OPCIONAL
II_Consulta_Multa: en este ejercicio queremos determinar la sanción a 
aplicar en una autovía, cuyo límite de velocidad es 120 Km/h. En la siguiente 
tabla se muestra la velocidad del vehículo y la sanción correspondiente 
(número de puntos del carnet de conducir que se restan y la multa en euros)

	(120,150] -> 0, 100
	(150,170] -> 2, 300
	(170,180] -> 4, 400
	(180,190] -> 6, 500
	(190, oo) -> 6, 600
	
Escriba un programa que lea la velocidad del vehículo e imprima en 
pantalla la sanción correspondiente

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	const int LIMITE = 120;
	const int TOPE1 = 150;
	const int TOPE2 = 170;
	const int TOPE3 = 180;
	const int TOPE4 = 190;	
	double velocidad;
	double multa;
	int puntos;
	

	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca la velocidad en km/h: ";
	cin >> velocidad;
	
	/* CÁLCULOS ***************************************************************/
	if(velocidad >= LIMITE && velocidad < TOPE1){
		multa = 100;
		puntos = 0;
		
	} else if(velocidad >= TOPE1 && velocidad < TOPE2){
		multa = 300;
		puntos = 2;
		
	} else if(velocidad >= TOPE2 && velocidad < TOPE3){
		multa = 400;
		puntos = 4;
		
	} else if(velocidad >= TOPE3 && velocidad < TOPE4){
		multa = 500;
		puntos = 6;
				
	} else if(velocidad >= TOPE4){
		multa = 600;
		puntos = 6;
		
	} else{
		multa = 0;
		puntos = 0;
	}
	
	/* SALIDA DE DATOS ********************************************************/
	cout << "La sancion correspondiente a " << velocidad << " km/h es de " <<
	puntos << " puntos y " << multa << " euros.";
	
	return 0;
}
