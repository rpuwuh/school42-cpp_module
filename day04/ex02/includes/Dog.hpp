/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:10 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/04 23:44:09 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Animal.hpp"
# include "./Brain.hpp"

#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal
{
	private:
		Brain	*brain;
	protected:

	public:
		void	makeSound(void) const;
		Dog		&operator= (Dog const &anotherDog);
		Dog(Dog const &anotherDog);
		Dog(void);
		virtual ~Dog();

};

#endif
