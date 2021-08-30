#include <iostream>

using namespace std;

int main() {

	double x;
	double y;
	
	cout << " *** Calcula operaciones aritmeticas de dos numeros *** \n ";

	cout << "inserte un numero: ";
	cin >> x;
	
	cout << "inserte otro numero: ";
	cin >> y;
	
	cout << "suma: " << x + y << endl;
	cout << "resta: " << x - y << endl;
	cout << "multiplicacion: " << x * y << endl;
	cout << "division: " << x / y << endl;
	
	int z = x;
	int w = y;
	cout << "Residuo de division: " << z % w << endl;
	
	++x;
	++y;
	cout << "Incremento en uno: " << "x: " << x << " y: " << y << endl;
		
 	--x;
	--y;
	cout << "Decremento en uno: " << "x: " << x << " y: " << y << endl;
	
	return 0;
}
