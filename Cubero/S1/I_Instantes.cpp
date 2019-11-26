//SESIÓN 1
//10-SEGUNDOS ENTRE DOS INSTANTES

#include <iostream>
using namespace std;

int main(){
	const int M_TO_S = 60;
	const int H_TO_M = 60;
	const int H_TO_S = M_TO_S * H_TO_M;	
	
	int h_inicial, m_inicial, s_inicial;	
	int h_final, m_final, s_final;
	int h_total, m_total, s_total;
	int total;

	cout << "Introduzca el instante inicial: " << endl;
	cin >> h_inicial >> m_inicial >> s_inicial;
	
	cout << "\nIntroduzca el instante final: " << endl;
	cin >> h_final >> m_final >> s_final;
	
	s_total = (s_final-s_inicial);
	m_total = (m_final-m_inicial)*M_TO_S;
	h_total = (h_final-h_inicial)*H_TO_S;
	
	total = s_total + m_total + h_total;
	
	cout << "\n\nTotal en segundos: " << total;
}
