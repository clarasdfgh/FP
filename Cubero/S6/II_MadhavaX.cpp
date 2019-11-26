//SESIÓN 6 OPCIONAL
//26-Aproximación de pi por Madhava sin usar pow

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int tope;
	double pi;
	double aprox = 0;
	double x = 1.0/sqrt(3.0);
	double x_acumulada = x;
	double y = -1.0;
	double y_acumulada = y;
	

	cout.precision(15);
	
	cout << "Introduzca un tope: " << endl;
 	do{
		cout << "\n\tEl valor debe estar entre 1 y 100.000: " << endl;
		cin >> tope;
	}while (tope <= 0 || tope > 100000);
	
	
	for(int i=0; i<tope; i++){
		for(int j=0; j<i; j++){
			y_acumulada *= y;
			cout << "Y:" << y << endl;
		}
		for(int k=0; k<2*i+1; k++){
			x_acumulada *= x;
			cout << "X:" << x << endl;
		}
		
		aprox += (y * x) / 2.0*i + 1.0;
		cout << "APROX:" << aprox << endl;
	}

	pi = aprox * 6;
	
	cout << "Aproximacion de pi por Madhava con " << tope << " iteraciones: " << pi; 
}
