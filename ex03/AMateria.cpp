/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:57:19 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/27 15:33:46 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria() : type("Undefined") {}
AMateria::AMateria(std::string const &type) : type(type) {}
AMateria::AMateria(const AMateria &other) {
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


void AMateria::use(ICharacter& target){
    std::cout << "*  " << target.getName() << " *" << std::endl;
}