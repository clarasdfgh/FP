/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 2
I_Interes: Un banco presenta la siguiente oferta. Si se deposita una cantidad 
de euros capital durante un a�o a plazo fijo, se dar� un inter�s dado por la 
variable interes. Realizad un programa que lea una cantidad capital y un 
inter�s interes desde teclado y calcule en una variable total el dinero que se 
tendr� al cabo de un a�o, aplicando la f�rmula:
	
	total = capital + capital*interes/100 

A continuaci�n, el programa debe imprimir en pantalla el valor de la variable
total.Tanto el capital como el inter�s ser�n valores reales. 
Supondremos que el usuario introduce el inter�s como un valor real entre 0 
y 100, es decir, un inter�s del 5,4 % se introducir� como 5.4. 
Tambi�n supondremos que lo introduce correctamente, es decir, que s�lo 
introducir� valores entre 0 y 100. 

Supongamos que queremos modificar la variable original capital con el nuevo 
valor de total. �Es posible hacerlo directamente en la expresi�n de arriba?

		S�, es posible realizar la asignaci�n
			capital = capital + capital*interes/100
		ya que se lee primero el lvalue y luego se asigna al rvalue. Sin 
		embargo, no ser�a conveniente, ya que perdemos el valor del capital
		original para otros posibles calculos

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std; 

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
	double capital;
	double interes;
	double total;	
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca el capital inicial: ";
	cin >> capital;
	cout << "Introduzca el interes: ";
	cin >> interes;
	
	/* C�LCULOS ***************************************************************/
	total = capital + (capital * (interes/100));
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << "El capital con el interes aplicado es de " << total << " euros.";
	
	return 0;
}
