/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 5
II_Parking_LimitadoDinero: usando como base el programa que soluciona el 
ejercicio 17 escribid un programa que lea la hora actual (minutos y segundos, 
por separado) y una cantidad de dinero (en euros) y nos indique hasta qu� hora 
podemos tener el coche aparcado si vamos apagar con la cantidad especificada.
Implementar los filtros adecuados al problema. Si dispone de 5 euros y 25 
c�ntimos deber� indicar el valor 5.25 cuando se le pida el dinero disponible

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
	int hora, min, seg;
	double dinero;
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca la hora actual: " << endl;
	cin >> hora >> min >> seg;
	cout << "Introduzca la cantidad de dinero en euros: " << endl;
	cin >> dinero;
	
	/* C�LCULOS ***************************************************************/
	
	/* SALIDA DE DATOS ********************************************************/
	cout << "Con " << dinero << " euros, puede estacionar hasta las " << 

}
