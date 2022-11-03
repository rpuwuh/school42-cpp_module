/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:37:58 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/03 21:13:52 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

int main(void)
{
	Fixed 		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}

/*void	test(Fixed &a, Fixed &b);

int		main(void)
{
	Fixed a;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );

	test(a, b);
	return 0;
}

void	test(Fixed &a, Fixed &b)
{
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl << std::endl;

	std::cout << "a before ++operator " << a << std::endl;
	std::cout << "unsing ++operator " << ++a << std::endl;
	std::cout << "a after ++operator and before operator++ " << a << std::endl;
	std::cout << "unsing operator++ " << a++ << std::endl;
	std::cout << "a after operator++ and before --operator " << a << std::endl;
	std::cout << "unsing --operator " << --a << std::endl;
	std::cout << "a after --operator and before operator-- " << a << std::endl;
	std::cout << "unsing operator-- " << a-- << std::endl;
	std::cout << "a = "<< a << std::endl << std::endl;

	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl << std::endl;

	std::cout << "min from a and b is " << Fixed::min(a, b) << std::endl;
	std::cout << "max from a and b is " << Fixed::max(a, b) << std::endl << std::endl;

	std::cout << "a > b?\t" << (a > b) << std::endl;
	std::cout << "a >= b?\t"<< (a >= b) << std::endl;
	std::cout << "a < b?\t"<< (a < b) << std::endl;
	std::cout << "a <= b?\t"<< (a <= b) << std::endl;
	std::cout << "a == b?\t"<< (a == b) << std::endl;
	std::cout << "a != b?\t"<< (a != b) << std::endl;
}
*/
