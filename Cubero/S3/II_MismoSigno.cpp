//SESIÓN 3
//1-Mismo signo multiplicando

#include <iostream>
using namespace std;

int main(){
	int a, b;
	bool son_iguales = true;
	
	cout << "Introduzca a, b: " << endl;
	cin >> a >> b;
	
	if(a*b <= 0){
		son_iguales = false;
	}
	
	if(son_iguales){
		cout << "\nTienen el mismo signo.";
	} else{
		cout << "\nNo tienen el mismo signo";
	}
}
