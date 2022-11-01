/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:46:20 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/01 18:51:51 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"

#ifndef HUMANB_HPP
# define HUMANB_HPP

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void		attack(void);
		void		setWeapon(Weapon &weapon);
		std::string	getName(void);
		void		setName(std::string new_name);
	private:
		std::string	name;
		Weapon		*weapon;
};

#endif
