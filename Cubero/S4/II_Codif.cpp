//SESI�N 4
//4-Codificaci�n de caracteres con algoritmo de rotaci�n

#include <iostream>
using namespace std;

int main(){
	const char A = 'A';
	const char Z = 'Z';
	int clave;
	char letra, codif;
	
	cout << "Introduzca la clave y la letra: " << endl;
	cin >> clave >> letra;
	
	if(clave+letra > Z){
		clave = clave+letra - Z - 1;
		
		codif = A + clave;
	} else{
		codif = clave+letra;
	}
	
	cout << "\nLa letra codificada es: " << codif;
}
