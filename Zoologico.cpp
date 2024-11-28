#include "Zoologico.h"

void Zoologico::agregarZona(const Zona& zona) {
	zonas.push_back(zona);
}

void Zoologico::agregarVisitante(const Visitante& visitante) {
	visitantes.push_back(visitante);
}

void Zoologico::mostrarZonas() const {
	for (const auto& zona : zonas) {
		zona.mostrarAnimales(); // Cambia 'mostrar' por 'mostrarAnimales'
	}
}

const std::shared_ptr<Animal>& Zoologico::obtenerAnimalDeZona(int zonaIndex, int animalIndex) const {
	if (zonaIndex < 0 || zonaIndex >= zonas.size()) {
		throw std::out_of_range("Índice de zona fuera de rango.");
	}
	return zonas[zonaIndex].obtenerAnimal(animalIndex);
}
