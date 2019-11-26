//SESIÓN 2
//13-Lectura de un intervalo

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
	
	
	cout << "Introduzca su intervalo: " << endl;
	cin >> izq >> cota_izq >> separador >> cota_dch >> dch;
	
	if(izq == IZQ_ABIERTO){
		if(dch == DCH_ABIERTO){
			cout << IZQ_ABIERTO << cota_izq << COMA << cota_dch << DCH_ABIERTO; 
		} else{
			cout << IZQ_ABIERTO << cota_izq << COMA << cota_dch << DCH_CERRADO; 
		}
	} else{
		if(dch == DCH_ABIERTO){
			cout << IZQ_CERRADO << cota_izq << COMA << cota_dch << DCH_ABIERTO; 
		} else{
			cout << IZQ_CERRADO << cota_izq << COMA << cota_dch << DCH_CERRADO; 
		}
	}
}
