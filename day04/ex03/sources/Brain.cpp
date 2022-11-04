/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:09:07 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/04 23:51:57 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain (Brain const &anotherBrain)
{
	std::cout << "Copy Brain constructor has been called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = anotherBrain.ideas[i];
}

Brain	&Brain::operator= (Brain const &anotherBrain)
{
	if (this == &anotherBrain)
		return (*this);
	for(int i = 0; i < 100; i++)
		this->ideas[i] = anotherBrain.ideas[i];
	return (*this);
}

Brain::Brain(void)
{
	std::cout << "Default Brain constructor has been called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Default Brain destructor has been called" << std::endl;
}
