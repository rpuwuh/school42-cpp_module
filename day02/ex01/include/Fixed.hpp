/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:41:55 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/02 19:47:24 by bpoetess         ###   ########.fr       */
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
	float			toFloat( void ) const;
	int				toInt( void ) const;
	int				getRawBits(void) const;
	void			setRawBits(int const raw);

private:
	static const int fractional = 8;
	int				 value;
};

#endif
