#include <iostream>

using namespace std;

int main() {

int n, num;

	cout << "\n Digita un numero entre 0 y 10 \n" << endl;
	cin >> n;

	if (n >= 0 && n <= 10) {
		cout << "\n El numero esta en el rango\n" << endl;
	}
 	else{
	 	cout << "\n Por favor ingresa un numero entre 0 y 10 \n" << endl;
	   	cout << "\n Digita un numero entre 0 y 10 \n" << endl;
		cin >> num;
		if (num>= 0 && num <= 10)
			cout << "\n El numero esta en el rango\n" << endl;
		}
	cout << "\n Neyla Adeli Santos Sanchez"; 	// se muestra nombre del Estudiante
		return 0;
   }

