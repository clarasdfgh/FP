/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 4
II_ReajustarRenta: cread un programa que lea los datos fiscales de una 
persona, reajuste su renta bruta según el criterio que se indica posteriormente 
e imprima su renta neta final.

	•La renta bruta es la cantidad de dinero íntegra que el trabajador gana.
	•La retención fiscal es el tanto por ciento que el gobierno se queda.
	•La renta neta es la cantidad que le queda al trabajador después de quitarle 
	el porcentaje de retención fiscal
	
Los datos a leer son:
	
	•Si la persona es un trabajador autónomo o no
	•Si es pensionista o no
	•Estado civil
	•Renta bruta (total de ingresos obtenidos)
	•Retención inicial
	
La modificación se hará de la siguiente forma:
	
	•Bajar un 3 % la retención fiscal a los autónomos
	•Para los no autónomos:
		–Se sube un 1 % la retención fiscal a todos los pensionistas
		–Al resto de los trabajadores se les aplica una subida lineal del 2 %.
		Una vez hecha esta subida, se le aplica (sobre el resultado anterior) 
		las siguientes subidas adicionales:	
			>Subir otro 2 % la retención fiscal si la renta bruta es menor 
			de 20.000e 
			>Subir otro 2.5 % la retención fiscal a los casados con renta 
			bruta superior a 20.000e
			>Subir otro 3 % la retención fiscal a los solteros con renta bruta 
			superior a 20.000e 

Una vez calculada la retención final, habrá que aplicarla sobre la renta 
bruta para así obtener la renta final del trabajador.

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	const double AUTONOMOS = 0.03;
	const double PENSIONISTAS = 0.01;
	const double NO_AUTONOMOS = 0.02;
	const double NO_AU_MENOR = 0.02;
	const double NO_AU_CASADOS = 0.025;
	const double NO_AU_SOLTEROS = 0.03;
	const int TOPE_BRUTA = 20000;
	bool es_autonomo, es_casado, es_pensionista;
	double renta_bruta, renta_neta;
	double ret_inicial, ret;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Responda las siguientes preguntas: \t\t1-SI, 0-NO" << endl;
	cout << "\tEs ud. autonomo? " << endl;
	cin >> es_autonomo;
	cout << "\tEs ud. pensionista?" << endl;
	cin >> es_pensionista;
	cout << "\tEsta ud. casado?" << endl;
	cin >> es_casado;
	cout << "Introduzca su renta bruta: " << endl;
	cin >> renta_bruta;
	cout << "Introduzca la retencion anual base: " << endl;
	cin >> ret_inicial;  
	
	/* CÁLCULOS ***************************************************************/
	
	ret = ret_inicial;
	renta_neta = renta_bruta - (renta_bruta * ret/100);
	
	if(es_autonomo){
		ret = ret_inicial - (ret_inicial * AUTONOMOS);
		
	} else{
		
		if(es_pensionista){
			ret = ret_inicial + (ret_inicial * PENSIONISTAS);
			
		} else{
			ret = ret_inicial + (ret_inicial * NO_AUTONOMOS);
			
			if(renta_bruta < TOPE_BRUTA){
				ret = ret_inicial + (ret_inicial * NO_AU_MENOR);	
			}
			
			if(es_casado && renta_bruta > TOPE_BRUTA){
				ret = ret_inicial + (ret_inicial * NO_AU_CASADOS);
			}
			
			if(!es_casado && renta_bruta > TOPE_BRUTA){
				ret = ret_inicial + (ret_inicial * NO_AU_SOLTEROS);
			}
		}
	}
	
	renta_neta = renta_bruta - (renta_bruta * ret/100);
	
	/* SALIDA DE DATOS ********************************************************/
	cout << "Su renta bruta era de " << renta_bruta << " euros. " << endl;
	cout << "Su renta neta es de " << renta_neta << " euros (retencion: ";
	cout << ret << "%)";
	
	return 0;
}
