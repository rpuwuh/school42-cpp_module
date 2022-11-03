/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:10 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/03 19:32:00 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>
#include <cmath>

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

class ClapTrap
{
protected:
	std::string	name;
	int			hp;
	int			energy;
	int			damage;

public:
	std::string	getName(void);
	void		setName(std::string newName);
	void		setHp(int hpNew);
	void		setEnergy(int energyNew);
	void		setDamage(int damageNew);
	int			getHp(void);
	int			getEnergy(void);
	int			getDamage(void);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	ClapTrap(std::string name);
	ClapTrap(void);
	~ClapTrap();

};

#endif
