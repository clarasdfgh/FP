//SESIÓN 5 OPCIONAL
//18-Tarifa aérea con filtro de entrada de datos

#include <iostream>
using namespace std;

int main(){
	const int BASE = 150;
	const double KM = 0.1;
	const double DESC_100 = 0.97;
	const double DESC_200 = 0.96;
	const double DESC_KM = 0.98;
	double precio, precio_descuento;
	double distancia;
	int puntos;
	
	cout << "Introduzca la distancia: ";
	cin >> distancia;
	
	while (distancia < 0){
		cout << "\n\tIntroduzca un valor valido." << endl;
		cin >> distancia;
	}
		
	
	cout << "\nIntroduzca los puntos: ";
	cin >> puntos;
	
	while (puntos < 0){
		cout << "\n\tIntroduzca un valor valido." << endl; 
		cin >> puntos;
	}
	
	if(distancia <= 300){
		precio = BASE;
		
	} else{
		precio = BASE + ((distancia-300)*KM);
	}
	
	precio_descuento = precio;
	
	if(distancia > 700){
		precio_descuento *= DESC_KM;
	}
	
	if(puntos > 100){
		if(puntos > 200){
			precio_descuento *= DESC_200;
		} else{
			precio_descuento *= DESC_100;
		}
	}
	
	cout << "\nEl precio es de " << precio << " euros.";
	cout << "\nEl precio tras los descuentos es de " << precio_descuento << " euros.";
}
