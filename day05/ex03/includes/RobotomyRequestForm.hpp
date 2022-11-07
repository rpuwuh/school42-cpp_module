/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:35:53 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/07 19:58:52 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Form.hpp"

#ifndef ROBOTOMYREQUESTFORMFORM_HPP
# define ROBOTOMYREQUESTFORMFORM_HPP

class	Bureaucrat;
class	Form;

class RobotomyRequestForm: public Form
{
	public:
		// Constructors
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		RobotomyRequestForm(std::string target);
		
		RobotomyRequestForm & operator=(const RobotomyRequestForm &assign);
					
		// Functions
		virtual	void execute(Bureaucrat const & executor) const;
		
	private:
		
};

#endif