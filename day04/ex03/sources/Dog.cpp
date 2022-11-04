/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:10 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/04 23:59:06 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Brain.hpp"

Dog::Dog(Dog const &anotherDog)
{
	std::cout << "Copy Dog constructor has been called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain(*anotherDog.brain);
}

Dog 	&Dog::operator= (Dog const &anotherDog)
{
	*(this->brain) = *(anotherDog.brain);
	return(*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof, woof" << std::endl;
}

Dog::Dog(void)
{
	this->brain = new Brain();
	std::cout << "Default Dog constructor has been called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor has been called" << std::endl;
	delete (this->brain);
}
