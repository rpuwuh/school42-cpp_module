/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:10 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/04 18:08:18 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Animal.hpp"

#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal
{
	protected:

	public:
		void	makeSound(void) const;
		Dog(void);
		virtual ~Dog();

};

#endif
