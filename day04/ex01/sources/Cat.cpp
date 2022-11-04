/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:10 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/05 00:14:19 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Brain.hpp"

Cat::Cat(Cat const &anotherCat)
{
	std::cout << "Copy Cat constructor has been called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain(*anotherCat.brain);
}

Cat 	&Cat::operator= (Cat const &anotherCat)
{
	*(this->brain) = *(anotherCat.brain);
	return(*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow, meow" << std::endl;
}

Cat::Cat(void)
{
	this->brain = new Brain();
	std::cout << "Default Cat constructor has been called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor has been called" << std::endl;
	delete (this->brain);
}
