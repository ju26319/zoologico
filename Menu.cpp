#include "Menu.h"

void DisplayMenu() {
	std::cout << "=== Menú del Zoológico ===" << std::endl;
	std::cout << "1. Agregar Animal" << std::endl;
	std::cout << "2. Eliminar Animal" << std::endl;
	std::cout << "3. Mostrar Zonas" << std::endl;
	std::cout << "4. Salir" << std::endl;
	std::cout << "Seleccione una opción: ";
}

void AddAnimal(Zoologico& zoologico) {
	std::string nombre;
	int zonaIndex;
	std::cout << "Ingrese el nombre del animal: ";
	std::cin >> nombre;
	std::cout << "Ingrese el índice de la zona (0 para Mamíferos, 1 para Aves, etc.): ";
	std::cin >> zonaIndex;
	
	// Aquí debes crear un tipo específico de animal
	// Por ejemplo, si es un mamífero:
	zoologico.obtenerZona(zonaIndex).agregarAnimal(std::make_shared<Mamifero>(nombre, /* otros parámetros */));
}

void RemoveAnimal(Zoologico& zoologico) {
	int zonaIndex, animalIndex;
	std::cout << "Ingrese el índice de la zona: ";
	std::cin >> zonaIndex;
	std::cout << "Ingrese el índice del animal a eliminar: ";
	std::cin >> animalIndex;
	
	zoologico.obtenerZona(zonaIndex).eliminarAnimal(animalIndex); // Asegúrate de tener este método en Zona
}
