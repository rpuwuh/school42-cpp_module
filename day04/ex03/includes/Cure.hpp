/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 20:37:07 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/06 19:08:00 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	private:
	public:
		virtual AMateria*	clone() const;
		virtual void		use(ICharacter& target);
		
		Cure &operator=(Cure const &initialCure);
		Cure(Cure const &initialCure);
		Cure(void);
		~Cure();
};
