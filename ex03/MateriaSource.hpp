/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:29:31 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/27 15:23:13 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_MATERIASOURCE
#define HPP_MATERIASOURCE

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

class MateriaSource : public IMateriaSource {
private:
    AMateria *templates[4];  // Almacena hasta 4 plantillas de materias

public:
    MateriaSource();  // Constructor por defecto
    MateriaSource(const MateriaSource &other);  // Constructor de copia
    MateriaSource &operator=(const MateriaSource &other);  // Operador de asignación
    ~MateriaSource();  // Destructor

    void learnMateria(AMateria *m);  // Método para aprender una nueva materia
    AMateria *createMateria(const std::string &type);  // Método para crear una materia
};

#endif
