/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:43:25 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/27 15:11:52 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("unnamed") {
	for (int i = 0; i < 4; i++)
            inventory[i] = NULL;
}

Character::Character(const std::string& name) : name(name) {
	for (int i = 0; i < 4; i++)
            inventory[i] = NULL;
}

Character::Character(const Character& other) {
	*this = other;
}

Character& Character::operator=(const Character& other) {
	if (this != &other){
		this->name = other.name;
		for(int i = 0; i < 4; i++) {
			if(inventory[i] != NULL) 
			{
				delete this->inventory[i];
				inventory[i] = NULL;
			}
			if(other.inventory[i] != NULL)
				this->inventory[i] = other.inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character() {
	for(int i = 0; i < 4; i++){
		if(inventory[i] != NULL) 
		{
			delete this->inventory[i];
			inventory[i] = NULL;
		}
	}
}

const std::string& Character::getName() const {
	return this->name;
}

void Character::equip(AMateria *m) {
	for(int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx) {
	if(idx >= 0 && idx < 4)
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
}