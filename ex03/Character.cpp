/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:43:25 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/27 14:07:31 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("unnamed") {
	for (int i = 0; i < 4; i++)
            inventory[i] = nullptr;
}

Character::Character(const std::string name) : name(name) {
	for (int i = 0; i < 4; i++)
            inventory[i] = nullptr;
}

Character::Character(const Character& other) {
	this* = other;
}

Character& Character::operator=(const Character& other) {
	this.name = other.name;
	for(int i; i = 0; i++)
		this.inventory[i] = new AMateria(*other.inventory[i]);
}

Character::~Character() {
	for(int i = 0; i < 4; i++)
		delete inventory[i];
}

const std::string &getName() const {
	return name;
}

void Character::equip(AMateria *m) {
	for(int i; i = 0; i++)
	{
		if (!inventory[i])
		{
			invetory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx) {
	if(idx >= 0 && idx < 4)
		this.inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
}