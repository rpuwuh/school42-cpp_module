/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:37:58 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/01 19:36:48 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <locale>

void	initialize(int argc, char **argv,
			std::ifstream &file_in, std::ofstream &file_out)
{
	if (argc < 4 || argc > 4|| !argv[1][0] || !argv[2][0] || !argv[3][0])
		exit (0);
	file_in.open(argv[1], std::ios::in);
	if (!file_in.is_open())
		exit(0);
	file_out.open((std::string(argv[1]) + ".replace").c_str());
	if (!file_out.is_open())
	{
		file_in.close();
		exit(0);
	}
}

void	replace_process(char **argv,
			std::ifstream &file_in, std::ofstream &file_out)
{
	std::string	str;
	int			pos;
	char		c;

	while(!file_in.eof() && file_in >> std::noskipws >> c)
		str += c;
	file_in.close();
	for (int i = 0; i < (int)str.size(); i++)
	{
		pos = str.find(argv[2], i);
		if (pos != -1 && pos == i)
		{
			file_out << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else
			file_out << str[i];
	}
	file_out.close();
}

int main(int argc, char **argv)
{
	std::ifstream	file_in;
	std::ofstream	file_out;

	initialize(argc, argv, file_in, file_out);
	replace_process(argv, file_in, file_out);
	exit (0);
}
