/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 4 OPCIONAL
II_VelocidadImputada: los radares (o cinem�metros) pueden ser fijos o m�viles y 
tienen como misi�n registrar la velocidad de los veh�culos. Estos aparatos 
presentan un margen de errorque hay que aplicar a la velocidad captada por el 
radar y vienen especificados en el BOE.

	a)En el caso de un radar fijo:
		I)  Si la velocidad captada por el radar es menor o igual que 100 km/h, 
		el margen de error es de 5 km/h.
		II)  En caso contrario, el margen de error es de un 5 %
	
	b)  En el caso de un radar m�vil:
		I)  Si la velocidad captada por el radar es menor o igual que 100 km/h, 
		el margen de error es de 7 km/h.
		II)  En caso contrario, el margen de error es de un 7 %
		
Los m�rgenes de error se aplican sobre la velocidad captada y da como resultado 
la velocidad imputada. Construya un programa que lea desde teclado un car�cter 
que indique el tipo de radar (F para fijo y cualquier otra letra para m�vil), 
la velocidad captada, e imprima la velocidad imputada

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
	const char FIJO = 'F';
	const int MARGEN_F = 5;
	const double MARGEN_F_MAYOR = 0.95;
	const int MARGEN_M = 7;
	const double MARGEN_M_MAYOR =0.93;
	char radar;
	double v_captada, v_imputada;
	
	/* ENTRADA DE DATOS *******************************************************/	
	cout << "Introduzca la velocidad captada: " << endl;
	cin >> v_captada;
	cout << "\nIntroduzca el tipo de radar: " << endl;
	cin >> radar;
	
	/* C�LCULOS ***************************************************************/	
	if(radar == FIJO){
		if(v_captada <= 100){
			v_imputada = v_captada - MARGEN_F;
			
		} else{
			v_imputada = v_captada * MARGEN_F_MAYOR;
			
		}
			
	} else{
		if(v_captada <= 100){
			v_imputada = v_captada - MARGEN_M;
		
		} else{
			v_imputada = v_captada * MARGEN_M_MAYOR;
		}
	}
	
	/* SALIDA DE DATOS ********************************************************/
	cout << "La velocidad imputada es de " << v_imputada << " km/h.";
	
	return 0;
}
