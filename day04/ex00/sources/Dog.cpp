/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:10 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/04 18:39:04 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

void	Dog::makeSound(void) const
{
	std::cout << "Woof, woof" << std::endl;
}

Dog::Dog(void)
{
	std::cout << "Default Dog constructorr has been called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor has been called" << std::endl;
}
