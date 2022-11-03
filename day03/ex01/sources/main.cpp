/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:12 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/03 19:04:38 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int	main()
{
	{
		ClapTrap origin("Trap_ClapTrap");

		origin.attack("some enemy");
		origin.takeDamage(5);
		origin.beRepaired(15);
		origin.takeDamage(5);
		origin.beRepaired(20);
		origin.takeDamage(35);
		origin.attack("a zombie");
	}
	std::cout << std::endl;
	{
		ScavTrap	scavTrap("Trap_ScavTrap");

		scavTrap.attack("smelling_rat");
		scavTrap.takeDamage(5);
		scavTrap.beRepaired(15);
		scavTrap.takeDamage(5);
		scavTrap.guardGate();
		scavTrap.beRepaired(20);
		scavTrap.takeDamage(35);
		scavTrap.takeDamage(10);
		scavTrap.beRepaired(8);
	}
	return (0);
}