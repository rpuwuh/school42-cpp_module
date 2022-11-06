/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:11:07 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/05 19:45:21 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"

std::string const & AMateria::getType() const
{
	return(this->type);
}

void		AMateria::use(ICharacter &target)
{
	std::cout << "some interaction with a target" << target.getName();
}

AMateria &AMateria::operator= (AMateria const &initialAMateria)
{
	this->type = initialAMateria.type;
	return (*this);
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::AMateria(AMateria const &initialAMateria)
{
	this->type = initialAMateria.type;
}

AMateria::AMateria()
{
	this->type = "undefinedType";
}

AMateria::~AMateria()
{
	
}
