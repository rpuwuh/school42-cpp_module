/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:12:42 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/06 20:08:46 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/Character.hpp"

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	int	i;

	if (!m)
		return ;
	for (i = 0; i < 4 && this->pocket[i] && this->pocket[i] != m; i++);
	if (i == 4 || this->pocket[i] == m)
		return ;
	pocket[i] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	floorCapacity ++;
	AMateria**	tmp = new AMateria*[floorCapacity];
	for(int i = 0; i < floorCapacity - 1; i++)
		tmp[i] = floor[i];
	if (floor)
		delete [] floor;
	floor = tmp;
	floor[floorCapacity] = this->pocket[idx];
	this->pocket[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || !this->pocket[idx])
		return ;
	if (this->pocket[idx]->getType() == "ice")
		std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->pocket[idx]->getType() == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Character &Character::operator= (Character const &initialCharacter)
{
	this->name = initialCharacter.name;
	for (int i = 0; i < 4; i++)
		this->pocket[i] = initialCharacter.pocket[i];
	this->floorCapacity = initialCharacter.floorCapacity;
	if (floorCapacity > 0 && floor)
	{
		this->floor = new AMateria*[this->floorCapacity];
		for (int i = 0; i < this->floorCapacity; i++)
			this->floor[i] = initialCharacter.floor[i];
	}
	else
		this->floor = 0;
	return (*this);
}

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->pocket[i] = 0;
	floorCapacity = 0;
	floor = 0;
}

Character::Character(Character const &initialCharacter)
{
	*this = initialCharacter;
}

Character::Character()
{
	this->name = "defaultName";
	for (int i = 0; i < 4; i++)
		this->pocket[i] = 0;
	floorCapacity = 0;
	floor = 0;
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		if (pocket[i])
			delete pocket[i];
	for(int i = 0; i < floorCapacity; i++)
		delete floor[i];
	delete [] floor;
}
