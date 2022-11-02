/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:37:58 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/03 00:20:02 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include "../include/Point.hpp"
#include "./bsp.cpp"

static float sign (Point &p1, Point &p2, Point &p3)
{
    return (((p1.getX() - p3.getX()) * (p2.getY() - p3.getY())
		- (p2.getX() - p3.getX()) * (p1.getY() - p3.getY())).toFloat());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Point	a1, b1, c1, p1;
	float	s1, s2, s3;
    bool 	has_neg, has_pos;

	a1 = a;
	b1 = b;
	c1 = c;
	p1 = point;
    s1 = sign(p1, a1, b1);
    s2 = sign(p1, b1, c1);
    s3 = sign(p1, c1, a1);

    has_neg = (s1 < 0) || (s2 < 0) || (s3 < 0);
    has_pos = (s1 > 0) || (s2 > 0) || (s3 > 0);
    return (!(has_neg && has_pos));

}

int main(void)
{
	Point	a(0, 0);
	Point	b(0, 1);
	Point	c(1, 0);
	Point	p(0, 0);

	std::cout << bsp(a, b, c, p) << std::endl;
}

