/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:50:00 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/02 22:39:22 by bpoetess         ###   ########.fr       */
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
	this->value = obj.getRawBits();
	return (*this);
}


Fixed &Fixed::operator+ (Fixed const &obj)
{
	this->value += obj.getRawBits();
	return (*this);
}

Fixed &Fixed::operator- (Fixed const &obj)
{
	this->value -= obj.getRawBits();
	return (*this);
}

Fixed &Fixed::operator* (Fixed const &obj)
{
	this->value =
		(int) roundf(this->toFloat() * obj.toFloat()
			* (1 << Fixed::fractional));
	return (*this);
}

Fixed &Fixed::operator/ (Fixed const &obj)
{
	this->value =
		(int) roundf(this->toFloat() / obj.toFloat()
			* (1 << Fixed::fractional));
	return (*this);
}



Fixed Fixed::operator++ ()
{
	this->value ++;
	return (*this);
}

Fixed Fixed::operator++ (int)
{
	Fixed	old (*this);
	operator++();
	return (old);
}

Fixed Fixed::operator-- ()
{
	this->value --;
	return (*this);
}

Fixed Fixed::operator-- (int)
{
	Fixed	old (*this);
	operator--();
	return (old);
}



bool Fixed::operator!= (Fixed const &obj)
{
	return (this->getRawBits() != obj.getRawBits());
}

bool Fixed::operator== (Fixed const &obj)
{
	return (this->getRawBits() == obj.getRawBits());
}

bool Fixed::operator> (Fixed const &obj)
{
	return(this->toFloat() > obj.toFloat());
}

bool Fixed::operator< (Fixed const &obj)
{
	return(this->toFloat() < obj.toFloat());
}

bool Fixed::operator>= (Fixed const &obj)
{
	return(this->toFloat()>= obj.toFloat());
}

bool Fixed::operator<= (Fixed const &obj)
{
	return(this->toFloat() <= obj.toFloat());
}



Fixed	&Fixed::min (Fixed &obj1, Fixed &obj2)
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}

Fixed	const &Fixed::min (Fixed const &obj1, Fixed const &obj2)
{
	if (obj1.getRawBits() < obj2.getRawBits())
		return (obj1);
	return (obj2);
}

Fixed	&Fixed::max (Fixed &obj1, Fixed &obj2)
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}

Fixed	const &Fixed::max (Fixed const &obj1, Fixed const &obj2)
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return (obj1);
	return (obj2);
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
	this->setRawBits((int)roundf(initial_value * (1 << Fixed::fractional)));
}

Fixed::Fixed (int const initial_value)
{
	this->setRawBits(initial_value << Fixed::fractional);
}

Fixed::Fixed(Fixed const &inital_fixed)
{
	this->value = inital_fixed.getRawBits();
}

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::~Fixed()
{
	
}
