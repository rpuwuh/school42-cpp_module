/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:24:16 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/07 17:46:14 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

# include "./Bureaucrat.hpp"

# include <iostream>
# include <string>

class Bureaucrat;

class Form
{
	public:
		// Constructors
		Form();
		Form(const Form &copy);
		Form(std::string const name, bool isSigned, int gradeRequiredToSign, int gradeRequiredToExecute);
		
		// Destructor
		~Form();
		
		// Operators
		Form & operator=(const Form &assign);
		
		// Getters / Setters
		std::string const getName() const;
		bool	getIsSigned() const;
		int		getGradeRequiredToSign() const;
		int		getGradeRequiredToExecute() const;

		// Functions
		void	beSigned(Bureaucrat &signingBureaucrat);
		
	private:
		std::string const _name;
		bool _isSigned;
		int const _gradeRequiredToSign;
		int const _gradeRequiredToExecute;

};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Form &object);

#endif