/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:37:58 by bpoetess          #+#    #+#             */
/*   Updated: 2022/10/31 21:01:32 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

int main(void)
{
	std::string	string;
	std::string	*stringPTR;

	string = "HI THIS IS BRAIN";
	stringPTR = &string;
	std::string	&stringREF = string;
	std::cout << "string: \t\t\t" << string << std::endl;
	std::cout << "string address: \t\t" << &string <<
		std::endl << std::endl;
	std::cout << "stringPTR: \t\t\t" << stringPTR << std::endl;
	std::cout << "stringPTR value in address: \t" << *stringPTR
		<< std::endl << std::endl;
	std::cout << "stringREF: \t\t\t" << stringREF << std::endl;
	std::cout << "stringREF address: \t\t" << &stringREF << std::endl;
	exit (0);
}
