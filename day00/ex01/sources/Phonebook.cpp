/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:22:27 by bpoetess          #+#    #+#             */
/*   Updated: 2022/10/29 15:47:14 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include "../includes/Phonebook.hpp"

Phonebook::Phonebook(void)
{
	counter = 0;
}

Phonebook::~Phonebook(void)
{

}

void	Phonebook::printContacts(void)
{
	std::string	stringTemp;
	int			i;

	std::cout <<
		"------------------------------------------------" << std::endl;
	i = 0;
	while (i < counter)
	{
		std::cout << "|" << "         " << i;
		contacts[i++].printLittleContact();
	}
	std::cout <<
		"------------------------------------------------" << std::endl;
	if (!counter)
		return ;
	std::cout << "ENTER NUMBER: ";
	std::getline(std::cin, stringTemp);
	i = atoi(stringTemp.c_str());
	if (i > counter - 1 || i < 0 || (i == 0 && stringTemp.find_first_of('0', 0)))
		std::cout << "Wrong number" << std::endl;
	else
		contacts[i].printContact();
}

void	Phonebook::putContact(void)
{
	if (counter == 8)
	{
		contacts[0] = contacts[1];
		contacts[1] = contacts[2];
		contacts[2] = contacts[3];
		contacts[3] = contacts[4];
		contacts[4] = contacts[5];
		contacts[5] = contacts[6];
		contacts[6] = contacts[7];
		contacts[7].putContact();
	}
	else if (counter < 8)
	{
		contacts[counter].putContact();
		counter ++;
	}
	else
		std::cerr << "Critical error" << std::endl;
}
