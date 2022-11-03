/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:22:14 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/03 22:34:46 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"
#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string	name;
public:
	void	attack(const std::string& target);
	void	whoAmI(void);
	DiamondTrap(std::string name);
	DiamondTrap(void);
	~DiamondTrap();
};

#endif
