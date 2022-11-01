/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:37:58 by bpoetess          #+#    #+#             */
/*   Updated: 2022/10/31 20:35:00 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(int argc, char **argv)
{
	Zombie	*zomb;
	int		n;

	if (argc <= 2 || argc >= 4|| !argv[1] || !argv[2])
		exit (0);
	n = atoi(argv[1]);
	zomb = zombieHorde(n, argv[2]);
	for (int i = 0; i < n; i++)
		zomb[i].announce();
	delete [] zomb;
	exit (0);
}
