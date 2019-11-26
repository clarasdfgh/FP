//SESIÓN 1
//4-CÁLCULO DE PI A PARTIR DE ARCO-SENO

#include <cmath>
#include <iostream>
using namespace std;

int main(){
	double arcsen = asin(0.5);
	double pi = 6 * arcsen;
	
	cout << "PI: " << pi; 
}
