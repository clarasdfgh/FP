//SESIÓN 2 OPCIONAL
//20-Desplaza entero dentro de un intervalo

#include <iostream>
using namespace std;

int main(){
	int min, max;
	int num, despl;
	int nuevo_despl;
	
	cout << "Introduzca un minimo y un maximo: " << endl;
	cin >> min >> max;
	cout << "Introduzca un numero: ";
	cin >> num;
	cout << "\nIntroduzca las posiciones a desplazar: ";
	cin >> despl;
	
	if(num+despl > max){
		nuevo_despl = (num+despl) - max - 1;
		cout << min+nuevo_despl;
		
	} else{
		cout << num+despl; 
	}

}
