#include "Visitante.h"

Visitante::Visitante(std::string n) : nombre(n) {}

void Visitante::interactuarConAnimal(const Animal& animal) {
	historialInteracciones.push_back("Interacción con: " + animal.getNombreCientifico());
	std::cout << nombre << " interactuó con " << animal.getNombreCientifico() << std::endl;
}

void Visitante::mostrarHistorial() const {
	std::cout << "Historial de interacciones de " << nombre << ":" << std::endl;
	for (const auto& interaccion : historialInteracciones) {
		std::cout << interaccion << std::endl;
	}
}
