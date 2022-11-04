/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:10 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/04 18:38:56 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

void	Cat::makeSound(void) const
{
	std::cout << "Meow, meow" << std::endl;
}

Cat::Cat(void)
{
	std::cout << "Default Cat constructorr has been called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor has been called" << std::endl;
}
