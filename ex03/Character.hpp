/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:35:42 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/27 15:43:25 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_CHARACTER
# define HPP_CHARACTER

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

class Character : public ICharacter
{
private:
	std::string name;
	AMateria *inventory[4];
public:
	Character();
	Character(const std::string &name);
	Character(const Character& other);
	Character& operator=(const Character& other);
	~Character();
	const std::string& getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif