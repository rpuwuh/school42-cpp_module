/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:30:40 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/06 19:45:55 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AMateria.hpp"

class	IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria* aMateria) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class	MateriaSource : public IMateriaSource
{
	private:
		int			materiaCount;
		AMateria	*list[4];
		void		dropStore();
	public:
		void		learnMateria(AMateria* aMateria);
		AMateria*	createMateria(std::string const & type);
		MateriaSource & operator= (MateriaSource &copingMateriaSource);
		MateriaSource(MateriaSource &copingMateriaSource);
		MateriaSource();
		~MateriaSource();
};
