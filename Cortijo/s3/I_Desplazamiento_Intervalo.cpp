/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACI�N: SESI�N 3
I_Desplazamiento_Intervalo:  Queremos construir una expresi�n num�rica que 
desplace un entero un n�mero dado de posiciones, pero lo mantenga dentro de un 
intervalo. 

Por ejemplo, si el intervalo fijado es [65;90], el desplazamiento 
es de 3 unidades y el entero a desplazar es el 70, el resultado ser�a 73. 
Si el entero fuese el 89 y el desplazamiento 3 ,  el  resultado  ser�a 92.
Al  no  estar  el 92 dentro  del  intervalo,  se realiza un ciclo de forma que 
el 91 se transformar�a en el 65 y el 92 en el 66.

Se pide construir un programa que lea dos enteros minimo y maximo que 
determinar�n el intervalo [minimo,maximo] (supondremos que el usuario 
introduce como maximo un valor mayor o igual que minimo). 
A continuaci�n el programa leer� un valor entero desplazamiento 
(supondremos que el usuario introduce un valor entre 0 y maximo-minimo). 

Finalmente, el programa leer� un entero a_desplazar (supondremos que el 
usuario introduce un n�mero entre minimo y maximo). El programa sumar� al 
valor leido el desplazamiento y lo convertir� en un entero dentro del intervalo 
[minimo,maximo] tal y como se ha descrito anteriormente

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACI�N DE VARIABLES ***********************************************/
	int min, max;
	int num, despl;
	int nuevo_despl, salida;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca un minimo y un maximo: " << endl;
	cin >> min >> max;
	cout << "Introduzca un numero: " << endl;
	cin >> num;
	cout << "Introduzca las posiciones a desplazar: " << endl;
	cin >> despl;
	
	/* C�LCULOS ***************************************************************/
	if(num+despl > max){
		nuevo_despl = (num+despl) - max - 1;
		salida = min+nuevo_despl;
		
	} else{
		salida = num+despl; 
	}

	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << "El numero " << num << " desplazado " << despl << " posiciones " ;
	cout << "en el intervalo [" << min << ", " << max << "] es " << salida;

	return 0;
}	
