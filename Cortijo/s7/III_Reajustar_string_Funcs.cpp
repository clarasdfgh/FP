/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 7
III_Reajustar_string_Funcs: tomando como base las funciones escritas en el 
ejercicio 14 escriba las funciones string EliminaUltimosSeparadores (string cad)
y string EliminaPrimerosSeparadores (string cad), que eliminan todos los 
separadores finales e iniciales, respectivamente, de la cadena cad.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

/*****************************************************************************
FUNCIÓN ELIMINAULTIMOSSEPARADORES: elimina los espacios al final de un string

				USO: EliminaUltimosSeparadores(string cadena)
				
				RESTRICCIONES: 
				
*******************************************************************************/
string EliminaUltimosSeparadores(string cadena){
	string cadena_copia = cadena;
	
	for(int i = cadena_copia.length()-1; i >= 0; i--){
		if(isspace(cadena_copia.at(i))){
			cadena_copia.pop_back();
		}
	}
	
	return cadena_copia;
}

/*****************************************************************************
FUNCIÓN ELIMINAPRIMEROSSEPARADORES: elimina los espacios al principio de un
string
				USO: EliminaPrimerosSeparadores(string cadena)
				
				RESTRICCIONES: 
				
*******************************************************************************/
string EliminaPrimerosSeparadores(string cadena){
	string cadena_copia = cadena;
	int tamanio = cadena_copia.length();
	int i;
	
	for(i = 0; i < tamanio-1 && isspace(cadena_copia.at(i)); i++){

	}
	
	cadena_copia.erase(0,i);
	
	return cadena_copia;
}

int main(){
	//DECLARACIÓN DE VARIABLES *************************************************
	string cadena;
	string cadena_ini, cadena_fin, cadena_ambas;
	
	//ENTRADA DE DATOS *********************************************************
	cout << "Introduzca un string:" << endl;
	cin >> cadena;
	
	
	//CÁLCULOS *****************************************************************
	cadena_ini = EliminaPrimerosSeparadores(cadena);
	cadena_fin = EliminaUltimosSeparadores(cadena);
	cadena_ambas = EliminaUltimosSeparadores(cadena_ini);
	
	//SALIDA DE DATOS **********************************************************
	cout << endl;
	cout << "La cadena sin espacios al principio es |" << cadena_ini << "|";
	cout << endl;
	cout << "La cadena sin espacios al final es |" << cadena_fin << "|";
	cout << endl;
	cout << "La cadena sin espacios al principio y al final es |" << cadena_ini 
		 << "|";
		 
	return 0;
}
