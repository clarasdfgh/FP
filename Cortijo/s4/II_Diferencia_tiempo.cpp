/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 4
II_Diferencia_tiempo: ampliad el ejercicio 19 de la Relaci�n de Problemas I de 
manera que los dos instantes puedan pertenecer a dos d�as consecutivos. Si los 
dos instantes pertenecen a dos d�as diferentes, indicadlo de manera expl�cita en 
la salida. 

Calcule la soluci�n usando dos algoritmos: 
	1) en base al n�mero de segundos transcurridos  entre  los  dos  instantes,  
	2) comparando  los  valores  de  horas,  minutos  y segundos de los dos 
	instantes.
	
Escribid las dos soluciones en el mismo programa

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

/*ALGORITMO 1*/
int main(){
	// DECLARACI�N DE VARIABLES ***********************************************
	const int M_TO_S = 60;
	const int H_TO_M = 60;
	const int H_TO_S = M_TO_S * H_TO_M;	
	int h_inicial, m_inicial, s_inicial;	
	int h_final, m_final, s_final;
	int h_total, m_total, s_total;
	int total_ini, total_fin;
	int diferencia;
	
	// ENTRADA DE DATOS *******************************************************
	cout << "Introduzca el instante inicial: " << endl;
	cin >> h_inicial >> m_inicial >> s_inicial;	
	cout << "\nIntroduzca el instante final: " << endl;
	cin >> h_final >> m_final >> s_final;
	
	// C�LCULOS ***************************************************************
	total_ini = h_inicial*H_TO_S + m_inicial*M_TO_S + s_inicial;
	total_fin = h_final*H_TO_S + m_final*M_TO_S + s_final;
	
	diferencia = total_fin - total_ini;
	
	bool dia_distinto = diferencia < 0;
	
	if(dia_distinto){
		total_fin += 24 * H_TO_S;			//Si son dos d�as distintos, a�adir
		diferencia = total_fin - total_ini;	//un dia
	}
	
	
	// SALIDA DE DATOS ********************************************************
	cout << endl;
	cout << "Diferencia total en segundos: " << diferencia << "." << endl;	
	if (dia_distinto){
		cout << "Los instantes pertenecian a dos dias distintos.";
	}

	return 0;
}
