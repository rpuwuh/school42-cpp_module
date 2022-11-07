/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:26:27 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/07 20:03:23 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

// Constructors
Form::Form(): _name("defaultFormName"), _gradeRequiredToSign(1), _gradeRequiredToExecute(1)
{
	_isSigned = false;
	_target = "defaultTarget";
}

Form::Form(const Form &copy): _name(copy.getName()), _gradeRequiredToSign(1), _gradeRequiredToExecute(1)
{
	_isSigned = copy.getIsSigned();
	_target = copy.getTarget();
}

Form::Form(std::string const name, std::string target, bool isSigned, int gradeRequiredToSign, int gradeRequiredToExecute):
	_name(name), _gradeRequiredToSign(gradeRequiredToSign), _gradeRequiredToExecute(gradeRequiredToExecute)
{
	if (_gradeRequiredToSign > 150 || _gradeRequiredToExecute > 150)
		throw std::runtime_error("Form::GradeTooLowException");
	if (_gradeRequiredToSign < 1 || _gradeRequiredToExecute < 1)
		throw std::runtime_error("Form::GradeTooHighException");
	_isSigned = isSigned;
	_target = target;
}


// Destructor
Form::~Form()
{
}


// Operators
Form & Form::operator=(const Form &assign)
{
	this->_isSigned = assign.getIsSigned();
	this->_target = assign.getTarget();
	return *this;
}


// Getters / Setters
std::string Form::getTarget() const
{
	return _target;
}
std::string const Form::getName() const
{
	return _name;
}
bool Form::getIsSigned() const
{
	return _isSigned;
}
int Form::getGradeRequiredToSign() const
{
	return _gradeRequiredToSign;
}
int Form::getGradeRequiredToExecute() const
{
	return _gradeRequiredToExecute;
}


// Stream operators
std::ostream & operator<<(std::ostream &stream, const Form &object)
{
	stream << "Form " << object.getName();
	if (object.getIsSigned())
		stream << " has been signed ";
	else
		stream << " has not been signed ";
	stream << "minimal grade to sign this form is " << object.getGradeRequiredToSign()
	<< " minimal grade to execute is " << object.getGradeRequiredToExecute()
	<< " target is " << object.getTarget();
	return stream;
}


// Functions
void	Form::beSigned(Bureaucrat &signingBureaucrat)
{
	if (signingBureaucrat.getGrade() > this->getGradeRequiredToSign())
		throw(std::runtime_error("Form::GradeTooLowException"));
	this->_isSigned = true;
}
void	Form::beExecuted(Bureaucrat const &inst) const
{
	if (this->getIsSigned() == false)
		throw std::runtime_error("Form::isNotSigned");
	if (inst.getGrade() > this->getGradeRequiredToExecute())
		throw std::runtime_error("Form::GradeTooLowException");
}
