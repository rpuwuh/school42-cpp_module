/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:24:16 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/07 18:48:27 by bpoetess         ###   ########.fr       */
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
		Form(std::string const name, std::string target, bool isSigned, int gradeRequiredToSign, int gradeRequiredToExecute);
		
		// Destructor
		virtual ~Form();
		
		// Operators
		Form & operator=(const Form &assign);
		
		// Getters / Setters
		std::string const getName() const;
		std::string getTarget() const;
		bool		getIsSigned() const;
		int			getGradeRequiredToSign() const;
		int			getGradeRequiredToExecute() const;

		// Functions
		void	beSigned(Bureaucrat &signingBureaucrat);
		void	beExecuted(Bureaucrat const &inst) const;
		virtual	void execute(Bureaucrat const & executor) const = 0;
		
	private:
		std::string const _name;
		std::string _target;
		bool _isSigned;
		int const _gradeRequiredToSign;
		int const _gradeRequiredToExecute;

};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Form &object);

#endif