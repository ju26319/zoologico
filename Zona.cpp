#include "Zona.h"

// Constructor de la clase Zona
Zona::Zona(std::string n, int max) : nombre(n), maxAnimales(max) {}

void Zona::agregarAnimal(std::shared_ptr<Animal> animal) {
	if (animales.size() < maxAnimales) {
		animales.push_back(animal);
	} else {
		throw std::runtime_error("No se pueden agregar más animales a esta zona.");
	}
}

void Zona::mostrarAnimales() const {
	std::cout << "Animales en la zona " << nombre << ":" << std::endl;
	for (const auto& animal : animales) {
		animal->mostrarInfo();
	}
}

const std::shared_ptr<Animal>& Zona::obtenerAnimal(int index) const {
	if (index < 0 || index >= animales.size()) {
		throw std::out_of_range("Índice fuera de rango.");
	}
	return animales[index];
}
