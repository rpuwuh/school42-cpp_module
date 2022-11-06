/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:12:42 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/06 18:54:15 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "./AMateria.hpp"
# include "./ICharacter.hpp"

# include <iostream>
# include <string>
# include <locale>


class Character: public ICharacter
{
	private:
		std::string	name;
		AMateria	*pocket[4];
		AMateria	**floor;
		int			floorCapacity;

	public:
		virtual std::string const & getName() const;

		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

		Character(std::string name);

		Character &operator= (Character const &initialCharacter);
		Character(Character const &initialCharacter);
		Character();
		virtual ~Character();

};

#endif
