/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:15:13 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/24 18:21:16 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.Hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main() {
    // Pruebas básicas con Dog y Cat
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    dog->makeSound();
    cat->makeSound();

    delete dog;  // Llama a los destructores en cadena
    delete cat;  // Llama a los destructores en cadena

    // Prueba de copias profundas
    Dog originalDog;
    originalDog.makeSound();
    originalDog.getBrain().setIdea(0, "I love bones!");

    Dog copyDog = originalDog;  // Constructor de copia
    copyDog.makeSound();
    std::cout << "Original Dog's idea: " << originalDog.getBrain().getIdea(0) << std::endl;
    std::cout << "Copied Dog's idea: " << copyDog.getBrain().getIdea(0) << std::endl;

    return 0;
}

