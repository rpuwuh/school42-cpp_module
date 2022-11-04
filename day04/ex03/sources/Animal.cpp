/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:10 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/04 23:55:35 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal &Animal::operator=(Animal const &anotherAnimal)
{
	this->type = anotherAnimal.type;
	return (*this);
}

Animal::Animal(Animal &anotherAnimal)
{
	*this = anotherAnimal;
}

void	Animal::makeSound(void) const
{
	std::cout << "Some Animal sounds" << std::endl;
}

std::string		Animal::getType(void) const
{
	return(this->type);
}

Animal::Animal(void)
{
	std::cout << "Default Animal constructor has been called" << std::endl;
	this->type = "defaultAnimal";
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor has been called" << std::endl;
}
