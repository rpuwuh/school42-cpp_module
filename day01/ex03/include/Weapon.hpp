/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:14:16 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/01 17:22:34 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class	Weapon
{
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		std::string	getType(void);
		void		setType(std::string new_type);

	private:
		std::string	type;
};

#endif
