/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 3
I_Expresiones_Logicas: escribid una expresión lógica que sea verdadera si una 
variable de tipo char llamada letra es mayúscula y falso en otro caso.

Escribid una expresión lógica que sea verdadera si una variable de tipo entero 
llamada edad es mayor o igual que 18 y menor que 67.

Escribid una expresión lógica que nos informe cuando un año es bisiesto. 
Los años bisiestos son aquellos que o bien son divisibles por 4 pero no por 
100, o bien son divisibles por 400.

Escribid  una  expresión  lógica  que  nos  informe  si  el  valor  de  
una  variable double llamada distancia es menor que la constante LIMITE.

Usad una variable lógica que registre si el valor de una variable int es menor 
que otra, otra que informe si son iguales y otra que informe si es mayor. 
Asegúrese que sólo una, y sólo una de las tres trendrá el valor true.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	const int LIMITE = 150;
	char letra;
	int edad, anio;
	int numlimite, a, b;
	bool es_mayus = 0; 
	bool es_adulto = 0;
	bool es_limite = 0;
	bool es_bisiesto = 0;
	bool a_mayor = 0;
	bool b_mayor = 0;
	bool ab_igual = 0;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca:\n\t-una letra\n\t-una edad";
	cout << "\n\t-un anio\n\t-un numero\n\t-dos numeros, a y b"; 
	cout << endl;
	cin >> letra >> edad >> anio >> numlimite >> a >> b;
	
	/* CÁLCULOS ***************************************************************/
	if(letra <= 'Z' && letra >= 'A'){
		es_mayus = true;
	}
	
	if(edad > 18 && edad < 67){
		es_adulto = true;
	}

	if(((anio % 4 == 0) && (anio % 100 != 0)) || (anio % 400 == 0)){
		es_bisiesto = true;
	}
		
	if(numlimite < LIMITE){
		es_limite = true;
	}
	
	if(a > b){
		a_mayor = true;
	} else if(b > a){
		b_mayor = true;
	} else{
		ab_igual = true;
	}
	
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << "Es " << letra << " mayuscula: " << es_mayus << endl;
	cout << "Esta " << edad << " entre 18 y 65: " << es_adulto << endl;
	cout << "Es " << numlimite << " menor que ";
	cout << LIMITE << ": " << es_limite << endl;
	cout << "Es " << anio << " bisiesto: " << es_bisiesto << endl;
	cout << "Siendo a=" << a << ", b=" << b << endl;
	cout << "\n\tEs a mayor: " << a_mayor << "\n\tEs b mayor: " << b_mayor;
	cout << "\n\tSon a, b iguales: " << ab_igual;

	return 0;
}
