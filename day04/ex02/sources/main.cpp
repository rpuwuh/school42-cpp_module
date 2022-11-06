/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:12 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/07 00:01:32 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int	main()
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << std::endl;
		delete j;//should not create a leak
		delete i;
	}		
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	{
		Animal* j = new Dog();
		Animal* i = new Dog();
		std::cout << std::endl;
		(*i) = (*j);
		delete j;//should not create a leak
		delete i;
	}
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	{
		Animal* j = new Cat();
		Animal* i = new Cat();
		std::cout << std::endl;
		(*i) = (*j);
		delete j;//should not create a leak
		delete i;
	}
	{
		Dog	basic;
		{
			std::cout << "----------------------dog tmp-----------------------" << std::endl;
			Dog	tmp = basic;
			tmp.makeSound();
		}
	}
	{
		Cat	basic;
		{
			std::cout << "----------------------cat tmp-----------------------" << std::endl;
			Cat	tmp = basic;
			tmp.makeSound();
		}
	}
	std::cout << std::endl;
	return (0);
}
