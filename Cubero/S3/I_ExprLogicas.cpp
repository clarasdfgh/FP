//SESIÓN 3
//29-Expresiones lógicas

#include <iostream>
using namespace std;

int main(){
	char letra;
	int edad, adivine, anio;
	bool es_minus = 0; 
	bool no_es_adulto = 0;
	bool es_centena = 0;
	bool es_bisiesto = 0;
	
	cout << "Introduzca:\n\t-una letra\n\t-una edad\n\t-un numero\n\t-un anio" << endl;
	cin >> letra >> edad >> adivine >> anio;
	
	if(letra <= 'z' && letra >= 'a'){
		es_minus = true;
	}
	
	if(edad < 18 || edad > 65){
		no_es_adulto = true;
	}
	
	if(adivine < 100 && adivine > 1){
		es_centena = true;
	}
	
	if(((anio % 4 == 0) && (anio % 100 != 0)) || (anio % 400 == 0)){
		es_bisiesto = true;
	}
	
	cout << "Es minuscula: " << es_minus << endl;
	cout << "Es menor de 18 o mayor de 65: " << no_es_adulto << endl;
	cout << "Esta entre 1 y 100: " << es_centena << endl;
	cout << "Es bisiesto: " << es_bisiesto;
}
