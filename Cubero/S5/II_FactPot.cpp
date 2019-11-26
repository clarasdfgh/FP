//SESIÓN 5
//21-Factorial y potencia

#include <iostream>
using namespace std;

int main(){
	int n;
	double x;
	double potencia;
	int factorial;
	
	cout << "\nIntroduzca x: " << endl;
	cin >> x;
	cout << "\nIntroduzca n: " << endl;
	cin >> n;
	
	while (n>20 || n<1){
		cout << "\nIntroduzca un valor entre 1 y 20: ";
		cin >> n;
	} 
	
	potencia = 1;
	factorial = 1;

	for(int i=1; i<=n; i++){
		potencia *= x; 
		factorial *= i;
	}
	
	cout << x << "^" << n << " = " << potencia <<  endl;
	cout << n << "! = " << factorial << endl;
}
