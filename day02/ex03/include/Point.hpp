/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:24:27 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/03 00:15:38 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "./Fixed.hpp"

class Point;

class Point
{
private:
	Fixed	x;
	Fixed	y;

public:
	Point	&operator= (Point const &obj);
	Fixed	getX(void);
	Fixed	getY(void);
	Point(Point &Point);
	Point(float const x, float const y);
	Point();
	~Point();

};

#endif
