#ifndef ESPECIE_ANIMAL_H
#define ESPECIE_ANIMAL_H

#include <string>

class EspecieAnimal {
protected:
	std::string nombreCientifico;
	
public:
	EspecieAnimal(std::string nombreC);
	virtual ~EspecieAnimal();
	
	std::string getNombreCientifico() const;
};

#endif // ESPECIE_ANIMAL_H
