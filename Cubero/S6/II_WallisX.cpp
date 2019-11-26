//SESIÓN 6
//25-Aproximación de pi por Wallis

#include <iostream>
using namespace std;

int main(){
	int tope;
	double aprox = 1;
	double pi;
	double numerador;
	double denominador;
	int i;
	
	cout.precision(15);
	
	cout << "Introduzca un tope: " << endl;
 	do{
		cout << "\n\tEl valor debe estar entre 1 y 100.000: " << endl;
		cin >> tope;
	}while (tope <= 0 || tope > 100000);
	

	
	for(int i = 0; i<tope; i++){
	
	bool es_impar = i%2 != 0;
		
		if (es_impar){
			numerador = i + 1.0;
			denominador = i + 2.0;
		} else{
			numerador = i + 2.0;
			denominador = i + 1.0;
		}
		
		aprox *= (numerador / denominador);	
	}
	
	pi = aprox * 2.0;
	
	cout << "Aproximacion de pi por Wallis con " << tope << " iteraciones: " << pi; 
}
