//SESIÓN 3
//25-Trunca decimales

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double inicial, final, aproximacion;
	int aproximador, truncador;
	
	cout << "\nIntroduzca un numero real: ";
	cin >> inicial;
	cout << "\nIntroduzca el numero del truncamiento: ";
	cin >> aproximador;
	
	aproximacion = pow(10, aproximador);
	truncador = inicial * aproximacion;
	final = truncador / aproximacion;
	
	cout << "\nEl numero truncado es " << final;
}
