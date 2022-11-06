/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:41:08 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/06 19:08:38 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

void	Ice::use(ICharacter& target)
{
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *";
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

Ice &Ice::operator=(Ice const &initialIce)
{
	this->type = initialIce.type;
	return (*this);
}

Ice::Ice(void)
{
	this->type = "ice";
}

Ice::Ice(Ice const &initialIce) : AMateria(initialIce.getType())
{
}

Ice::~Ice()
{
}
