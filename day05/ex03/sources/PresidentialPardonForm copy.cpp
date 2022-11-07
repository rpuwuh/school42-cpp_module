/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:41:08 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/07 20:04:23 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	Form("PresidentialPardonForm", "defaultTarget", false, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy):
	Form("PresidentialPardonForm", copy.getTarget(), false, 25, 5)
{

}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	(void) assign;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form("PresidentialPardonForm", target, false, 25, 5)
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		this->beExecuted(executor);
		std::cout << this->getTarget() << " has been has been pardoned by Zaphod Beeblebrox";
	}
	catch(const std::exception &e)
	{
		throw std::runtime_error(e.what());
	}
}
