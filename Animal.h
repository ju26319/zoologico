#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <memory>
#include <iostream>
#include "EspecieAnimal.h" // Incluir la cabecera de EspecieAnimal

class Animal : public EspecieAnimal {
protected:
	int edad;
	double peso;
	
public:
	Animal(std::string nombreC, int ed, double p);
	virtual ~Animal();
	
	virtual void mostrarInfo() const = 0; // Método virtual puro
	
	int getEdad() const;
	double getPeso() const;
};

class Mamifero : public Animal {
public:
	Mamifero(std::string nombreC, int ed, double p);
	void mostrarInfo() const override;
};

class Ave : public Animal {
public:
	Ave(std::string nombreC, int ed, double p);
	void mostrarInfo() const override;
};

#endif // ANIMAL_H
