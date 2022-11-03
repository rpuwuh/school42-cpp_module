/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:22:14 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/03 22:25:11 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap: virtual public ClapTrap
{
private:
	bool	gateMode;
public:
	void		guardGate(void);
	void		attack(const std::string& target);
	ScavTrap(std::string name);
	ScavTrap(void);
	~ScavTrap();
};

#endif
