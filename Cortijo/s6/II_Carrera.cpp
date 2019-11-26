/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 6
II_Carrera: para  controlar  los  tiempos  que  emplean  los  corredores  de  
una  carrera  popular  se desea disponer de un programa muy sencillo que se irá 
ampliando en sucesivas versiones. 

En esta primera versión el programa empezará pidiendo la hora de inicio de la 
carrera (hora, minuto y segundo) y la distancia. Después, para cada corredor que 
llega a meta (por orden de llegada) se pide el número de dorsal y la hora de 
llegada (hora, minuto y segundo). 

Tras leer estos datos el programa mostrará el tiempo que ha empleado en 
completar la carrera (horas, minutos y segundos) y su ritmo 
(en km/h y en minutos/km). 

El programa finalizará cuando al solicitar el número de dorsal se introduzca 
un valor negativo

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	const int TOPE = 50;
	const int S_TO_M = 60;
	const int M_TO_H = 60;
	const int S_TO_H = S_TO_M * M_TO_H;
	int hora, min, seg;
	int instante_segundos;
	double minutos_totales[TOPE];
	int hora_ll, min_ll, seg_ll;
	int dorsales[TOPE];
	int llegadas[TOPE];
	int tardanza[TOPE];
	double velocidad[TOPE];
	double ritmo[TOPE];
	int util = 0;
	double distancia;
	bool es_h_valida;
	bool es_m_valido;
	bool es_s_valido;
	bool es_valida;
		
	/* ENTRADA DE DATOS *******************************************************/
	do{
		cout << "Introduzca la distancia de la carrera en km: " << endl;
		cin >> distancia;
	} while (distancia < 0);
	
	do{
			cout << endl;
			cout << "Introduzca la hora de inicio de la carrera: " << endl;
			cin >> hora >> min >> seg;
			
			es_h_valida = hora < 24 && hora > 0;
			es_m_valido = min < 60 && min >= 0;
			es_s_valido = seg < 60 && seg >= 0;
			es_valida = es_h_valida && es_m_valido && es_s_valido;
			
	} while (!es_valida);
	
	instante_segundos = hora*S_TO_H + min*S_TO_M + seg;

	cout << "Introduzca los dorsales y la hora de llegada." << endl;
	cin >> dorsales[util];
	
	do{
		do{
			cout << "Introduzca la hora de llegada del dorsal numero " 
				 << dorsales[util] << ": ";
			cin >> hora_ll >> min_ll >> seg_ll;
			
			llegadas[util] = hora_ll*S_TO_H + min_ll*S_TO_M + seg_ll;
			minutos_totales[util] = hora_ll * M_TO_H + min_ll + seg_ll / S_TO_M;
				
		} while(!es_valida || llegadas[util] < instante_segundos);

		util++;
		
		cout << "Un dorsal negativo finaliza la entrada: " << endl;
		cin >> dorsales[util];
	} while (dorsales[util] >= 0 && util < TOPE);

	
	/* CÁLCULOS ***************************************************************/
	for (int i = 0; i < util; i++){
		tardanza[i] = llegadas[i] - instante_segundos;
		
		velocidad[i] = minutos_totales[i] * M_TO_H / distancia;
		ritmo[i] = (S_TO_H / velocidad[i]) / S_TO_M; 
	}
	
	
	
	
	/* SALIDA DE DATOS ********************************************************/
	for (int j = 0; j < util; j++){
		cout << "\nCORREDOR CON DORSAL NUMERO " << dorsales[j];
		cout << "\n\tTiempo empleado: " << tardanza[j];
		cout << "\n\tVelocidad km/h: " << velocidad[j];
		cout << "\n\tRitmo min/km: " << ritmo[j];
		
	}

}


/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 2
I_RitmoVelocidad:  en atletismo se expresa la rapidez de un atleta en 4
términos de ritmo (minutos y segundos por kilómetro) más que en unidades de 
velocidad (kilómetros por hora). Escribid dos programas para convertir entre 
estas dos medidas:

	a)  El primero leerá el ritmo (minutos y segundos, por separado) y 
	mostrará la velocidad (kilómetros por hora).
	b)  El segundo leerá la velocidad (kilómetros por hora) y mostrará el 
	ritmo (minutos y segundos).

Clara M Romero Lara
*****************************************************************************
#include <iostream>
using namespace std;

//PROGRAMA A
int main(){
	// DECLARACIÓN DE VARIABLES ***********************************************
	const int S_TO_M = 60;
	const int M_TO_H = 60;
	const int S_TO_H = 3600;
	double minutos, segundos;
	double minutos_totales;
	double velocidad;
	
	// ENTRADA DE DATOS *******************************************************
	cout << "Introduzca los minutos: ";
	cin >> minutos;
	cout << "Introduzca los segundos: ";
	cin >> segundos;
	
	// CÁLCULOS ***************************************************************
	minutos_totales = minutos + (segundos / S_TO_M);
	velocidad = M_TO_H / minutos_totales; 
	
	
	// SALIDA DE DATOS ********************************************************
	cout << endl;
	cout << "La velocidad es " << velocidad << " km/h.";
	
	return 0;
}


/*PROGRAMA B
int main(){
	//DECLARACIÓN DE VARIABLES ***********************************************
	const int S_TO_M = 60;
	const int S_TO_H = 3600;
	double velocidad;
	double ritmo;
	
	//ENTRADA DE DATOS *******************************************************
	cout << "Introduzca la velocidad ";
	cin >> velocidad;
	
	// CÁLCULOS ***************************************************************
	ritmo = (S_TO_H/velocidad) / S_TO_M;
	
	// SALIDA DE DATOS ********************************************************
	cout << endl;
	cout << "El ritmo es " << ritmo << " min/km.";
	
	return 0;
}*/


