/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:14:16 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/01 17:42:05 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"


std::string	Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string new_type)
{
	this->type = new_type;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::Weapon()
{
	this->type = "";
}

Weapon::~Weapon()
{

}
