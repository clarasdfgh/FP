//SESIÓN 7 
//8-Sustituir caracter por vector

#include <iostream>
using namespace std;

int main(){
	const int TOPE = 100; 
	const char TERMINADOR = '#';
	char inicial[TOPE];
	char sustitucion[TOPE];
	char sustituido[TOPE];
	char a_borrar;
	int util_ini = -1;
	int util_sust = -1;
	int util_fin = 0;
	
	cout << "Introduzca el vector inicial, la entrada finaliza con #: " << endl;
	do{
		util_ini++;
		cin >> inicial[util_ini];
		
	}while(inicial[util_ini] != '#' && util_ini < TOPE);
	
	cout << "Introduzca la sustitucion, la entrada finaliza con #: " << endl;
	do{
		util_sust++;	
		cin >> sustitucion[util_sust];

	}while(sustitucion[util_sust] != '#' && util_sust < TOPE);
	
	cout << "Introduzca el caracter a borrar: " << endl;
	cin >> a_borrar;
	
	for(int i=0; i<util_ini; i++){
		if(inicial[i] == a_borrar){
			for(int j=0; j<util_sust; j++){
				sustituido[util_fin] = sustitucion[j];
				util_fin++;
			}
		} else{
			sustituido[util_fin] = inicial[i];
			util_fin++;
		}
	}
	
	cout << "\nEl vector final es: ";
	
	for(int k=0; k<util_fin; k++){
		cout << sustituido[k];
	}
	
}
