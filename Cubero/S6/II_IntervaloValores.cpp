//SESIÓN 6 
//23-Intervalo: lectura de valores

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
	int tamanio;
	double n[tamanio];
	bool pertenece = false;
	
	
	
	cout << "Introduzca su intervalo: " << endl;
	cin >> izq >> cota_izq >> separador >> cota_dch >> dch;
	cout << "Cuantos numeros quiere comprobar? " << endl;
	cin >> tamanio;
	
	for(int i=0; i<tamanio; i++){
		cout << "\nIntroduzca un numero: " << endl;
		cin >> n[i];
	}
	
	for(int i=0; i<tamanio; i++){
		if (n[i] >= cota_izq && n[i] <= cota_dch){
			pertenece = true;
		
			if((izq == IZQ_ABIERTO && n[i] == cota_izq) || (dch == DCH_ABIERTO && n[i] == cota_dch)){
				pertenece = false;
			}
		}
	
		if(pertenece){
			cout << n[i] << " pertenece al intervalo " << izq << cota_izq << COMA << cota_dch << dch << endl; 
		} else{
			cout << n[i] << " no pertenece al intervalo " << izq << cota_izq << COMA << cota_dch << dch << endl; 
		}
	
		pertenece = false;	
	}
}
