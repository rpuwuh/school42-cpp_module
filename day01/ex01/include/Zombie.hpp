/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:41:55 by bpoetess          #+#    #+#             */
/*   Updated: 2022/10/31 20:11:52 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class	Zombie;

Zombie*	newZombie(std::string name);
Zombie* zombieHorde( int N, std::string name );

class	Zombie {
public:
	Zombie();
	~Zombie();
	void 	announce(void);
	void	setName(std::string newName);

private:
	std::string	name;

};

#endif
