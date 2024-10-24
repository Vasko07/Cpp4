/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:43:20 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/24 19:33:35 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Animal") {
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) {
	*this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
	if (this != &other)
		type = other.type;
	std::cout << "AAnimal copy constructor called" << std::endl;
	return *this;
}

AAnimal ::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

std::string AAnimal::getType() const {
	return type;
}
