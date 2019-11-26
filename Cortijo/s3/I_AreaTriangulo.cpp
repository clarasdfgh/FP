/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 3 OPCIONAL
I_AreaTriangulo: el �rea A de un tri�ngulo se puede calcular a partir del 
valor de dos de sus lados, a y b, y del �ngulo 0 que �stos forman entre s� 
con la f�rmula 

	A = 1/2 * a*b * sin(0)
	
Construid un programa que pida al usuario el valor de los dos lados 
(en cent�metros), el �ngulo que �stos forman (en grados), y muestre el valor 
del �rea (tenga en cuenta que el argumento de la funci�n sin va en radianes).

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
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

	/* C�LCULOS ***************************************************************/
	ang_rad = ang * GRAD_TO_RAD;
	
	area = (1.0/2.0) * a * b * sin(ang_rad);
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << "El area es de " << area << " cm cuadrados.";
	
	return 0;
}
