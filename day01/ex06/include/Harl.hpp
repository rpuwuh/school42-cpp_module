/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:41:55 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/01 20:38:42 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

#ifndef HARL_HPP
# define HARL_HPP

class	Harl {
public:
	Harl();
	~Harl();
	void 	complain(std::string level);
	int		defineLevel(std::string string);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

};

#endif
