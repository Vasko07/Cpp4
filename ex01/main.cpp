/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:15:13 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/22 21:15:43 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.Hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();  // Imprime "Meow!"
    dog->makeSound();  // Imprime "Woof woof!"
    meta->makeSound(); // Imprime "Animal makes a generic sound"

    delete meta;
    delete dog;
    delete cat;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << " " << std::endl;
    wrongCat->makeSound();  // Imprime "Some generic WrongAnimal sound"
    wrongMeta->makeSound(); // Imprime "Some generic WrongAnimal sound"

    delete wrongMeta;
    delete wrongCat;

    return 0;
}
