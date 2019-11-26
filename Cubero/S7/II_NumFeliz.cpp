//SESIÓN 7 
//37-Número feliz

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, k;
	int n_copia, n_copia2;
	int num_digitos = 0;
	int anterior;
	int suma_potencia;
	bool es_feliz;
	
	
	cout << "Introduzca un numero: " << endl;
	cin >> n;
	cout << "Introduzca el grado: " << endl;
	cin >> k;
	
	n_copia = n;
	n_copia2 = n;
	
	while(n_copia/pow(10, num_digitos) > 0){
		num_digitos++;	
		n_copia = n_copia/10;
	}

	int j = 1;
	int i = 0;
	
	do{
		while(j < num_digitos){
			n_copia2 /= num_digitos - j;
			
			suma_potencia += n_copia2 - (anterior * 10);
			
			anterior =  n_copia2;
			j++;
		}
		
		if(suma_potencia == 0){
			es_feliz = true;
		}	
		
		suma_potencia  = 0;
		i++;
				
	} while(!es_feliz && i<k);


	if(es_feliz){
		cout << "\nEl numero " << n << " es feliz para cualquier grado >=" << i; 
	} else{
		cout << "\nEl numero " << n << " no es feliz para cualquier grado <=" << i; 
	}

}
