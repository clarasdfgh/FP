//SESIÓN 2
//16-Distancia Euclídea

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double x1, y1;
	double x2, y2;
	double difx, dify;
	double cuadrado_difx, cuadrado_dify;
	double distancia;
	
	cout << "Introduzca el punto 1: " << endl;
	cin >> x1 >> y1;
	cout << "\nIntroduzca el punto 2: " << endl;
	cin >> x2 >> y2;	
	
	
	difx = x2-x1;
	dify = y2-y1;
	
	cuadrado_difx = difx*difx;
	cuadrado_dify = dify*dify;
	
	distancia = sqrt(cuadrado_difx + cuadrado_dify);
	
	cout << "\n\nLa distancia entre p1 y p2 es: " << distancia;
}
