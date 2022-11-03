/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:12 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/03 20:25:40 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

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
	std::cout << std::endl;
	{
		FragTrap	fragTrap("Trap_FragTrap");

		fragTrap.highFivesGuys();
		fragTrap.attack("kris_vanuchiy");
		fragTrap.takeDamage(10);
		fragTrap.beRepaired(15);
		fragTrap.takeDamage(5);
		fragTrap.beRepaired(20);
		fragTrap.takeDamage(35);
		fragTrap.takeDamage(10);
		fragTrap.beRepaired(8);
	}
	return (0);
}