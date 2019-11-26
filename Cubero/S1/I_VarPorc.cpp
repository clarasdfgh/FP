//SESIÓN 1
//8-VARIACIÓN PORCENTUAL

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double var_porcentual;
	double v_inicial, v_final;
	
	cout << "Introduzca el valor inicial: ";
	cin >> v_inicial;
	cout << "\nIntroduzca el valor final: ";
	cin >> v_final;
	
	var_porcentual = abs(100 * ((v_final-v_inicial)/v_inicial));

	cout << "\n\nLa variacion porcentual es del " << var_porcentual << "%";
}
