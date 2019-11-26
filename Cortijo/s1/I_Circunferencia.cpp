/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 1
I_Circunferencia: Cread un programa que nos pida la longitud del radio, 
calcule el área del círculo y la  longitud  de  la  circunferencia  
correspondientes,  y  nos  muestre  los  resultados en pantalla. 
Recordad que:

   longitud circunferencia = 2PI * r
   área circulo = PI * r^2

Usad el literal 3.1416 a lo largo del código, cuando se necesite multiplicar 
por PI. Una vez hecho el programa, cambiad las apariciones de 3.1416
por 3.1415927, recompilad y ejecutad

Clara M Romero Lara
*******************************************************************************/


#include <iostream>
#include <cmath>
using namespace std;

int main(){
   double radio;
   double longitud;
   double area;
   
   cout << "Introduzca el radio: ";
   cin >> radio;
   
   longitud = 2 * 3.1415927 * radio;
   area = 3.1415927 * pow(radio,2);
   
   cout << "\nLongitud: " << longitud;
   cout << "\nArea: " << area;
   
   return 0;
}
