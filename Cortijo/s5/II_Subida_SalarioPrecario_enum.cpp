/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 5
II_Subida_SalarioPrecario_enum: programa que lee el valor de la edad y salario 
de una persona. Subid el salario un 4 % si es mayor de 65 o menor de 35 a�os. 
Si adem�s de cumplir la anterior condici�n, tambi�n tiene un salario inferior a 
300 euros, se le subir� otro 3 %, mientras que si su salario es mayor o igual 
que 300 euros pero inferior a 900 euros se le subir� un s�lo el 1.5 %.
Imprimid el resultado por pantalla indicando qu� subidas se han aplicado

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

enum class SubidaSalario{
	edadmayor65,
	edadmenor35,
	sueldomenor300,
	sueldomenor900 
}

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
	const double SUBIDA_EDAD = 0.04;
	const double SUBIDA_SUELDO1 = 0.03;
	const double SUBIDA_SUELDO2 = 0.015;
	int edad;
	double sueldo;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca su edad: ";
	cin >> edad;
	cout << "Introduzca su sueldo actual: ";
	cin >> sueldo;
	
	/* C�LCULOS ***************************************************************/
	
	/* SALIDA DE DATOS ********************************************************/
	switch (SubidaSalario){
		case ()
		
	}
	
}
