/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:15:13 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/24 19:35:54 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.Hpp"
#include <iostream>

int main() {

    // AAnimal animal;
    const AAnimal* dog = new Dog();
    const AAnimal* cat = new Cat();
    std::cout << "Dog is of type: " << dog->getType() << std::endl;
    std::cout << "Cat is of type: " << cat->getType() << std::endl;

    dog->makeSound();  // Imprime: Woof woof!
    cat->makeSound();  // Imprime: Meow!

    delete dog;
    delete cat;

    const AAnimal* animals[4];

    for (int i = 0; i < 2; i++) {
        animals[i] = new Dog();
    }

    for (int i = 2; i < 4; i++) {
        animals[i] = new Cat();
    }

    for (int i = 0; i < 4; i++) {
        animals[i]->makeSound();  // Cada animal hace su sonido correspondiente
    }

    for (int i = 0; i < 4; i++) {
        delete animals[i];
    }

    return 0;
}


