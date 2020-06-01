/***************************************************************************
FUNDAMENTOS DE PROGRAMACI�N: SESI�N 13

V_EliminaOcurrencias: a�adir a la clase SecuenciaCaracteres un m�todo que
dado un caracter a_borrar, lo elimine de la secuencia

Clara Mar�a Romero Lara
***************************************************************************/
#include <iostream>
#include <string>
using namespace std;


class SecuenciaCaracteres {

private:
	
    static const int TAMANIO = 50; // N�m.casillas disponibles
    char vector_privado[TAMANIO];

    // PRE: 0<=total_utilizados<TAMANIO

    int total_utilizados; // N�m.casillas ocupadas

public:
	
    /***********************************************************************/
    // Constructor sin argumentos

    SecuenciaCaracteres (void) : total_utilizados (0)
    {}

    /***********************************************************************/
	// Constructor con argumento string
	// Recibe: la_cadena, dato de tipo string que se usa para iniciar el 
	// 		objeto, copiando los caracteres uno a uno desde �ste.
	// Si "la_frase" tiene m�s caracteres que caben en el objeto, se copiar�n 
	//		todos los caracteres que quepan, llen�ndose completamente.
	
	SecuenciaCaracteres (string la_cadena) 	
	{
		total_utilizados = 0;
					
		int longitud_la_cadena = la_cadena.length();
		
		int num_caracteres_a_copiar; 		
		if (longitud_la_cadena <= TAMANIO) 
			num_caracteres_a_copiar = longitud_la_cadena;
		else 
			num_caracteres_a_copiar = TAMANIO;
			
		for (int i=0; i<longitud_la_cadena; i++)
			vector_privado[i] = la_cadena[i];
				
		total_utilizados = num_caracteres_a_copiar;
	}
	
	
    /***********************************************************************/
	// Constructor con dos argumentos:
	// Recibe: 	el_caracter, el car�cter que se va a copiar "las_veces" veces. 
	// 			las_veces, las veces que se va a copiar "el_caracter".
	// Si "las_veces" es mayor que la capacidad de la secuencia, el car�cter 
	// "el_caracter" se copiar� hasta llenar completamente la secuencia. 
	
	SecuenciaCaracteres (char el_caracter, int las_veces) 	
	{							
		int num_veces_a_copiar; 		
		if (las_veces <= TAMANIO) 
			num_veces_a_copiar = las_veces;
		else 
			num_veces_a_copiar = TAMANIO;
			
		for (int i=0; i<num_veces_a_copiar; i++)
			vector_privado[i] = el_caracter;
				
		total_utilizados = num_veces_a_copiar;
	}	
	

    /***********************************************************************/
    // Devuelve el n�mero de casillas ocupadas

    int TotalUtilizados (void)
    {
        return (total_utilizados);
    }

    /***********************************************************************/
    // Devuelve el n�mero de casillas disponibles

    int Capacidad (void)
    {
        return (TAMANIO);
    }

    /***********************************************************************/
    // A�ade un elemento ("nuevo") al vector.
    // PRE: total_utilizados < TAMANIO
    // 		La adici�n se realiza si hay alguna casilla disponible.
    // 		El nuevo elemento se coloca al final del vector.
    // 		Si no hay espacio, no se hace nada.

    void Aniade (char nuevo)
    {
        if (total_utilizados < TAMANIO){
            vector_privado[total_utilizados] = nuevo;
            total_utilizados++;
        }
    }

    /***********************************************************************/
    // Devuelve el elemento de la casilla "indice"
    // PRE: 0 <= indice < total_utilizados

    char Elemento (int indice)
    {
        return (vector_privado[indice]);
    }

    /***********************************************************************/
    // Eliminar el car�cter de la posici�n dada por "indice".
    // Realiza un borrado f�sico (desplazamiento y sustituci�n).
    // PRE: 0 <= indice < total_utilizados

    void Elimina (int indice)
    {
        if ((indice >= 0) && (indice < total_utilizados)) {

            int tope = total_utilizados-1; // posic. del �ltimo

            for (int i = indice ; i < tope ; i++)
                vector_privado[i] = vector_privado[i+1];

            total_utilizados--;
        }
    }

    /***********************************************************************/
    // Compone un string con todos los caracteres que est�n
    // almacenados en la secuencia y lo devuelve.

    string ToString()
    {
        string cadena;

        for (int i=0; i<total_utilizados; i++)
            cadena = cadena + vector_privado[i];

        return (cadena);
    }


	/***********************************************************************/
	// Eliminar todas las instancias del caracter a_borrar
	
	void EliminaOcurrencias (char a_borrar)
	{
		int pos = 0;

		while (pos < total_utilizados){
			if (Elemento(pos) == a_borrar)
				Elimina(pos);
			else
				pos++; // Siguiente posici�n
		}
	}
};

/////////////////////////////////////////////////////////////////////////////


/***************************************************************************/

int main (void)
{
	//DECLARACI�N DE VARIABLES *********************************************
	string la_cadena;
	char a_borrar;
	
	//ENTRADA DE DATOS *****************************************************
	cout << "Introduzca una cadena de caracteres: ";
	getline(cin,la_cadena);	
	cout << "Introduzca un caracter a eliminar de la cadena: ";
	cin >> a_borrar;
	
	//C�LCULOS *************************************************************
	SecuenciaCaracteres sec(la_cadena);
	
	sec.EliminaOcurrencias(a_borrar);
	
	//SALIDA DE DATOS ******************************************************
	cout << endl;
	cout << "CADENA ORIGINAL: \t" << la_cadena << endl;
	cout << "CADENA SIN EL CARACTER [" << a_borrar << "]:\t" << sec.ToString(); 
	
	return 0;
}

/***************************************************************************/

