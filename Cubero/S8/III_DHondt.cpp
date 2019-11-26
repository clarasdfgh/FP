//SESIÓN 8
//4-Sistema D'Hondt

#include <iostream>
using namespace std;

int main(){
	int total_escanos;
	int partidos;
	double dhondt;
	double mayor = -1;
	int i = 0;
	int partido_mayor;
	
	cout << "\nIntroduzca el numero total del escanos: ";
	cin >> total_escanos;
	cout << "\nIntroduzca el numero total de partidos: "; 
	cin >> partidos;
	
	double votos[partidos];
	double escanos[partidos];

	for(int m=0; m<partidos; m++){
		escanos[m] = 0;
	}
	
	cout << "\nIntroduzca los votos de cada partido: " << endl;
	do{
		cout << "\n\tPartido " << i << ": ";
		cin >> votos[i];
		i++;
	}while (i < partidos);
	
	for (int j=0; j<total_escanos; j++){
		
		for (int k=0; k<partidos; k++){
			
			dhondt = votos[j] / (1 + escanos[j]);
			cout << endl << dhondt << " = " << votos[j] << "/ (1 + " << escanos[j] << ")\n";
			
			if(dhondt > mayor){
				mayor = dhondt;	
				partido_mayor = k;
			}	
		} 
		escanos[partido_mayor]++; 
	}	
	
	cout << "\nLos escanos finales son: " << endl;
	for (int t=0; t<partidos; t++){
		cout << "\n\tPartido " << t << ": " << escanos[t];
	}
}
