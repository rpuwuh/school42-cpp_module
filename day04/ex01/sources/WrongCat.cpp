/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:10 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/04 18:38:44 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

void	WrongCat::makeSound(void) const
{
	std::cout << "Some woem, woeM" << std::endl;
}

WrongCat::WrongCat(void)
{
	std::cout << "Default WrongCat constructor has been called" << std::endl;
	this->type = "Cat";
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor has been called" << std::endl;
}
