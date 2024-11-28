#ifndef VISITANTE_H
#define VISITANTE_H

#include <string>
#include <vector>
#include <iostream>
#include "Animal.h" // Incluir la cabecera de Animal

class Visitante {
private:
	std::string nombre;
	std::vector<std::string> historialInteracciones;
	
public:
	Visitante(std::string n);
	
	void interactuarConAnimal(const Animal& animal);
	void mostrarHistorial() const;
};

#endif // VISITANTE_H
