#include "Visitante.h"

Visitante::Visitante(std::string n) : nombre(n) {}

void Visitante::interactuarConAnimal(const Animal& animal) {
	historialInteracciones.push_back("Interacci�n con: " + animal.getNombreCientifico());
	std::cout << nombre << " interactu� con " << animal.getNombreCientifico() << std::endl;
}

void Visitante::mostrarHistorial() const {
	std::cout << "Historial de interacciones de " << nombre << ":" << std::endl;
	for (const auto& interaccion : historialInteracciones) {
		std::cout << interaccion << std::endl;
	}
}
