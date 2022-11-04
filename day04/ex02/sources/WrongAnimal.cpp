/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:10 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/04 18:38:34 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Some wrongAnimal sounds" << std::endl;
}

std::string		WrongAnimal::getType(void) const
{
	return(this->type);
}

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default WrongAnimal constructor has been called" << std::endl;
	this->type = "defaultAnimal";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal destructor has been called" << std::endl;
}
