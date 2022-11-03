/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:13 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/03 18:51:41 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

std::string	ClapTrap::getName(void)
{
	return(this->name);
}

int			ClapTrap::getHp(void)
{
	return(this->hp);
}

int			ClapTrap::getEnergy(void)
{
	return(this->energy);
}

int			ClapTrap::getDamage(void)
{
	return(this->damage);
}

void		ClapTrap::attack(const std::string& target)
{	
	if (this->hp <= 0)
	{
		std::cout << "ClapTrap " << this->name << " seems to be dead" << std::endl;
		return ;
	}
	if (this->energy <= 0)
	{
		std::cout << "ClapTrap " << this->name << " doesn't have enough energy" << std::endl;
		return ;
	}
	this->energy --;
	std::cout << "ClapTrap " << this->name
		<< " attacks " << target
		<< ", causing " << this->damage << " points of damage!"
		<< std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp <= 0)
		std::cout << "ClapTrap " << this->name << " seems to be dead" << std::endl;
	else if (this->hp <= (int) amount)
	{
		this->hp = 0;
		std::cout << "ClapTrap " << this->name <<
		" took " << amount << " damage and now is dead" << std::endl;
	}
	else
	{
		this->hp -= amount;
		std::cout << "ClapTrap " << this->name <<
		" took " << amount << " damage and now has " <<
		this->hp << " hp" << std::endl;
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp <= 0)
	{
		std::cout << "ClapTrap " << this->name << " seems to be dead" << std::endl;
		return ;
	}
	if (this->energy <= 0)
	{
		std::cout << "ClapTrap " << this->name << " doesn't have enough energy" << std::endl;
		return ;
	}
	this->energy --;
	this->hp += amount;
	std::cout << "ClapTrap " << this->name <<
		" repaired " << amount << " hp and now has " <<
		this->hp << " hp" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor now is working, ClapTrap's name is "
		<< name << std::endl;
	this->name = name;
	this->hp = 10;
	this->energy = 10;
	this->damage = 0;
}

ClapTrap::ClapTrap(void)
{
	std::cout << "Default ClapTrap constructor now is working, " << 
		"ClapTrap's name is defaultName" << std::endl;
	this->name = "defaultName";
	this->hp = 10;
	this->energy = 10;
	this->damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor now is working, ClapTrap's name was "
		<< name << std::endl;
}