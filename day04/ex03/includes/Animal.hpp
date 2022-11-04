/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:10 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/05 00:09:29 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include <locale>

class Animal
{
protected:
	std::string	type;

public:
	std::string		getType(void) const;
	virtual void	makeSound(void) const = 0;
	Animal			&operator= (Animal const &anotherAnimal);
	Animal(Animal &anotherAnimal);
	Animal(void);
	virtual ~Animal();

};

#endif
