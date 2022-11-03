/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:22:51 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/03 21:31:37 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

void		ScavTrap::guardGate(void)
{
	this->gateMode = !this->gateMode;
	if (this->gateMode)
		std::cout << "ScavTrap " << this->name
			<< " is now in Gate keeper mode" << std::endl;
	else
		std::cout << "ScavTrap " << this->name
			<< " is now NOT in Gate keeper mode" << std::endl;
}

void		ScavTrap::attack(const std::string& target)
{
	if (this->hp <= 0)
	{
		std::cout << "ScavTrap " << this->name
			<< " seems to be dead" << std::endl;
		return ;
	}
	if (this->energy <= 0)
	{
		std::cout << "ScavTrap " << this->name
			<< " doesn't have enough energy" << std::endl;
		return ;
	}
	this->energy --;
	std::cout << "ScavTrap " << this->name
		<< " attacks " << target
		<< ", causing " << this->damage << " points of damage!"
		<< std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap constructor now is working, ScavTrap's name is "
		<< this->name << std::endl;
	this->hp = 100;
	this->energy = 50;
	this->damage = 20;
	this->gateMode = 0;
}

ScavTrap::ScavTrap(void): ClapTrap()
{
	std::cout << "Default ScavTrap constructor now is working, " << 
		"ScavTrap's name is defaultName" << std::endl;
	this->name = "defaultName";
	this->hp = 100;
	this->energy = 50;
	this->damage = 20;
	this->gateMode = 0;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor now is working, " << 
		"ScavTrap's name was " << this->name << std::endl;
}