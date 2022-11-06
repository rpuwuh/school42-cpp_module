/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:30:40 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/06 19:45:43 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

void		MateriaSource::dropStore(void)
{
	for (int i = 0; i < materiaCount; i++)
		if (list[i])
			delete list[i];
}

void		MateriaSource::learnMateria(AMateria* aMateria)
{
	if (!aMateria)
	{
		std::cout << "Null pointer, nothing to learn!" << std::endl;
		return ;
	}
	if (materiaCount >= 4)
	{
		std::cout << "Too much materia!" << std::endl;
		return ;
	}
	for(int i = 0; i < materiaCount && list[i]; i++)
		if (aMateria->getType() == list[i]->getType())
		{
			std::cout << "Materia " << aMateria->getType() << " alredy added" << std::endl;
			delete aMateria;
			return ;
		}
	list[materiaCount] = aMateria;
	materiaCount++;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < materiaCount && list[i]; i++)
		if (list[i]->getType() == type)
			return (list[i]->clone());
	std::cout << "Unknown materia - " << type << ". Can't create it!" << std::endl;
	return (0);
}

MateriaSource & MateriaSource::operator= (MateriaSource &copingMateriaSource)
{
	this->materiaCount = copingMateriaSource.materiaCount;
	for (size_t i = 0; i < 4; i++)
		list[i] = copingMateriaSource.list[i];	
	return (*this);
}

MateriaSource::MateriaSource(MateriaSource &copingMateriaSource)
{
	this->materiaCount = copingMateriaSource.materiaCount;
	for (size_t i = 0; i < 4; i++)
		list[i] = copingMateriaSource.list[i];
}

MateriaSource::MateriaSource()
{
	materiaCount = 0;
	for (size_t i = 0; i < 4; i++)
		list[i] = 0;
}

MateriaSource::~MateriaSource()
{
	dropStore();
}
