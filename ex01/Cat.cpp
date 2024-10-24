/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:08:52 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/24 18:28:45 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.Hpp"

Cat::Cat() : _brain(new Brain) {
    type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {  
    _brain = new Brain(*other._brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other)
    {
        Animal::operator=(other);
        if(_brain)
            delete _brain;
        _brain = new Brain(*other._brain); 
    }
    std::cout << "Cat assignment operator called" << std::endl;
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete _brain;
}

Brain& Cat::getBrain() const{
	return *_brain;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
