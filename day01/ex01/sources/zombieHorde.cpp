/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:02:00 by bpoetess          #+#    #+#             */
/*   Updated: 2022/10/31 20:17:48 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*res;

	res = new Zombie[N]();
	for (int i = 0; i < N; i++)
	{
		res[i].setName(name);
		std::cout << "name for " << i << " zombie was set, it's name"
			<< name << std::endl;
	}
	return (res);
}
