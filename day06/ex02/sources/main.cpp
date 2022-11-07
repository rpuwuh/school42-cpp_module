/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:12 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/08 00:39:17 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>
#include <locale>

class Base
{
public:
	virtual ~Base(){};
	
};

class A: public Base {	~A(){};};
class B: public Base {	~B(){};};
class C: public Base {	~C(){};};

Base* generate(void)
{
	int	rand;

	rand = std::rand() % 3;
	if (rand == 0)
		return (new A);
	else if (rand == 1)
		return (new B);
	else
		return (new C);
	return NULL;
}

void identify(Base& p);

void identify(Base* p)
{
	try
	{
		if(dynamic_cast<A*>(p))
			std::cout << "A" <<std::endl;
		else if(dynamic_cast<B*>(p))
			std::cout << "B" <<std::endl;
		else if(dynamic_cast<C*>(p))
			std::cout << "C" <<std::endl;
		else
			throw std::runtime_error("Base::dynamic_cast cannot be applied");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void identify(Base& p)
{
	try
	{
		(void) dynamic_cast<A&>(p);
		std::cout << "A" <<std::endl;
		return ;
	}
	catch(const std::bad_cast& e)
	{
	}
	try
	{
		(void) dynamic_cast<B&>(p);
		std::cout << "B" <<std::endl;
		return ;
	}
	catch(const std::bad_cast& e)
	{
	}
	try
	{
		(void) dynamic_cast<C&>(p);
		std::cout << "C" <<std::endl;
		return ;
	}
	catch(const std::bad_cast& e)
	{
	}
}

int	main()
{
	std::srand(unsigned(std::time(NULL)));
	Base *pnt;

	pnt = generate();
	identify(pnt);
	identify(*pnt);
	delete pnt;
	pnt = generate();
	identify(pnt);
	identify(*pnt);
	delete pnt;
	pnt = generate();
	identify(pnt);
	identify(*pnt);
	delete pnt;
	pnt = generate();
	identify(pnt);
	identify(*pnt);
	delete pnt;
	pnt = generate();
	identify(pnt);
	identify(*pnt);
	delete pnt;
	return 0;
}
