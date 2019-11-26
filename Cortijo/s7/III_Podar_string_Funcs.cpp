/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 7
III_Podar_string_Funcs: escriba la función EliminaUltimos que elimine todos 
los caracteres finales de un string que sean igual a un carácter determinado.

Escriba la función EliminaPrimeros que elimine todos los caracteres iniciales 
de un string que sean igual a un carácter determinado.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

/*******************************************************************************
FUNCIÓN ELIMINAULTIMOS: elimina las instancias de un caracter al final de un 
string
				USO: EliminaUltimos(string cadena, char letra)
							    		 STRING		 CARACTER
				
				RESTRICCIONES: 
				
*******************************************************************************/
string EliminaUltimos(string cadena, char letra){
	string cadena_copia = cadena;
	
	for(int i = cadena_copia.length()-1; i >= 0; i--){
		if(cadena_copia.at(i) == letra){
			cadena_copia.pop_back();
		}
	}
	
	return cadena_copia;
}

/*******************************************************************************
FUNCIÓN ELIMINAPRIMEROS: elimina las instancias de un caracter al principio de 
un string
				USO: EliminaPrimeros(string cadena, char letra)
							    		 STRING		 CARACTER
				
				RESTRICCIONES: 
				
*******************************************************************************/
string EliminaPrimeros(string cadena, char letra){
	string cadena_copia = cadena;
	int tamanio = cadena_copia.length();
	int i;
	
	for(i = 0; i < tamanio-1 && cadena_copia.at(i) == letra; i++){

	}
	
	cadena_copia.erase(0,i);
	
	return cadena_copia;
}

int main(){
	//DECLARACIÓN DE VARIABLES *************************************************
	string cadena;
	string cadena_fin, cadena_ini, cadena_ambas;
	char letra_fin, letra_ini;
	
	//ENTRADA DE DATOS *********************************************************
	cout << "Introduzca un string: " << endl;
	cin >> cadena;
	cout << "Introduzca un caracter que eliminar al principio: " << endl;
	cin >> letra_ini;
	cout << "Introduzca un caracter que eliminar al final: " << endl;
	cin >> letra_fin;
	
	//CALCULOS *****************************************************************
	 cadena_fin = EliminaUltimos(cadena, letra_fin);
	 cadena_ini = EliminaPrimeros(cadena, letra_ini);
	 cadena_ambas = EliminaUltimos(cadena_ini, letra_fin);
	 
	//SALIDA DE DATOS **********************************************************
	cout << endl;
	cout << "La cadena sin el caracter " << letra_fin << " al final es: " 
		 << cadena_fin << endl;
	cout << "La cadena sin el caracter " << letra_ini << " al principio es: " 
		 << cadena_ini << endl;
	cout << "La cadena sin los caracteres " << letra_fin << " al final y "
 		 << letra_ini << " al principio es: " << cadena_ambas;
}
