/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:12 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/03 18:17:17 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main()
{
	ClapTrap	trapA;
	ClapTrap	trapB("Aboba");

	trapB.attack(trapA.getName());
	trapA.takeDamage(trapB.getDamage());
	trapA.takeDamage(1);
	trapA.takeDamage(10);
	trapA.takeDamage(10);
	trapB.takeDamage(5);
	trapB.beRepaired(15);
	trapB.beRepaired(0);
	trapB.beRepaired(0);
	trapB.beRepaired(1);
	trapB.beRepaired(0);
	trapB.beRepaired(0);
	trapB.beRepaired(0);
	trapB.beRepaired(0);
	trapB.beRepaired(0);
	trapB.beRepaired(0);
	trapB.beRepaired(0);
	trapB.beRepaired(0);
	trapB.beRepaired(0);
	trapA.attack("test_target");
	trapB.attack("test_target");
}