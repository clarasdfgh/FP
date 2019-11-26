//SESIÓN 6
//27-Secuencia de temperaturas

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	const int MAX = 60;
	const int MIN = -90;
	const int TOPE = 20;
	double secuencia[TOPE];
	int util;
	int i = -1;
	double pos_inicio;
	int longitud = 0;
	int mayor_longitud = 0;
	
	cout << "Introduzca la secuencia. ";
	cout << "\nLa entrada termina si se sobrepasan los limites de (-90,60):" << endl;
	do{
		i++;
		cin >> secuencia[i];
		
	} while(secuencia[i] < 60 && secuencia[i] > -90);
	
	util = i;
	
	for(int j=1; j<=util; j++){
		if(secuencia[j-1] <= secuencia[j]){
			longitud++;	
			pos_inicio = j-longitud;	
		} else{
			longitud = 0;
			pos_inicio = j;
			
			if(longitud > mayor_longitud){
				mayor_longitud = longitud;
			}
		}
		
	}
	
	
	cout << "Inicio: " << pos_inicio << "\nLongitud: " << longitud;
}
