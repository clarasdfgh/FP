//SESIÓN 5
//19-Valores de la gaussiana

#include <iostream>
#include <cmath>
using namespace std;

int main(){
   double esperanza, desviacion, abscisa, ordenada;
   double min, max, incr;
   int i;
   const double PI = 3.141592;  //  const --> constante (ver Tema 1)
   
   cout << "\nIntroduzca el valor del parametro 'esperanza' : ";
   cin >> esperanza;
   cout << "\nIntroduzca el valor del parametro 'desviacion' : ";
   cin >> desviacion;
   
   while(desviacion < 0){
		cout << "\n\tIntroduzca un valor valido: ";
		cin >> desviacion;
   }
   
   cout << "\nIntroduzca el valor minimo de la abscisa: ";
   cin >> min;
   cout << "\nIntroduzca el valor maximo de la abscisa: ";
   cin >> max;
   
   while(max < min){
   		cout << "\n\tIntroduzca un valor valido: ";
   		cin >> max;
   }
   
   cout << "\nIntroduzca un incremento: ";
   cin >> incr;
   
   abscisa = min;
   i = 0;
   
   while (abscisa <= max){
 		ordenada = exp(-(pow( (abscisa - esperanza)/desviacion  ,  2.0)) / 2.0) /
    	(desviacion * sqrt(2.0*PI));
   
   cout << "\n\nEl valor de la funcion gaussiana en " << abscisa << " es " << ordenada;
   cout << "\n\n";
   
   i++;
   abscisa = min + incr * i;
   }
}
