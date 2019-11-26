//SESIÓN 2
//17-Coordenadas geográficas

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	const double PI = 6 * asin(0.5);
	const double GRAD_TO_RAD = PI/180;
	double grados_lat1, grados_lon1;
	double grados_lat2, grados_lon2;
	double lat1, lon1, lat2, lon2;
	double a;
	
	cout << "Introduzca la coordenada 1: " << endl;
	cin >> grados_lat1 >> grados_lon1;
	cout << "\nIntroduzca la coordenada 2: " << endl;
	cin >> grados_lat2 >> grados_lon2;
	
	lat1 = grados_lat1*GRAD_TO_RAD;
	lat2 = grados_lat2*GRAD_TO_RAD;	
	lon1 = grados_lon1*GRAD_TO_RAD;
	lon2 = grados_lon2*GRAD_TO_RAD;
	
	a = pow(sin(0.5*(lat2-lat1)),2) + cos(lat1)*cos(lat2) * pow(sin(0.5*(lon2-lon1)),2);
	
	cout << "La diferencia entre c1 y c2 es: " << a;
}
