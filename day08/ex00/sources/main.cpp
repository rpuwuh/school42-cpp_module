/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 04:56:06 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/08 06:46:01 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Easyfind.hpp"

#include <iostream>
#include <iomanip>
#include <vector>


template<typename T>
void random_assigment(const T& var) 
{
	int rndm = std::rand();
	const_cast<T &>(var) = rndm ; 
}

int	main(void)
{
	std::srand(unsigned(std::time(NULL)));
	std::vector<int> vec(10);
	for (size_t i = 0; i < 10; i++)
	{
		random_assigment(vec[i]);
		vec[i] %= 1000;
	}
	
	std::cout << "Vector's elements: " << std::endl;
	for (std::size_t i = 0; i < vec.size(); i++)
		std::cout <<  vec[i] << std::endl;

	try
	{
		int		value;
		std::cin >> value;
		easyfind(vec, value);
		std::cout << "in container" << std::endl;
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	return (0);
}