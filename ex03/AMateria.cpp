/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:57:19 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/27 13:08:45 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("Undefined") {}
AMateria::AMateria(std::string const &type) : type(type) {}
AMateria::AMateria(AMateria &other) {
		*this = other;
}
AMateria& AMateria::operator=(const AMateria& other) {
    if (this != &other) {
        this->type = other.type;
        }
    return *this;
}
AMateria::~AMateria() {}

const std::string &AMateria::getType() const {
	return (this->type);
}  //Returns the materia type

AMateria* AMateria::clone() const {}
void AMateria::use(ICharacter& target) {}