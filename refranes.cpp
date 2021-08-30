#include <iostream>


int main() { 
	int num;
	std::cout << "ingrese un numero entre 1 y 3 \n ";
	std::cin >> num;
	
	switch(num) {
		case 1:
			std::cout << "Mas vale pajaro en mano que cien volando \n ";
			break;
		case 2:
			std::cout << "Ojos que no ven corazon que no siente \n ";
			break;
		case 3:
			std::cout << "No hay mal que por bien no venga \n ";
			break;
		default:
			std::cout << "Debe ingresar 1, 2 y 3 \n ";
	}
	std::cout << "Neyla Adeli Santos Sanchez"; 	// se muestra nombre del Estudiante
    return 0;	
}
