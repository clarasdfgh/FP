/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 7
III_RedondearDecimal_Funcs: defina la funci�n Redondea para calcular un n�mero 
real aproximado a un n�mero de cifras decimales. Usar la funci�n potencia.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

/*******************************************************************************
FUNCI�N POTENCIAENTERA: devuelve la potencia de dos numeros enteros

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
FUNCI�N REDONDEA: devuelve un numero redondeado al n�mero de decimales indicado

				USO: Redondea(double n, int dec)
							  N�MERO	DECIMALES
							    
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
	//DECLARACI�N DE VARIABLES *************************************************
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

