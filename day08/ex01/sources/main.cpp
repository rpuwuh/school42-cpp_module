/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 04:56:06 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/08 09:42:42 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

#include <iostream>
#include <iomanip>
#include <vector>

int main()
{
	{
		Span sp = Span(3);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(312);
		sp.addNumber(5);
		sp.addNumber(1);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	{
		std::vector<int> vector;
	
		vector.push_back(3);
		vector.push_back(53);
		vector.push_back(25);
		vector.push_back(-51);
		vector.push_back(55);
		vector.push_back(30);
		vector.push_back(125);
	
		Span vecSpan;
		try
		{
			vecSpan.addNumber(vector);
			std::cout << vecSpan.shortestSpan() << std::endl;
			std::cout << vecSpan.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl;
	{
		try
		{
			Span span(5);
			span.addNumber(584);
			span.addNumber(12);
			span.addNumber(653);
			std::cout << span.shortestSpan() << std::endl;
			std::cout << span.longestSpan() << std::endl;
			std::cout << std::endl;
			span.addNumber(53);
		}
		catch (const std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
		std::cout << std::endl;
		try
		{
			Span span(1);
			span.addNumber(12);
			std::cout << span.shortestSpan() << std::endl;
			std::cout << span.longestSpan() << std::endl;
			std::cout << std::endl;
		}
		catch (const std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}
	return (0);
}

/*int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	return 0;
}*/