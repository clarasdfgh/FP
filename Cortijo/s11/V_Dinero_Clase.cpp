/*******************************************************************************
FUNDAMENTOS DE LA PROGRAMACIÓN: SESIÓN 11
V_Dinero_Clase:

Clara M Romero Lara
*******************************************************************************/
#include <iostream>
using namespace std;

class Dinero{
private:
	//ATRIBUTOS ****************************************************************
	const int EUR_TO_CENT = 100.0;
	int euros;
	int centimos;
	
public:
	//CONSTRUCTORES ************************************************************
	Dinero(int eur, int cent){		//Constructor eur-cent
		euros = eur;
		centimos = cent;
	}

	//MÉTODOS PÚBLICOS *********************************************************
	void setEur(int eur){
		if(esCorrecto(eur)){
			euros = eur;
		}
	}
	
	void setCent(int cent){
		if (esCorrecto(cent)){
			centimos = cent;
		
			Ajuste();	
		}
	}
	
	double getEur(){		//Devolvemos en double para poder tener más libertad
		return euros;		//a la hora de operar
	}
	
	double getCent(){
		return centimos;
	}
	
	bool esCorrecto(int cantidad){
		return cantidad >= 0;
	}
	
	bool esEuros(int cent){
		return cent >= EUR_TO_CENT;
	}
		
	void sumaEur(int eur){
		euros += eur;
	}
	
	void sumaCent(int cent){
		centimos += cent;
		Ajuste();
	}
	
	void Ajuste(){
		if(esEuros(centimos)){
			euros += centimos / EUR_TO_CENT;
			centimos += centimos % EUR_TO_CENT;
		}
	}
};

int main(){
	/* DECLARACIÓN DE VARIABLES ***********************************************/
	const int EUR_TO_CENT = 100.0;
	double precio_ini, precio_incr;
	int eur, cent; 
	int incr_eur, incr_cent;
	int meses;
	
	/* ENTRADA DE DATOS *******************************************************/
	cout << "Introduzca el precio inicial del producto en euros y centimos: ";
	cin >> eur >> cent;
	cout << "Introduzca el incremento mensual en euros y centimos: ";
	cin >> incr_eur >> incr_cent;
	cout << "Introduzca el numero de meses: ";
	cin >> meses;
	
	precio_ini = eur + (cent / EUR_TO_CENT) + (cent % EUR_TO_CENT)/EUR_TO_CENT;
	precio_incr = incr_eur + (incr_cent / EUR_TO_CENT) + 
				  (incr_cent % EUR_TO_CENT)/EUR_TO_CENT;
	
	double precio_fin[meses];
	
	Dinero precio(eur, cent);
	Dinero incremento(incr_eur, incr_cent);

	
	precio_fin[0] = precio.getEur() + (precio.getCent()/EUR_TO_CENT);
	
	/* CÁLCULOS ***************************************************************/
	for (int i=1; i<=meses; i++){
		precio.sumaCent(incremento.getCent());
		precio.sumaEur(incremento.getEur());

		precio_fin[i] = precio.getEur() + (precio.getCent()/EUR_TO_CENT);
	}
	
	/* SALIDA DE DATOS ********************************************************/
	cout << endl;
	cout << "La progresion de " << precio_ini << "e con un incremento de ";
	cout << precio_incr << "e mensual durante " << meses << " meses es: ";
	
	for(int i=0; i<=meses; i++){
		cout << "\n\t Mes " << i << " --- " << precio_fin[i] << "e ";
	}
	
	return 0;
} 
