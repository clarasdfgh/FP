/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 7
III_RedondearDecimal_Funcs: defina la función Redondea para calcular un número 
real aproximado a un número de cifras decimales. Usar la función potencia.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

/*******************************************************************************
FUNCIÓN POTENCIAENTERA: devuelve la potencia de dos numeros enteros

				USO: Potencia(int base, int exp)
							      BASE	EXPONENTE
			
*******************************************************************************/
int PotenciaEntera(int base, int exp){
	int potencia = 1;
	
	for(int i=0; i < abs(exp); i++){
		potencia *= base;
	}
	
	if (exp < 0){
		potencia = 1/potencia;
	}
	
	return potencia;
}

/*******************************************************************************
FUNCIÓN REDONDEA: devuelve un numero redondeado al número de decimales indicado

				USO: Redondea(double n, int dec)
							  NÚMERO	DECIMALES
							    
				RESTRICCIONES: numero de decimales entero
			
*******************************************************************************/
double Redondea(double n, int dec){
	double multiplicador;
	double redondeado;
	
	multiplicador = PotenciaEntera(10, dec);
	redondeado = round(n * multiplicador);
	redondeado /= multiplicador;
	
	return redondeado;
}

int main (){
	//DECLARACIÓN DE VARIABLES *************************************************
	double n, redondeado;
	int dec;
	
	//ENTRADA DE DATOS *********************************************************
	cout << "Introduzca un numero con decimales: " << endl;
	cin >> n;
	cout << "Introduzca el numero de decimales a redondear: " << endl;
	cin >> dec;
	
	//CALCULOS *****************************************************************
	redondeado = Redondea(n,dec);
	
	//SALIDA DE DATOS **********************************************************
	cout << endl;
	cout << "El numero " << n << " redondeado a " << dec << " decimales es: "
		 << redondeado;
	
	return 0;
}

