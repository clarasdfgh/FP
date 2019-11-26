//SESIÓN 7 
//38-Bits to char

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	const int TOPE = 100;
	int entrada[TOPE];
	int i = 0;
	int bit_to_char = 0;
	char caracter[TOPE];
	int a=0;
	int letras = 0;
	double porcentaje;
	
	
	cout << "Introduzca una entrada binaria. Un negativo finaliza la entrada:" << endl;
	do{
		cin >> entrada[i];
		if(entrada[i] == 0 || entrada[i] == 1){
			i++;	
		}								
	
	}while (entrada[i] >= 0 && i <= TOPE);
	
					cout << endl;
	
					for(int h=0; h<i; h++){
						cout << entrada[h] << " - ";
					}
	
						cout << endl;
	
	for(int j=0; j < i;){
		for(int k=0; k<8; k++, j++){
							cout << endl;
						cout << bit_to_char << " += " << entrada[j] << "* 2^" << 7-k << endl; 
				
							
			bit_to_char += entrada[j] * pow(2,7-k);
			
					cout << bit_to_char << endl;
		}

		
		caracter[a] = bit_to_char;
						cout << endl << bit_to_char << " -> " << caracter[a] << endl;
		
		a++;
		bit_to_char = 0;
	}
	
	for(int b=0; b<a; b++){
		cout << caracter[b];
		if((caracter[b] > 'A' && caracter[b] < 'Z') || (caracter[b] > 'a' && caracter[b] < 'z')){
			letras++;
		}
	}
}
