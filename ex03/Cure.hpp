/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:32:29 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/27 14:11:25 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_CURE
# define HPP_CURE

#include "AMateria.hpp"

class  Cure : public AMateria {

public:
	Cure();
	~Cure();
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif