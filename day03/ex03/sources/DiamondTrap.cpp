/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:22:14 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/03 22:52:54 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am DiamondTrap named " << this->name
	<< "\t"
	<< "I am also named " << this->ClapTrap::name
	<< std::endl;
}
	
DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "Default DiamondTrap constructor now is working, " << 
		"DiamondTrap's name is " << name << std::endl;
	ClapTrap::name = name + (std::string)"_clap_name";
	this->name = name;
	this->hp = 100;
	this->energy = 50;
	this->damage = 30;
}

DiamondTrap::DiamondTrap(void): ClapTrap()
{
	std::cout << "Default DiamondTrap constructor now is working, " << 
		"DiamondTrap's name is defaultName" << std::endl;
	ClapTrap::name = (std::string)"defaultName" + (std::string)"_clap_name";
	this->name = "defaultName";
	this->hp = 100;
	this->energy = 50;
	this->damage = 30;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor now is working, " << 
		"DiamondTrap's name was " << this->name << std::endl;
}
