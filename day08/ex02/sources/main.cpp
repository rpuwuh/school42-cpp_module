/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 04:56:06 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/08 10:18:40 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

#include <iostream>
#include <iomanip>
#include <vector>
/*
int main()
{
	std::srand(unsigned(std::time(NULL)));
	
	MutantStack<int> mStack;
	mStack.push(std::rand() % 1000);
	mStack.push(0);
	std::cout << mStack.top() << std::endl;
	mStack.pop();
	std::cout << "size: " << mStack.size() << std::endl;
	mStack.push(std::rand() % 1000);
	mStack.push(std::rand() % 1000);
	mStack.push(std::rand() % 1000);
	mStack.push(std::rand() % 1000);
	MutantStack<int>::iterator it = mStack.begin();
	MutantStack<int>::iterator ite = mStack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "size: " << mStack.size() << std::endl;
	MutantStack<int> const const_mstack = mStack;
	MutantStack<int>::const_iterator cit =  const_mstack.begin();
	MutantStack<int>::const_iterator cite = const_mstack.end();
	while (cit != cite)
	{
		std::cout << *cit << std::endl;
		++cit;
	}
	std::cout << "size: " << const_mstack.size() << std::endl;
	std::stack<int> s(mStack);
	return 0;
}
*/
int main()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
