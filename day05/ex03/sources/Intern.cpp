/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:58:09 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/07 19:30:48 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Intern.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

# include <iostream>
# include <string>

// Constructors
Intern::Intern()
{
}

Intern::Intern(const Intern &copy)
{
	(void) copy;
}


// Destructor
Intern::~Intern()
{
}


// Operators
Intern & Intern::operator=(const Intern &assign)
{
	(void) assign;
	return *this;
}

static Form	*createPresidentialPardonForm(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

static Form	*createRobotomyRequestForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

static Form	*createShrubberyCreationForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeForm(std::string formType, std::string target)
{
	Form	*res = NULL;
	typedef struct	{std::string name; Form	*(*_func)(std::string const &target);} FormTypes;
	std::string	types[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	FormTypes	forms[] =
	{
		{"presidential pardon", &createPresidentialPardonForm},
		{"robotomy request", &createRobotomyRequestForm},
		{"shrubbery creation", &createShrubberyCreationForm}
	};

	for(int i = 0; formType[i]; i++)
		formType[i] = tolower(formType[i]);
	for (int i = 0; i < 3; i++)
	{
		if (types[i] == formType)
		{
			res = forms[i]._func(target);
			std::cout << "Intern creates " << res->getName() << std::endl;
			return (res);
		}
	}
	std::cout << "Intern can`t create the form " << formType << std::endl;
	return (res);
}
