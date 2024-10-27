/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:09:49 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/27 14:11:52 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_ICE
# define HPP_ICE

#include "AMateria.hpp"

class  Ice : public AMateria {

public:
	Ice();
	~Ice();
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif