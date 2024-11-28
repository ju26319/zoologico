#include "ZoologicoCompleto.h" // Incluir el archivo de cabecera completo

int main() {
	Zoologico zoologico;
	int opcion;
	
	// Crear zonas y agregar al zoológico
	Zona zonaMamiferos("Mamíferos", 5);
	Zona zonaAves("Aves", 5);
	zoologico.agregarZona(zonaMamiferos);
	zoologico.agregarZona(zonaAves);
	
	do {
		DisplayMenu();
		std::cin >> opcion;
		
		switch (opcion) {
		case 1:
			AddAnimal(zoologico);
			break;
		case 2:
			RemoveAnimal(zoologico);
			break;
		case 3:
			zoologico.mostrarZonas(); // Mostrar zonas y animales
			break;
		case 4:
			std::cout << "Saliendo del programa..." << std::endl;
			break;
		default:
			std::cout << "Opción no válida. Intente de nuevo." << std::endl;
		}
	} while (opcion != 4);
	
	return 0;
}
