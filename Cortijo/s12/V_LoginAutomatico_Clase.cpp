/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 12
V_LoginAutomatico_Clase: dado un nombre completo y un entero (n), obtener un 
login que contenga las n primeras letras de cada palabra en el nombre

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

class Login{
private:
	/* DATOS MIEMBRO **********************************************************/
	int num_caracteres_a_coger;
	
public:
	/* CONSTRUCTOR ************************************************************/
	Login (int n):
		num_caracteres_a_coger(n) 
		{}

	/* MÉTODOS ****************************************************************/
	string Codifica(string nombre_completo){
		string login = "";
		int j = 0;			//iterador comprobación
		
		for (int i=0; i<nombre_completo.length(); i++){
			do{
				if(j<num_caracteres_a_coger){
					login += nombre_completo[i];
					j++;
				}
				i++;
			} while(!es_espacio(nombre_completo, i));
			j=0;
		}
		
		return login;
	}
	
	bool es_espacio(string nombre_completo, int i){
		return nombre_completo[i] == ' ';
	}
};


int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	string nombre, username;
	int n;

	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca su nombre completo: ";
	getline(cin, nombre);
	cout << "Introduzca un numero limite de caracteres para el login: ";
	cin >> n;
	
	/* CÁLCULOS ***************************************************************/
	nombre += ' '; 			//Espacio al final necesario para final de palabra
	Login login(n);
	
	username=login.Codifica(nombre);
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << "NOMBRE: " << nombre << endl;
	cout << "LOGIN: " << username;
	
	return 0;
}
