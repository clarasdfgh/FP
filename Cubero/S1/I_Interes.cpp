//SESIÓN 1
//9-INTERÉS BANCARIO

#include <iostream>
using namespace std;

int main(){
	double capital, interes;
	double total;
	
	cout << "Introduzca el capital: ";
	cin >> capital;
	cout << "\nIntroduzca el interes: ";
	cin >> interes;
	
	total = capital + (capital * (interes/100));
	
	cout << "\n\nEl total es de " << total << " euros";
}
