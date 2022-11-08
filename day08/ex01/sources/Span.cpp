/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 04:53:25 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/08 09:35:32 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Span.hpp"

Span::Span()
{
	this->size = 0;
}
Span::Span(unsigned int N)
{
	this->size = N;
}
Span::Span(const Span& initialSpan)
{
	*this = initialSpan;
}
Span::~Span()
{
	
}
Span& Span::operator=(const Span& assigmentingSpan)
{
	this->multiset = assigmentingSpan.multiset;
	this->size = assigmentingSpan.size;
	return (*this);
}

const std::multiset<int>& Span::getMultiset() const
{
	return (this->multiset);
}
unsigned int Span::getSize() const
{
	return (this->size);
}

unsigned int Span::shortestSpan() const
{
	if (size <= 1)
		throw (std::runtime_error("shortestSpan: Too few numbers"));
  	std::multiset<int>::iterator minimalIt = multiset.begin();
    unsigned int res = 0xffffffff;
    for (std::multiset<int>::iterator it = multiset.begin(); it != multiset.end(); it++)
    {
        if (it != multiset.begin())
        {
        	res = std::min(res, static_cast<unsigned int>(*it - *minimalIt));
        	minimalIt = it;
		}
    }
    return (res);
}
unsigned int Span::longestSpan() const
{
	if (size <= 1)
		throw (std::runtime_error("longestSpan: Too few numbers"));
    return (*(this->multiset.rbegin()) - *(this->multiset.begin()));
}

void Span::addNumber(int addingNumber)
{
	if (this->multiset.size() >= this->size)
		throw(std::runtime_error("addNumber: too much numbers"));
	this->multiset.insert(addingNumber);
}

void Span::addNumber(std::vector<int>& inputContainer)
{
	try
	{
		for (std::vector<int>::const_iterator it = inputContainer.begin(); it != inputContainer.end(); it++)
    	    addNumber(*it);
	}
	catch(const std::exception& e)
	{
		throw (std::runtime_error(e.what()));
	}
	
}
