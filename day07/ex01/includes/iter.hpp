/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 03:29:36 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/08 05:55:11 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <locale>

template <typename T>
void iter(T* array, std::size_t length, void (*func)(const T&))
{
	if (!array || !func)
		return ;
	for (std::size_t i = 0; i < length; )
		func(array[i++]);
}

template<typename T>
void random_assigment(const T& var) 
{
	int rndm = std::rand();
	const_cast<T &>(var) = rndm ; 
}

#endif
