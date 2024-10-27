/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:38:49 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/27 16:02:16 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

// Constructor por defecto
MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        templates[i] = NULL;  // Inicializa el array de plantillas a NULL
    }
}

// Constructor de copia
MateriaSource::MateriaSource(const MateriaSource &other) {
    for (int i = 0; i < 4; ++i) {
        if (other.templates[i] != NULL) {
            templates[i] = other.templates[i]->clone();  // Clona cada materia si existe
        } else {
            templates[i] = NULL;
        }
    }
}

// Operador de asignación
MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
    if (this != &other) { 
        for (int i = 0; i < 4; ++i) {
			if (templates[i]){
				delete templates[i];
				templates[i] = NULL;
			}
        }

        // Copiar el inventario de "other"
        for (int i = 0; i < 4; ++i) {
            if (other.templates[i] != NULL) {
                templates[i] = other.templates[i]->clone();  // Clona cada materia si existe
            }
        }
    }
    return *this;
}

// Destructor
MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; ++i) {
		if (templates[i])
        	delete templates[i];  // Libera la memoria de cada plantilla
    }
}

// Método learnMateria: Aprende una nueva materia si hay espacio disponible
void MateriaSource::learnMateria(AMateria *m) {
    for (int i = 0; i < 4; ++i) {
        if (templates[i] == NULL) {  // Encuentra la primera posición vacía
            templates[i] = m;  // Clona la materia y la almacena
            return;
        }
    }
    // Si todas las posiciones están llenas, no hace nada
}

// Método createMateria: Crea una nueva materia si existe una plantilla con el tipo solicitado
AMateria *MateriaSource::createMateria(const std::string &type) {
    for (int i = 0; i < 4; ++i) {
        if (templates[i] != NULL && templates[i]->getType() == type) {
            return templates[i]->clone();  // Clona y devuelve una nueva instancia de la materia
        }
    }
    return NULL;  // Si no encuentra el tipo, devuelve nullptr
}
