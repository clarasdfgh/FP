//SESIÓN 7 
//36-Tarifa aérea, multiples billetes

#include <iostream>
using namespace std;

int main(){
	const int TOPE = 20;
	const char TERMINADOR = '#';
	const char NUEVO = 'N';
	const int BASE = 150;
	const int MAX_PUNTOS = 400;
	const double KM = 0.1;
	const double DESC_100 = 0.97;
	const double DESC_200 = 0.96;
	const double DESC_KM = 0.98;
	double precio[TOPE], precio_descuento[TOPE];
	double distancia[TOPE];
	int puntos[TOPE];
	char continuar;
	int i = 0;
	
	do{
		cout << "Introduzca la distancia: ";
		cin >> distancia[i];
	
		while (distancia[i] < 0){
			cout << "\n\tIntroduzca un valor valido." << endl;
			cin >> distancia[i];
		}
		
	
		cout << "\nIntroduzca los puntos: ";
		cin >> puntos[i];
	
		while (puntos[i] < 0 || puntos[i] > MAX_PUNTOS){
			cout << "\n\tIntroduzca un valor valido." << endl; 
			cin >> puntos[i];
		}
		
		cout << "\nSi quiere introducir otro billete, pulse 'N'. Si no, pulse '#': " << endl;
		cin >> continuar;
		
		while (continuar != NUEVO && continuar != TERMINADOR){
			cout << "\n\tIntroduzca 'N' o '#'." << endl;
			cin >> continuar;
		}
		
		i++;
		
	} while(continuar == NUEVO && i < 20);
	
	for(int j=0; j<i; j++){
		if(distancia[j] <= 300){
			precio[j] = BASE;
		
		} else{
			precio[j] = BASE + ((distancia[j]-300)*KM);
		}
	
		precio_descuento[j] = precio[j];
	
		if(distancia[j] > 700){
			precio_descuento[j] *= DESC_KM;
		}
	
		if(puntos[j] > 100){
			if(puntos[j] > 200){
				precio_descuento[j] *= DESC_200;
			} else{
				precio_descuento[j] *= DESC_100;
			}
		}
	
	cout << "\nEl precio del billete " << j+1 << " es de " << precio[j] << " euros.";
	cout << "\nEl precio tras los descuentos es de " << precio_descuento[j] << " euros." << endl;
	
	}
}
