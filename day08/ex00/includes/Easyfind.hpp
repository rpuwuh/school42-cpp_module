/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 04:53:25 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/08 06:52:13 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string.h>
# include <vector>
# include <algorithm>

template <typename T>
int	easyfind(T &container, int num)
{
	typename T::const_iterator it;

	if((it = std::find(container.cbegin(), container.cend(), num)) == container.cend())
		throw (std::runtime_error("There is no such accurance in this vector"));
	return (*it);
}

#endif
