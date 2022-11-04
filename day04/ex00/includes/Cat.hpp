/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:10 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/04 18:08:16 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Animal.hpp"

#ifndef CAT_HPP
# define CAT_HPP

class Cat : public Animal
{
	protected:

	public:
		void	makeSound(void) const;
		Cat(void);
		virtual ~Cat();

};

#endif
