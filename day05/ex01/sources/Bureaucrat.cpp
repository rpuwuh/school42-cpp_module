/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:22:43 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/06 23:44:02 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat(): _name("defaultName")
{
	_grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy.getName())
{
	_grade = copy.getGrade();
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade > 150)
		throw(std::runtime_error("Bureaucrat::GradeTooHighException"));
	else if (grade < 1)
		throw(std::runtime_error("Bureaucrat::GradeTooLowException"));
	_grade = grade;
}


// Destructor
Bureaucrat::~Bureaucrat()
{

}


// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	_grade = assign.getGrade();
	return *this;
}

Bureaucrat Bureaucrat::operator++()
{
	if (this->_grade - 1 < 1)
		throw(std::runtime_error("Bureaucrat::GradeTooLowException"));
	this->_grade--;
	return (*this);
}

Bureaucrat Bureaucrat::operator++(int)
{
	Bureaucrat	old(*this);
	if (this->_grade - 1 < 1)
		throw(std::runtime_error("Bureaucrat::GradeTooLowException"));
	this->_grade--;
	return(old);
}

Bureaucrat Bureaucrat::operator--()
{
	if (this->_grade + 1 > 150)
		throw(std::runtime_error("Bureaucrat::GradeTooHighException"));
	this->_grade++;
	return (*this);
}

Bureaucrat Bureaucrat::operator--(int)
{
	Bureaucrat	old(*this);
	if (this->_grade + 1 > 150)
		throw(std::runtime_error("Bureaucrat::GradeTooHighException"));
	this->_grade++;
	return (old);
}


// Getters / Setters
std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

std::ostream	&operator<< (std::ostream &os, Bureaucrat const &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (os);
}
