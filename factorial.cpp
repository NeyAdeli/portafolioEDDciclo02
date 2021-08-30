#include <iostream>

using namespace std;

int main() {
	
int i, n;
int fact=1;
	
	cout << "\n Digita el numero que desees conocer su factorial\n" << endl;
		cin >> n;
		
	if(n < 0) {
		fact = 0;
		}
	else if (n == 0) {
		fact = 1;
		}
	else {
		for (i=1; i <= n; i++){
			fact = fact * i;
		}
	}

	cout << "\n El factorial es: \n" << fact << endl;
	cout << "\n Neyla Adeli Santos Sanchez"; 	// se muestra nombre del Estudiante
		return 0;
}
