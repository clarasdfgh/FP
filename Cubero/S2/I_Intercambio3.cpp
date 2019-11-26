//SESIÓN 2 OPCIONAL
//19-Intercambiar tres variables

#include <iostream>
using namespace std;

int main(){
	int x, y, z;
	int intercambio;
	
	cout << "Introduzca x, y, z: " << endl;
	cin >> x >> y >> z;
	
	cout << "\nX: " << x << "\tY: " << y << "\tZ: " << z;
	
	intercambio = x;
	x = z;
	z = y;
	y = intercambio;
	
	cout << "\n\n--------- INTERCAMBIO ---------";
		cout << "\nX: " << x << "\tY: " << y << "\tZ: " << z; 
}
