/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 20:37:07 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/06 19:08:17 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	private:
	public:
		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
		
		Ice &operator=(Ice const &initialIce);
		Ice(Ice const &initialIce);
		Ice(void);
		~Ice();
};
