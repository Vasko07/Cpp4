/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpinilla <gpinilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:37:25 by gpinilla          #+#    #+#             */
/*   Updated: 2024/10/27 14:12:34 by gpinilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_IMATERIASOURCE
#define HPP_IMATERIASOURCE

#include "AMateria.hpp"

class IMateriaSource
{
	public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif