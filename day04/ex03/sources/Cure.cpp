/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:41:56 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/06 19:07:43 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() <<"'s wounds *";
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

Cure &Cure::operator=(Cure const &initialCure)
{
	this->type = initialCure.type;
	return (*this);
}

Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(Cure const &initialCure) : AMateria(initialCure.getType())
{
}

Cure::~Cure()
{
}
