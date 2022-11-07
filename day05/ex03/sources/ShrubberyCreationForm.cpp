/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:19:33 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/07 20:05:50 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/ShrubberyCreationForm.hpp"


class	Bureaucrat;
class	Form;

ShrubberyCreationForm::ShrubberyCreationForm():
	Form("ShrubberyCreationForm", "defautTarget", false, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy):
	Form("ShrubberyCreationForm", copy.getTarget(), false, 145, 137)
{

}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm&assign)
{
	(void) assign;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form("ShrubberyCreationForm", target, false, 145, 137)
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream file;

	try
	{
		this->beExecuted(executor);
		file.open(std::string(this->getTarget() + "_shrubbery").c_str(),
		std::ios::out | std::ios::app);
		if(file.is_open())
		{
			file << TREE << std::endl;
			file.close();
		}
	}
	catch(const std::exception &e)
	{
		throw std::runtime_error(e.what());
	}
}
