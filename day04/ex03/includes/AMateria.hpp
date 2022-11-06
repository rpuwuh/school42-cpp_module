/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:11:07 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/06 19:04:20 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include <locale>

class	ICharacter;

class	AMateria
{
	protected:
		std::string	type;

	public:
		std::string const & getType() const; //Returns the materia type
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

		AMateria(std::string const &type);

		AMateria &operator= (AMateria const &initialAMateria);
		AMateria(AMateria const &initialAMateria);
		AMateria();
		virtual ~AMateria();

};

#endif
