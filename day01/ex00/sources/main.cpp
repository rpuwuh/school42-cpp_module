/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:37:58 by bpoetess          #+#    #+#             */
/*   Updated: 2022/10/31 19:46:39 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(void)
{
	Zombie	*zomb;

	randomChump("Rob");
	zomb = newZombie("allocatedZomb");
	zomb->announce();
	delete(zomb);
	exit (0);
}
