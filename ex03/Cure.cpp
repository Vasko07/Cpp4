/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:33:29 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/27 13:35:10 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

Cure::Cure() : AMateria("cure") {}
Cure::~Cure() {}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}

void Cure:use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl
}