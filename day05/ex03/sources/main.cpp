/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:12 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/07 19:31:26 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/Intern.hpp"

int	main()
{
	Bureaucrat	depA[] = {Bureaucrat(), Bureaucrat("Siril", 140), Bureaucrat("John", 72), \
		Bureaucrat("Marly", 25), Bureaucrat("Bob", 5)};
	
	Intern	someIntern;
	Form *pnt;
	try
	{
		std::cout << "Intern try to create PresidentialPardonForm" << std::endl;
		pnt = someIntern.makeForm("Presidential Pardon","Silvestr");
		depA->signForm(*pnt);
		depA->executeForm(*pnt);
		delete pnt;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Intern try to create RobotomyRequestForm" << std::endl;
		pnt = someIntern.makeForm("Robotomy Request","Bender");
		depA->signForm(*pnt);
		depA->executeForm(*pnt);
		delete pnt;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Intern try to create ShrubberyCreationForm" << std::endl;
		pnt = someIntern.makeForm("Shrubbery Creation","Fir");
		depA->signForm(*pnt);
		depA->executeForm(*pnt);
		delete pnt;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Intern try to create UnknownForm" << std::endl;
		pnt = someIntern.makeForm("UnknownForm","Fir");
		if (!pnt)
			std::cout << "Null form" << std:: endl;
		else
		{
			depA->signForm(*pnt);
			depA->executeForm(*pnt);
			delete pnt;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
