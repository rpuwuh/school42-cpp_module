/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:41:55 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/02 19:14:40 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed;

class	Fixed {
public:
	Fixed(Fixed const &value);
	Fixed();
	~Fixed();
	Fixed	&operator = (Fixed const &obj);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	static const int fractional = 8;
	int				 value;
};

#endif
