/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:22:31 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/07 18:12:14 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "./Form.hpp"

# include <iostream>
# include <string>

class	Bureaucrat;
class	Form;


std::ostream	&operator<< (std::ostream &os, Bureaucrat const &obj);

class Bureaucrat
{
	private:
		std::string const _name;
		int _grade;

	public:
		// Constructors
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(std::string name, int grade);

		// Destructor
		~Bureaucrat();
		
		// Operators
		Bureaucrat	&operator=(const Bureaucrat &assign);
		Bureaucrat	operator++();
		Bureaucrat	operator++(int);
		Bureaucrat	operator--();
		Bureaucrat	operator--(int);
		
		// Functions
		void		signForm(Form &signingForm);
		void		executeForm(Form const & form);

		// Getters / Setters
		std::string	getName() const;
		int			getGrade() const;

};

#endif