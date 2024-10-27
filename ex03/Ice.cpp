/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:14:10 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/27 13:32:12 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}
Ice::~Ice() {}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}

void Ice:use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl
}