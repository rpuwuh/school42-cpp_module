/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:50:00 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/02 22:32:30 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

std::ostream	&operator<< (std::ostream &os, Fixed const &obj)
{
	os << obj.toFloat();
	return (os);
}

Fixed &Fixed::operator= (Fixed const &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = obj.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float	Fixed::toFloat(void) const
{
	return(((float)this->getRawBits()) / (1 << Fixed::fractional));
}

int		Fixed::toInt(void) const
{
	return ((int)this->value >> Fixed::fractional);
}

Fixed::Fixed (float const initial_value)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits((int)roundf(initial_value * (1 << Fixed::fractional)));
}

Fixed::Fixed (int const initial_value)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(initial_value << Fixed::fractional);
}

Fixed::Fixed(Fixed const &inital_fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = inital_fixed.getRawBits();
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
