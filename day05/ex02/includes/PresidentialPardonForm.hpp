/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:41:08 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/07 19:59:04 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Form.hpp"

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

class	Bureaucrat;
class	Form;

class PresidentialPardonForm: public Form
{
	public:
		// Constructors
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const &copy);
		
		PresidentialPardonForm & operator=(const PresidentialPardonForm &assign);
					
		// Functions
		virtual	void execute(Bureaucrat const & executor) const;
		
	private:
		
};

#endif