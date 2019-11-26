//SESIÓN 5
//12-Intervalo

#include <iostream>
using namespace std;

int main(){
	const char COMA = ',';
	const char IZQ_ABIERTO = '(';
	const char IZQ_CERRADO = '[';
	const char DCH_ABIERTO = ')';
	const char DCH_CERRADO = ']';
	double cota_izq, cota_dch;
	char separador, izq, dch;
	double n;
	bool pertenece;
	
	
	
	cout << "Introduzca su intervalo: " << endl;
	cin >> izq >> cota_izq >> separador >> cota_dch >> dch;
	cout << "\nIntroduzca un numero: " << endl;
	cin >> n;
	
	if (n >= cota_izq && n<= cota_dch){
		pertenece = true;
		
		if((izq == IZQ_ABIERTO && n == cota_izq) || (dch == DCH_ABIERTO && n == cota_dch)){
			pertenece = false;
		}
	}
	
	if(pertenece){
		cout << n << " pertenece al intervalo " << izq << cota_izq << COMA << cota_dch << dch; 
	} else{
		cout << n << " no pertenece al intervalo " << izq << cota_izq << COMA << cota_dch << dch; 
	}
}
