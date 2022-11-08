/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 04:53:25 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/08 10:12:50 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string.h>
# include <stack>
# include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
    	typedef typename std::stack<T>::container_type::iterator iterator;
    	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    
    	MutantStack() : std::stack<T>() { };
    	MutantStack(MutantStack &copy) : std::stack<T>()
		{
			*this = copy;
		};
    	virtual ~MutantStack() { };
    
    	MutantStack	&operator=(MutantStack &assigmentStack)
		{
			std::stack<T>::operator=(assigmentStack);
			return (*this);
		};
    
    	iterator	end()
		{
			return(this->c.end());
		};
    	iterator	begin()
		{
			return(this->c.begin());
		};

		const_iterator		begin() const {return this->c.begin();}
		const_iterator		end() const {return this->c.end();}

};

#endif