/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:25:16 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/27 15:58:24 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("ice");
me->equip(tmp);
tmp = src->createMateria("cure");
me->equip(tmp);
ICharacter* bob = new Character("bob");
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
return 0;
}

// int main() {
//     // Crear una fuente de materias y aprender algunos tipos
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());

//     // Crear un personaje llamado "me"
//     ICharacter* me = new Character("me");

//     // Crear materias a partir de la fuente y equiparlas en el personaje
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);

//     // Crear un segundo personaje para usar como objetivo
//     ICharacter* bob = new Character("bob");

//     // Usar las materias equipadas en el objetivo "bob"
//     me->use(0, *bob); // Debería disparar un "ice bolt" a bob
//     me->use(1, *bob); // Debería curar las heridas de bob

//     // Limpieza de memoria
//     delete bob;
//     delete me;
//     delete src;

//     return 0;
// }