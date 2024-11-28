#include "Menu.h"

void DisplayMenu() {
	std::cout << "=== Men� del Zool�gico ===" << std::endl;
	std::cout << "1. Agregar Animal" << std::endl;
	std::cout << "2. Eliminar Animal" << std::endl;
	std::cout << "3. Mostrar Zonas" << std::endl;
	std::cout << "4. Salir" << std::endl;
	std::cout << "Seleccione una opci�n: ";
}

void AddAnimal(Zoologico& zoologico) {
	std::string nombre;
	int zonaIndex;
	std::cout << "Ingrese el nombre del animal: ";
	std::cin >> nombre;
	std::cout << "Ingrese el �ndice de la zona (0 para Mam�feros, 1 para Aves, etc.): ";
	std::cin >> zonaIndex;
	
	// Aqu� debes crear un tipo espec�fico de animal
	// Por ejemplo, si es un mam�fero:
	zoologico.obtenerZona(zonaIndex).agregarAnimal(std::make_shared<Mamifero>(nombre, /* otros par�metros */));
}

void RemoveAnimal(Zoologico& zoologico) {
	int zonaIndex, animalIndex;
	std::cout << "Ingrese el �ndice de la zona: ";
	std::cin >> zonaIndex;
	std::cout << "Ingrese el �ndice del animal a eliminar: ";
	std::cin >> animalIndex;
	
	zoologico.obtenerZona(zonaIndex).eliminarAnimal(animalIndex); // Aseg�rate de tener este m�todo en Zona
}
