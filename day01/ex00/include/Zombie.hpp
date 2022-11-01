/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:41:55 by bpoetess          #+#    #+#             */
/*   Updated: 2022/10/31 18:57:19 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class	Zombie;

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

class	Zombie {
public:
	Zombie(std::string name);
	~Zombie();
	void announce(void);

private:
	std::string	name;

};

#endif
