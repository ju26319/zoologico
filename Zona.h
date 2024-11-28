#ifndef ZONA_H
#define ZONA_H

#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include "Animal.h" // Incluir la cabecera de Animal

class Zona {
private:
	std::string nombre;
	int maxAnimales;
	std::vector<std::shared_ptr<Animal>> animales;
	
public:
	Zona(std::string n, int max);
	
	void agregarAnimal(std::shared_ptr<Animal> animal);
	void mostrarAnimales() const;
	const std::shared_ptr<Animal>& obtenerAnimal(int index) const;
};

#endif // ZONA_H
