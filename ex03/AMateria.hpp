/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:52:40 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/27 15:21:29 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_AMATERIA
# define HPP_AMATERIA

#include "ICharacter.hpp"
#include <string>

class AMateria
{
	protected:
	std::string type;

	public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &other);
	AMateria& operator=(const AMateria& other);
	virtual ~AMateria();
	
	std::string const &getType() const; //Returns the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif