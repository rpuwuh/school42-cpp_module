/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:46:20 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/01 18:44:32 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"
#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon)
{
}

std::string	HumanA::getName(void)
{
	return (this->name);
}

void		HumanA::setName(std::string new_name)
{
	this->name = new_name;
}

HumanA::~HumanA()
{
	
}

void		HumanA::attack(void)
{
	std::cout << this->name << " attacks with their "
		<< this->weapon.getType() << std::endl;
}
