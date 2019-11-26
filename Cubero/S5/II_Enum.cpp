//SESIÓN 5
//15-Mayus a minus usando un enum

#include <iostream>
using namespace std;

enum Caracter{
	mayus,
	minus,
	otro
};

int main(){
	const char A = 'A';
	const char Z = 'Z';
	const char a = 'a';
	const char z = 'z';
	char letra_original, letra_convertida;
	Caracter tipo;
	
	cout << "Introduzca un caracter: " <<  endl;
	cin >> letra_original;
	
	if(letra_original >= A && letra_original <= Z){
		tipo = Caracter::mayus;
		
	} else if (letra_original >= a && letra_original <= z){
		tipo = Caracter::minus;
	
	} else{
		tipo = Caracter::otro;	
	}
	
	cout << "El caracter introducido es " << tipo;
}
