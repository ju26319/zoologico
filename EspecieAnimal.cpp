#include "EspecieAnimal.h"

EspecieAnimal::EspecieAnimal(std::string nombreC) : nombreCientifico(nombreC) {}

EspecieAnimal::~EspecieAnimal() {}

std::string EspecieAnimal::getNombreCientifico() const {
	return nombreCientifico;
}
