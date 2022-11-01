/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:50:00 by bpoetess          #+#    #+#             */
/*   Updated: 2022/10/31 20:13:03 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

void 	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string newName)
{
	this->name = newName;
}

Zombie::Zombie(void)
{
	
}

Zombie::~Zombie()
{
	std::cout << "Destructor is working, zombie " << this->name <<
		" now is really dead" << std::endl;
}
