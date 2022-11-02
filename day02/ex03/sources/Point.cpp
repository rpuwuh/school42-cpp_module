/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:25:51 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/03 00:12:08 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include "../include/Point.hpp"

Point	&Point::operator= (Point const &obj)
{
	this->x = obj.x;
	this->y = obj.y;
	return (*this);
}

Fixed	Point::getX(void)
{
	return (this->x);
}

Fixed	Point::getY(void)
{
	return (this->y);
}

Point::Point(Point &point)
{
	this->x.setRawBits(point.x.getRawBits());
	this->y.setRawBits(point.y.getRawBits());
}

Point::Point(float const x, float const y)
{
	this->x.setRawBits(Fixed::toRawBits(x));
	this->y.setRawBits(Fixed::toRawBits(y));
}

Point::Point(void)
{
	this->x = 0;
	this->y = 0;
}

Point::~Point()
{
}
