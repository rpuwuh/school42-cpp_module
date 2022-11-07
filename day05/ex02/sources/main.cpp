/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:12 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/07 19:43:15 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

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
	std::cout << "------------------------------------" << std::endl;
	Form *form = new ShrubberyCreationForm("Test");
	std::cout << *form << std::endl;
	b.signForm(*form);
	std::cout << *form << std::endl;
	a.signForm(*form);
	a.executeForm(*form);
	std::cout << *form << std::endl;
	a--;
	std::cout << a;
	a.executeForm(*form);
	delete form;
	a++;
	std::cout << std::endl;
	Form *form2 = new RobotomyRequestForm("Test");
	std::cout << *form2 << std::endl;
	b.signForm(*form2);
	std::cout << *form2 << std::endl;
	a.signForm(*form2);
	a.executeForm(*form2);
	a.executeForm(*form2);
	std::cout << *form2 << std::endl;
	a--;
	std::cout << a;
	a.executeForm(*form2);
	delete form2;
	a++;
	std::cout << std::endl;
	Form *form3 = new PresidentialPardonForm("Test");
	std::cout << *form3 << std::endl;
	b.signForm(*form3);
	std::cout << *form3 << std::endl;
	a.signForm(*form3);
	a.executeForm(*form3);
	std::cout << *form3 << std::endl;
	a++;
	std::cout << a;
	a.executeForm(*form3);
	delete form3;
	return (0);
}
