/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:10 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/04 23:44:13 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Animal.hpp"
# include "./Brain.hpp"

#ifndef CAT_HPP
# define CAT_HPP

class Cat : public Animal
{
	private:
		Brain	*brain;
	protected:

	public:
		void	makeSound(void) const;
		Cat		&operator= (Cat const &anotherCat);
		Cat(Cat const &anotherCat);
		Cat(void);
		virtual ~Cat();

};

#endif
