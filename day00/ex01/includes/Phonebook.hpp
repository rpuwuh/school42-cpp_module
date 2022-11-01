/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:24:43 by bpoetess          #+#    #+#             */
/*   Updated: 2022/10/28 21:31:27 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class Phonebook
{
private:
	Contact	contacts[8];
	int		counter;
public:
	void	printContacts(void);
	void	putContact(void);
	Phonebook();
	~Phonebook();
};

#endif
