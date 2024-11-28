#include "Animal.h"

// Implementaci�n de la clase Animal
Animal::Animal(std::string nombreC, int ed, double p) : EspecieAnimal(nombreC), edad(ed), peso(p) {}

Animal::~Animal() {}

int Animal::getEdad() const { return edad; }
double Animal::getPeso() const { return peso; }

// Implementaci�n de la clase Mamifero
Mamifero::Mamifero(std::string nombreC, int ed, double p) : Animal(nombreC, ed, p) {}

void Mamifero::mostrarInfo() const {
	std::cout << "Mam�fero - Nombre Cient�fico: " << nombreCientifico << ", Edad: " << edad << ", Peso: " << peso << " kg" << std::endl;
}

// Implementaci�n de la clase Ave
Ave::Ave(std::string nombreC, int ed, double p) : Animal(nombreC, ed, p) {}

void Ave::mostrarInfo() const {
	std::cout << "Ave - Nombre Cient�fico: " << nombreCientifico << ", Edad: " << edad << ", Peso: " << peso << " kg" << std::endl;
}
