/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:27:42 by bpoetess          #+#    #+#             */
/*   Updated: 2022/10/28 21:59:33 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	void printString(std::string string);
	std::string	getString(void);
public:
	void printContact(void);
	void printLittleContact(void);
	void putContact(void);
	Contact();
	~Contact();
};

#endif
