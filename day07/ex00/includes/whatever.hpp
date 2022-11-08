/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 03:29:36 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/08 08:17:38 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <locale>

template <typename T>
void	swap (T &something1, T &something2)
{
	T	tmpsomething;

	tmpsomething = something1;
	something1 = something2;
	something2 = tmpsomething;
}

template<typename T>
const T& max(const T& a, const T& b)
{
	if (a <= b)
		return (b);
	else
		return (a);
}

template<typename T>
T min(const T& a, const T& b)
{
  if (a >= b)
		return (b);
	else
		return (a);
}

#endif
