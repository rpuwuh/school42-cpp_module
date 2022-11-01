/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:37:58 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/01 20:43:57 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

void	main_func(std::string string)
{
	Harl	karen;

	switch (karen.defineLevel(string))
	{
	case 0:
		std::cout << "[ DEBUG ]" << std::endl;
		karen.complain("DEBUG");
	
	case 1:
		std::cout << "[ INFO ]" << std::endl;
		karen.complain("INFO");
	
	case 2:
		std::cout << "[ WARNING ]" << std::endl;
		karen.complain("WARNING");
	
	case 3:
		std::cout << "[ ERROR ]" << std::endl;
		karen.complain("ERROR");
		break;
		
	default:
		std::cout <<
			"[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		main_func(argv[1]);
	else
		std::cout <<
			"[ Probably complaining about insignificant problems ]" << std::endl;
	exit (0);
}
