//SESIÓN 4
//10-Velocidad imputada

#include <iostream>
using namespace std;

int main(){
	const char FIJO = 'F';
	const int MARGEN_F = 5;
	const double MARGEN_F_MAYOR = 0.95;
	const int MARGEN_M = 7;
	const double MARGEN_M_MAYOR =0.93;
	char radar;
	double v_captada, v_imputada;
	
	cout << "Introduzca la velocidad captada: " << endl;
	cin >> v_captada;
	cout << "\nIntroduzca el tipo de radar: " << endl;
	cin >> radar;
	
	if(radar == FIJO){
		if(v_captada <= 100){
			v_imputada = v_captada - MARGEN_F;
			
		} else{
			v_imputada = v_captada * MARGEN_F_MAYOR;
			
		}
			
	} else{
		if(v_captada <= 100){
			v_imputada = v_captada - MARGEN_M;
		
		} else{
			v_imputada = v_captada * MARGEN_M_MAYOR;
		}
	}
	
	cout << "La velocidad imputada es de " << v_imputada << " km/h.";
	
}
