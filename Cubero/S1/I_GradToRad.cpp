//SESIÓN 1
//5-CONVERSIÓN GRADOS A RADIANES

#include <cmath>
#include <iostream>
using namespace std;

int main(){
	const double PI = 6 * asin(0.5);
	const double GRAD_TO_RAD = PI/180;
	double g1, g2;
	double r1, r2;
	
	cout << "GRADOS: " << endl;
	cin >> g1 >> g2;
	
	r1 = g1 * GRAD_TO_RAD;
	r2 = g2 * GRAD_TO_RAD;
	
	cout << "\nRADIANES: " << endl;
	cout << r1 << endl << r2; 
}
