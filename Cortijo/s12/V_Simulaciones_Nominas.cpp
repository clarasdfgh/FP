/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 12
V_Simulaciones_Nominas: 

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

enum Categoria{
	operario,
	base,
	administrativo,
	directivo
}

class NominaEmpleado{
private:
	/* DATOS MIEMBRO **********************************************************/
	static const double B_OPERARIO = 900;
	static const double B_BASE = 1100;
	static const double B_ADMON = 1200;
	static const double B_DIR = 2000;
	
	static const double H_OPERARIO = 16;
	static const double H_BASE = 23;
	static const double H_ADMON = 25;
	static const double H_DIR = 30;

	int horas;
	int anios;
	
	Categoria categoria;
public:
	/* CONSTRUCTOR ************************************************************/
	NominaEmpleado(int h, int a, int cat){
		switch(puesto){
			case puesto == 0:
    			categoria = Categoria::operativo;
    		break;
			case puesto == 1:
    			categoria = Categoria::base;
    		break;
			case puesto == 2:
    			categoria = Categoria::administrativo;
    		break;case puesto == 3:
    			categoria = Categoria::directivo;
    		break;
		}
	}


	/* MÉTODOS ****************************************************************/

};


int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	int anios, horas, puesto;
	Categoria categoria;

	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca los años en la empresa: ";
	cin >> anios;
	cout << "Introduzca las horas extra: ";
	cin >> horas;
	cout << "Introduzca el puesto: " << endl;
		cout << "\t0-Operario" << endl;
		cout << "\t1-Base" << endl;
		cout << "\t2-Administrativo" << endl;
		cout << "\t3-Directivo" << endl;
	cin >> puesto;
	
	
	/* CÁLCULOS ***************************************************************/
	switch(puesto){
		case puesto == 0:
    		categoria = Categoria::operativo;
    	break;
		case puesto == 1:
    		categoria = Categoria::base;
    	break;
		case puesto == 2:
    		categoria = Categoria::administrativo;
    	break;case puesto == 3:
    		categoria = Categoria::directivo;
    	break;
	}
    
}
	

	
	/* SALIDA DE DATOS ********************************************************/

	
	return 0;
}
