/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:41:55 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/02 23:45:52 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>
#include <cmath>

#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed;

std::ostream	&operator<< (std::ostream &os, Fixed const &obj);

class	Fixed {
public:
	Fixed(Fixed const &value);
	Fixed(float const initial_value);
	Fixed(int const initial_value);
	Fixed();
	~Fixed();
	Fixed			&operator= (Fixed const &obj);

	Fixed			&operator+ (Fixed const &obj);
	Fixed			&operator- (Fixed const &obj);
	Fixed			&operator* (Fixed const &obj);
	Fixed			&operator/ (Fixed const &obj);

	Fixed			operator++ ();
	Fixed			operator++ (int);
	Fixed			operator-- ();
	Fixed			operator-- (int);

	static Fixed	&min (Fixed &obj1, Fixed &obj2);
	static Fixed	&max (Fixed &obj1, Fixed &obj2);
	static Fixed	const &min (Fixed const &obj1, Fixed const &obj2);
	static Fixed	const &max (Fixed const &obj1, Fixed const &obj2);

	bool			operator!= (const Fixed &obj);
	bool			operator== (const Fixed &obj);
	bool			operator> (const Fixed &obj);
	bool			operator< (const Fixed &obj);
	bool			operator>= (const Fixed &obj);
	bool			operator<= (const Fixed &obj);

	float			toFloat( void ) const;
	int				toInt( void ) const;
	static int		toRawBits(float x);
	int				getRawBits(void) const;
	void			setRawBits(int const raw);

private:
	static const int fractional = 8;
	int				 value;
};

#endif
