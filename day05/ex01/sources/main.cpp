/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:12 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/07 17:44:20 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int	main()
{
	Bureaucrat	a("Buro_1", 10);
	Bureaucrat	b("Buro_2", 50);

	std::cout << a << b;
	try
	{
		a--;
		b++;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		b--;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << a << b;
	std::cout << "Try: Bureaucrat c(\"Buro_3\", 500);" << std::endl;
	try
	{
		Bureaucrat c("Buro_3", 500);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	Form form2("Test form", false, 40, 100);
	Form form = form2;
	std::cout << form << std::endl;
	b.signForm(form);
	std::cout << form << std::endl;
	a.signForm(form);
	std::cout << form << std::endl;
	return (0);
}
