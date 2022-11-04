/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:06:29 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/04 23:22:39 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <locale>

class Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain	&operator= (Brain const &anotherBrain);
		Brain(Brain const &anotherBrain);
		Brain(void);
		~Brain();
};

#endif
