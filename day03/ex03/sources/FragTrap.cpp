/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:22:14 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/03 22:45:15 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/FragTrap.hpp"

void		FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name
		<< " says:\"gimme high five, guys\"" << std::endl;
}

void		FragTrap::attack(const std::string& target)
{
	if (this->hp <= 0)
	{
		std::cout << "FragTrap " << this->name
			<< " seems to be dead" << std::endl;
		return ;
	}
	if (this->energy <= 0)
	{
		std::cout << "FragTrap " << this->name
			<< " doesn't have enough energy" << std::endl;
		return ;
	}
	this->energy --;
	std::cout << "FragTrap " << this->name
		<< " attacks " << target
		<< ", causing " << this->damage << " points of damage!"
		<< std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap constructor now is working, FragTrap's name is "
		<< this->name << std::endl;
	this->hp = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::FragTrap(void): ClapTrap()
{
	std::cout << "Default FragTrap constructor now is working, FragTrap's name is "
		<< this->name << std::endl;
	this->hp = 100;
	this->energy = 100;
	this->damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor now is working, " << 
		"FragTrap's name was " << this->name << std::endl;
}
