/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 3 OPCIONAL
I_AreaTriangulo: el área A de un triángulo se puede calcular a partir del 
valor de dos de sus lados, a y b, y del ángulo 0 que éstos forman entre sí 
con la fórmula 

	A = 1/2 * a*b * sin(0)
	
Construid un programa que pida al usuario el valor de los dos lados 
(en centímetros), el ángulo que éstos forman (en grados), y muestre el valor 
del área (tenga en cuenta que el argumento de la función sin va en radianes).

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	const double PI = 6 * asin(0.5);
	const double GRAD_TO_RAD = PI / 180;
	double a, b;
	double ang, ang_rad;
	double area;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca los lados a, b (en cm): " << endl;
	cin >> a;
	cin >> b;
	cout << "Introduzca el angulo que forman (en grados): " << endl;
	cin >> ang;

	/* CÁLCULOS ***************************************************************/
	ang_rad = ang * GRAD_TO_RAD;
	
	area = (1.0/2.0) * a * b * sin(ang_rad);
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << "El area es de " << area << " cm cuadrados.";
	
	return 0;
}
