/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:12 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/07 23:33:14 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>
#include <locale>

struct	Data
{
	std::string	name;
	int			data;
};

uintptr_t serialize(Data* ptr)
{
	uintptr_t	res;
	res = reinterpret_cast<uintptr_t>(ptr);
	return (res);
}

Data* deserialize(uintptr_t raw)
{
	Data*	res;
	res = reinterpret_cast<Data *>(raw);
	return (res);
}

int	main()
{
	Data	data;
	Data*	ptrDeserial;
	uintptr_t ptrSerial;
	
	data.name = "Abobus";
	data.data = 228;

	std::cout << "name: " << data.name <<"\ndata: " << data.data <<std::endl;

	ptrSerial = serialize(&data);
	ptrDeserial = deserialize(ptrSerial);
	
	std::cout << "name: " << ptrDeserial->name << std::endl <<
		"data: " << ptrDeserial->data << std::endl;
	
	
	return 0;
}
