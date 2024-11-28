#ifndef ZOOLOGICO_H
#define ZOOLOGICO_H

#include <vector>
#include <memory>
#include "Zona.h"      // Incluir la cabecera de Zona
#include "Visitante.h" // Incluir la cabecera de Visitante
#include "Animal.h"    // Incluir la cabecera de Animal

class Zoologico {
private:
	std::vector<Zona> zonas;
	std::vector<Visitante> visitantes;
	
public:
	void agregarZona(const Zona& zona);
	void agregarVisitante(const Visitante& visitante);
	void mostrarZonas() const;
	const std::shared_ptr<Animal>& obtenerAnimalDeZona(int zonaIndex, int animalIndex) const;
};

#endif // ZOOLOGICO_H
