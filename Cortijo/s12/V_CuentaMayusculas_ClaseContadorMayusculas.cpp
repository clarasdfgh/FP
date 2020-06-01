/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 12
V_CuentaMayusculas_ClaseContadorMayusculas: crear un programa tal que, dada una 
cadena de caracteres, cuente las instancias de cada mayúscula

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

class ContadorMayusculas{
private:
	/* DATOS MIEMBRO **********************************************************/
	
	
public:
	/* CONSTRUCTOR ************************************************************/
	

	/* MÉTODOS ****************************************************************/
	void IncrementaCuenta(char mayus){
		
	}
	
	int CuantasHay(char mayus){
		
	}
};


int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	const char A = 'A';
	const char Z = 'Z';
	const int TOPE = 100;
	const char TERMINADOR = '.';
	char mayus[TOPE];
	int i = 0;

	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca una serie de caracteres: " << endl;
	cout << "\tUn punto (.) finaliza la entrada de datos."
	cin << mayus[i];
	while(mayus[i] != TERMINADOR && i < TOPE){
		i++
		cin << mayus[i];
	}
	
	/* CÁLCULOS ***************************************************************/
	
	
	/* SALIDA DE DATOS ********************************************************/

	
	return 0;
}
