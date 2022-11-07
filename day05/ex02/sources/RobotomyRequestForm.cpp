/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:35:53 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/07 20:04:26 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
	Form("RobotomyRequestForm", "defautTarget", false, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy):
	Form("RobotomyRequestForm", copy.getTarget(), false, 72, 45)
{

}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	(void) assign;
	return *this;
}

					
RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form("RobotomyRequestForm", target, false, 72, 45)
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		this->beExecuted(executor);
		std::cout << "Some drilling noizes "
		<< this->getTarget() << " has been robotomized successfully 50%% of the time";
	}
	catch(const std::exception &e)
	{
		throw std::runtime_error(e.what());
	}
}
