/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 04:53:25 by dmillan           #+#    #+#             */
/*   Updated: 2022/11/08 09:24:08 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string.h>
# include <vector>
# include <set>
# include <algorithm>

class Span
{
private:
    std::multiset<int> multiset;
    unsigned int size;

public:
    Span();
    Span(unsigned int N);
    Span(const Span& initialSpan);
    ~Span();

    Span& operator=(const Span& assigmentingSpan);

    const std::multiset<int>& getMultiset() const;
    unsigned int getSize() const;

    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;

    void addNumber(int addingNumber);

	void addNumber(std::vector<int> &inputContainer);

};

#endif