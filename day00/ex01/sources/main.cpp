/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 20:51:30 by bpoetess          #+#    #+#             */
/*   Updated: 2022/10/28 22:23:37 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include "../includes/Phonebook.hpp"

int main (void)
{
	Phonebook 	phonebook;
	std::string	cmd;

	std::getline(std::cin, cmd);
	while (cmd.compare("EXIT"))
	{
		if (std::cin.eof())
		{
			std::cout << "This program doesn't handle CTRL-D, exit" << std::endl;
			exit (1);
		}
		else if (!cmd.compare("SEARCH"))
			phonebook.printContacts();
		else if (!cmd.compare("ADD"))
			phonebook.putContact();
		else
			std::cout << "ENTER \"EXIT\", \"SEARCH\" OR \"ADD\"" << std::endl;
		cmd.clear();
		std::getline(std::cin, cmd);
	}
	phonebook.~Phonebook();
	exit(0);
}
