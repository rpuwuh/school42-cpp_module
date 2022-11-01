/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:28:14 by bpoetess          #+#    #+#             */
/*   Updated: 2022/10/29 16:42:25 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact()
{
	first_name.clear();
	last_name.clear();
	nickname.clear();
	phone_number.clear();
	darkest_secret.clear();
}

Contact::~Contact()
{
	
}

void Contact::printString(std::string string)
{
	std::string stringTmp;
	int	tmp;

	if (string.length() <= 10)
	{
		tmp = 0;
		while ((tmp++) + string.length() <= 10)
			std::cout << " ";
		std::cout << string;
	}
	else
	{
		stringTmp = string.substr(0,10);
		std::cout << stringTmp;
		stringTmp.clear();
		std::cout << ".";
	}
	std::cout << "|";
}

void Contact::printContact(void)
{
	std::cout <<
		"-------------------------------------------------------------" << std::endl;
	std::cout << "|first_name:\t" << first_name << std::endl;
	std::cout << "|last_name:\t" << last_name << std::endl;
	std::cout << "|nickname: \t" << nickname << std::endl;
	std::cout << "|phone_number:\t" << phone_number << std::endl;
	std::cout << "|darkest_secret:\t" << darkest_secret << std::endl;
	std::cout <<
		"-------------------------------------------------------------" << std::endl;
}

std::string	Contact::getString(void)
{
	std::string	res;

	res.clear();
	std::getline(std::cin, res);
	while (!res.length())
	{
		std::getline(std::cin, res);
		if (std::cin.eof())
		{
			std::cout << "This program doesn't handle CTRL-D, exit" << std::endl;
			exit (1);
		}
	}
	return (res);
}

void Contact::printLittleContact(void)
{
	std::cout << "|";
	printString(first_name);
	printString(last_name);
	printString(nickname);
	std::cout << std::endl;
}

void Contact::putContact(void)
{
	first_name.clear();
	std::cout << "FIRST NAME: ";
	first_name = getString();
	last_name.clear();
	std::cout << "LAST NAME: ";
	last_name = getString();
	nickname.clear();
	std::cout << "NICKNAME: ";
	nickname = getString();
	phone_number.clear();
	std::cout << "PHONE NUMBER: ";
	phone_number = getString();
	darkest_secret.clear();
	std::cout << "DARKEST SECRET: ";
	darkest_secret = getString();
	std::cout << "Contact has been added" << std::endl;
}
