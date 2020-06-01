/***************************************************************************
FUNDAMENTOS DE PROGRAMACI�N: SESI�N 13

VI_Dinero_Clase: implementar los m�todos siguientes:
	
		bool EsMayor(Dinero otro)
		bool EsMayor(int euros, int centimos)
		bool EsMayor(double cantidad)
		Dinero Incrementa(Dinero cantidad)
		Dinero Decrementa(Dinero cantidad)
		Dinero Modifica(double cantidad)
		Dinero Diferencia(Dinero otro)
		

Clara Mar�a Romero Lara
**************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/////////////////////////////////////////////////////////////////////////////
// La clase "Dinero" representa cantidades monetarias expresadas en dos
// unidades enteras: euros y c�ntimos

class Dinero
{

private:

	// PRE: 0 <= euros
	int euros;  // Num. de euros

	// PRE: 0 <= centimos < 100
	int centimos; // Num. de c�ntimos
	
public:

	/***********************************************************************/
	// Constructor sin argumentos.
	
	Dinero (void) : euros(0), centimos(0)
	{ }
	
	/***********************************************************************/
	// Constructor con argumentos.
	// Ajusta las cantidades para garantizar la validad del campo "centimos"
	// (entre 0 y 99) ya que las otras precondiciones (valores positivos o
	// cero) se garantizan porque son precondicienes del constructor.
	// Recibe:
	//		los_euros, n�m. de euros
	//		los_centimos, el n�m. de c�ntimos
	// PRE:  0 <= euros
	// PRE:  0 <= centimos
	// POST: 0 <= centimos < 100

	Dinero (int los_euros, int los_centimos)
	{
		centimos = los_centimos%100;
		euros    = los_euros + los_centimos/100;
	}

	/***********************************************************************/
	// M�todos Get

	int GetEuros (void)
	{
		return (euros);
	}

	int GetCentimos (void)
	{
		return (centimos);
	}
	
	double GetCantidad (void){
		return euros + (centimos/100.0);
	}
	
	/***********************************************************************/
	// M�todos que modifican el objeto

	void IncrementaEuros (int euros_suman) {
		euros = euros + euros_suman;
	}

	void IncrementaCentimos (int centimos_suman) {
		int total_centimos = centimos + centimos_suman;
		euros    = euros + (total_centimos / 100);
		centimos = total_centimos % 100;

	}
	
	void DecrementaEuros(int euros_restan){
		euros -= euros_restan;
	}
	
	void DecrementaCentimos(int centimos_restan){
		int total_centimos = centimos - centimos_restan;
		int ajuste = 0;
		
		if(total_centimos < 0){
			total_centimos = 100 + centimos- centimos_restan;
			ajuste = -1;
		}
		
		euros    = euros + (total_centimos / 100) + ajuste;
		centimos = total_centimos % 100;
	}
	
	void Incrementa (int euros_suman, int centimos_suman) {
		IncrementaCentimos (centimos_suman);
		IncrementaEuros (euros_suman);
	}
	
	Dinero Incrementa(Dinero cantidad){
		Dinero aux(cantidad.GetEuros(), cantidad.GetCentimos());
		
		aux.IncrementaCentimos(GetCentimos());
		aux.IncrementaEuros(GetEuros());
		
		return aux;
	}
		
	Dinero Decrementa(Dinero cantidad){
		Dinero aux.(cantidad.GetEuros(), cantidad.GetCentimos());
		
		aux.DecrementaCentimos(GetCentimos());
		aux.DecrementaEuros(GetEuros());
		
		return this;
	}
		
	Dinero Modifica(double cantidad){
	
		Dinero mod(cantidad);
		
		if(cantidad >= 0){
			Incrementa(mod);
		} else{
			Decrementa(mod);
		}
		
		return this;
	}
		
	Dinero Diferencia(Dinero otro){
		Modifica(otro);
		
		return this;
	}
		

	/***********************************************************************/
	// M�todos varios

	string ToString (void)
	{
		string cad;
		
		cad = to_string(euros) + ",";
		if (centimos<10) cad = cad+"0"; // CUIDADO CON EL CERO INICIAL!!
		cad = cad + to_string(centimos)+" EUROS";
		return (cad);
	}

	bool EsMayor(Dinero otro){
		return otro.GetCantidad() > GetCantidad();
	}
	
	bool EsMayor(int los_euros, int los_centimos){
		double la_cantidad = los_euros + los_centimos/100;
		
		return la_cantidad > GetCantidad();
	}
	
	bool EsMayor(double cantidad){
		return cantidad > GetCantidad();
	}
};

/////////////////////////////////////////////////////////////////////////////

/***************************************************************************/
/*
	Una sencilla aplicaci�n: programa que solicita un precio ("Dinero") y a
	continuaci�n un incremento mensual ("Dinero").
	Muestra una tabla indicando c�mo aumenta el precio inicial durante un 
	n�mero de meses dado de acuerdo al incremento indicado.
*/

int main()
{	
	cout.setf(ios::fixed);		// Notaci�n de punto fijo para los reales
	cout.setf(ios::showpoint);	// Mostrar siempre decimales 

	// Lectura de precio inicial
	
	double euros, centimos;

	cout << "Introduzca un precio: " << endl;
	do {
		cout << "\tEuros = ";
		cin >> euros;
	} while (euros < 0);

	do {
		cout << "\tCents = ";
		cin >> centimos;
	} while (centimos < 0);
	
	// Crea un dato "Dinero" y rellena los campos con los valores leidos

	Dinero precio_producto (euros, centimos);
	cout << "Precio inicial = " << precio_producto.ToString() << endl;
	
	
	

	
	
	return 0;
}

