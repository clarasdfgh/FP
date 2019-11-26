//SESIÓN 5
//20-Variacion porcentual: lectura de varios valores

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	const char TOPE = 20;
	double var_porcentual[TOPE];
	double v_inicial[TOPE];
	double v_final[TOPE];
	int i=0;
	int j=0;
	
	cout << "Un numero inicial negativo finaliza la entrada de datos." << endl << endl;
	cout << "\nIntroduzca el valor inicial: ";
	cin >> v_inicial[i];
	
	while(v_inicial[i] >= 0){
		cout << "\nIntroduzca el valor final: ";
		cin >> v_final[i];
		
		var_porcentual[i] = abs(100 * ((v_final[i]-v_inicial[i])/v_inicial[i]));
	
		i++;
		
		cout << "\nIntroduzca el valor inicial: ";
		cin >> v_inicial[i];
	}

	cout << "\nVariacion porcentual: " << endl;

	while(j < i){
		cout << var_porcentual [j] << "%" << endl;
		j++;
	}
}
