/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 2
I_DiferenciaTiempo: Calcular el número de segundos que hay entre dos instantes 
del mismo día. Cada instante se caracteriza por la hora (entre 0 y 23), 
minuto (entre 0 y 59) y segundo(entre 0 y 59). El programa leerá la hora, 
minuto y segundo del instante inicial, y la hora, minuto y segundo del instante 
final (supondremos que los valores introducidos son correctos) y mostrará el 
número de segundos entre ambos instantes.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	const int M_TO_S = 60;
	const int H_TO_M = 60;
	const int H_TO_S = M_TO_S * H_TO_M;	
	int h_inicial, m_inicial, s_inicial;	
	int h_final, m_final, s_final;
	int h_total, m_total, s_total;
	int total;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca el instante inicial: " << endl;
	cin >> h_inicial >> m_inicial >> s_inicial;	
	cout << "\nIntroduzca el instante final: " << endl;
	cin >> h_final >> m_final >> s_final;
	
	/* CÁLCULOS ***************************************************************/
	s_total = (s_final-s_inicial);
	m_total = (m_final-m_inicial)*M_TO_S;
	h_total = (h_final-h_inicial)*H_TO_S;
	
	total = s_total + m_total + h_total;	
	
	/* SALIDA DE DATOS ********************************************************/
	cout << "\n\nTotal en segundos: " << total;	

	return 0;
}




	

