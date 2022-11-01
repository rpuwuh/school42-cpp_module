/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:46:20 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/01 18:49:01 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"

#ifndef HUMANA_HPP
# define HUMANA_HPP

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void		attack(void);
		std::string	getName(void);
		void		setName(std::string new_name);
	private:
		std::string	name;
		Weapon		&weapon;
};

#endif