/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 2
I_Interes: Un banco presenta la siguiente oferta. Si se deposita una cantidad 
de euros capital durante un año a plazo fijo, se dará un interés dado por la 
variable interes. Realizad un programa que lea una cantidad capital y un 
interés interes desde teclado y calcule en una variable total el dinero que se 
tendrá al cabo de un año, aplicando la fórmula:
	
	total = capital + capital*interes/100 

A continuación, el programa debe imprimir en pantalla el valor de la variable
total.Tanto el capital como el interés serán valores reales. 
Supondremos que el usuario introduce el interés como un valor real entre 0 
y 100, es decir, un interés del 5,4 % se introducirá como 5.4. 
También supondremos que lo introduce correctamente, es decir, que sólo 
introducirá valores entre 0 y 100. 

Supongamos que queremos modificar la variable original capital con el nuevo 
valor de total. ¿Es posible hacerlo directamente en la expresión de arriba?

		Sí, es posible realizar la asignación
			capital = capital + capital*interes/100
		ya que se lee primero el lvalue y luego se asigna al rvalue. Sin 
		embargo, no sería conveniente, ya que perdemos el valor del capital
		original para otros posibles calculos

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std; 

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	double capital;
	double interes;
	double total;	
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca el capital inicial: ";
	cin >> capital;
	cout << "Introduzca el interes: ";
	cin >> interes;
	
	/* CÁLCULOS ***************************************************************/
	total = capital + (capital * (interes/100));
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << "El capital con el interes aplicado es de " << total << " euros.";
	
	return 0;
}
