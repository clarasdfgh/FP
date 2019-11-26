//SESIÓN 7 
//3-Maximo desnivel

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int tope;
	int max_dif, dif_acumulada;
	int dif;
	int i = 0;
	
	cout << "Introduzca cuantos datos va a proporcionar: " << endl;
	cin >> tope;
	
	int alturas[tope];
	
	cout << "Introduzca las alturas en metros: " << endl;
	do{
		cin >> alturas[i];
		i++;
	}while (i<tope);
	
	max_dif = alturas[1] - alturas[0];
	dif_acumulada = 0;
	
	for(int j=1; j<tope; j++){
		dif = alturas[j] - alturas[j-1];
		
		if(abs(dif) > abs(max_dif)){
			max_dif = dif;
		}
		
		if(dif > 0){
			dif_acumulada += dif;
		}
	}

	if(tope > 1){
		cout << "El mayor desnivel es de " << max_dif << " metros." << endl;
		cout << "La diferencia acumulada es de " << dif_acumulada << " metros." << endl;
	} else{
		cout << "DATOS INSUFICIENTES";
	}
}

