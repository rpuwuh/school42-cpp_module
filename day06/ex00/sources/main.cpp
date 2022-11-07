/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:12 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/07 23:15:34 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>
#include <locale>

int	main(int argc, char **argv)
{
	std::string	s;

	if (argc != 2 || !isprint(argv[1][0]))
		return (0);
	s = argv[1];
	if (s.length() == 1 && !isdigit(argv[1][0]))
		s = std::to_string(static_cast<int>(s[0]));
	{
		int	i;
		std::cout << "char: ";
		try
		{
			i = stoi(s);
			if (i < -128 || i > 127)
				std::cout << "impossible" << std::endl;
			else if (!isprint(static_cast<char> (i)))
				std::cout << "Non displayable" << std::endl;
			else
				std::cout << '\'' << static_cast<char> (i) << '\'' << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "impossible" << std::endl;
		}
	}
	{
		int	i;
		std::cout << "int: ";
		try
		{
			i = stoi(s);
			std::cout << (i) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "impossible" << std::endl;
		}
	}
	{
		float	i;
		std::cout << "float: ";
		try
		{
			i = stof(s);
			std::cout << static_cast<float> (i);
			if (!std::isnan(i) && !std::isinf(i) && i == floor(i))
				std::cout << ".0";
			std::cout << "f" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "impossible" << std::endl;
		}
	}
	{
		double	i;
		std::cout << "float: ";
		try
		{
			i = stod(s);
			std::cout << static_cast<double> (i);
			if (!std::isnan(i) && !std::isinf(i) && i == floor(i))
				std::cout << ".0";
			std::cout << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "impossible" << std::endl;
		}
	}
	return (0);
}
