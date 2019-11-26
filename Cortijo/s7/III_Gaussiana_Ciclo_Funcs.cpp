/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 7
III_Gaussiana_Ciclo_Funcs: calcular el valor de la función gaussiana en un 
punto arbitrario x con una función.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

/*******************************************************************************
FUNCIÓN GAUSSIANA: devuelve la ordenada de la función Gaussiana para una abscisa
dada.
				USO: Gaussiana(double x, double esp, double desv)
							    ABSCISA	 ESPERANZA	  DESVIACIÓN
				
				RESTRICCIONES: desv >= 0, si no se establece un valor 
							   por defecto 0.5
			
*******************************************************************************/
double Gaussiana(double x, double esp, double desv){
	const double PI = 6 * asin(0.5);
	const double DESV_DEFAULT = 1;
	double ordenada;
	
	if(desv < 0){
		desv = DESV_DEFAULT; 
	}

	ordenada =  exp(-(pow((x - esp) / desv, 2.0)) / 2.0) /
    			(desv * sqrt(2.0*PI));
    			    			
	return ordenada;
}

int main(){
	//DECLARACIÓN DE VARIABLES ************************************************/   
   	const double PI = 6 * asin(0.5);
	double esperanza, desviacion, abscisa, ordenada;
   	double gauss;
   
   
	//ENTRADA DE DATOS *********************************************************	
   	cout << "Introduzca el valor del parametro 'esperanza' : " << endl;
   	cin >> esperanza;
   	
   	cout << "Introduzca el valor del parametro 'desviacion'. " << endl;	
   	do{
		cout << "La desviacion tiene que ser mayor o igual que cero: ";
		cin >> desviacion;
    } while(desviacion <= 0);
    
    cout << "Introduzca el valor de la abscisa: " << endl;
    cin >> abscisa;
   
	//CÁLCULOS *****************************************************************
	ordenada = Gaussiana(abscisa, esperanza, desviacion);
   
   	//SALIDA DE DATOS ***********************************************************
   	cout << endl;
	cout << "El valor de la funcion gaussiana en " << abscisa 
   		<< " es " << ordenada;
   
   return 0;
}
