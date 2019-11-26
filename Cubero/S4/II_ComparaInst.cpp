//SESIÓN 4 OPCIONAL
//11-Comparación de dos instantes

#include <iostream>
using namespace std;

int main(){
	const int S_TO_M = 60;
	const int M_TO_H = 60;
	const int S_TO_H = S_TO_M * M_TO_H;
	int h_ini, m_ini, s_ini, total_ini;
	int h_fin, m_fin, s_fin, total_fin;
	int diferencia;
	bool determinado = false;
	bool primero_anterior;
	
	cout << "Introduzca el primer instante: " << endl;
	cin >> h_ini >> m_ini >> s_ini;
	cout << "Introduzca el segundo instante: " << endl;
	cin >> h_fin >> m_fin >> s_fin;
	
	total_ini = h_ini*S_TO_H + m_ini*S_TO_M + s_ini;
	total_fin = h_fin*S_TO_H + m_fin*S_TO_M + s_fin;
	
	diferencia = total_fin - total_ini;
	
	if(diferencia >= 0){
		cout << "El primer instante es anterior";
	} else{
		cout << "El segundo instante es anterior";
	}
}
