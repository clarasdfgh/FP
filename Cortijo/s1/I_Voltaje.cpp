/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 1
I_Voltaje: Crear un programa que pida un valor de intensidad y resistencia 
e imprima el voltaje correspondiente, según la Ley de Ohm

voltaje = intensidad * resistencia


Clara M Romero Lara
*******************************************************************************/


#include <iostream>
using namespace std;

int main(){
   double intensidad;
   double resistencia;
   double voltaje;
   
   cout << "Introduzca la intensidad: ";
   cin >> intensidad;
   cout << "Introduzca la resistencia: ";
   cin >> resistencia;
   
   voltaje = intensidad * resistencia;
   
   cout << "El voltaje es de " << voltaje << " voltios.";
   
    return 0;
}
