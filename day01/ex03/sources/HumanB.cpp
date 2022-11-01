/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:46:20 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/01 18:51:53 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"
#include "../include/HumanB.hpp"

void		HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void		HumanB::attack(void)
{
	std::cout << this->name << " attacks with their "
		<< this->weapon->getType() << std::endl;
}

std::string	HumanB::getName(void)
{
	return (this->name);
}
void		HumanB::setName(std::string new_name)
{
	this->name = new_name;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = 0;
}

HumanB::~HumanB()
{
	
}
