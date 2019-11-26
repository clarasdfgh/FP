//SESIÓN 6
//24-Aproximación de pi por Gregory-Leibniz

#include <iostream>
using namespace std;

int main(){
	int tope;
	double pi;
	double aprox = 0;

	cout.precision(15);
	
	cout << "Introduzca un tope: " << endl;
 	do{
		cout << "\n\tEl valor debe estar entre 1 y 100.000: " << endl;
		cin >> tope;
	}while (tope <= 0 || tope > 100000);
	
	for(int i=0; i<tope; i++){
		if(i%2 == 0){
			aprox += 1.0 / ((2.0*i) + 1.0);
		} else if(i%2 != 0){
			aprox += -1.0 / ((2.0*i) + 1.0);
		}
	}
	
	pi = aprox * 4;
	
	cout << "Aproximacion de pi por Gregory-Leibnz con " << tope << " iteraciones: " << pi; 
}

