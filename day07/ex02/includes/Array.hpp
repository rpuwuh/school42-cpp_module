/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 05:28:24 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/08 05:46:52 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iostream>

template <typename T>
class Array
{
	private:
		T* _ptr;
		std::size_t _size;

	public:
		Array();
		Array(unsigned int size);
		Array(const Array& other);
		~Array();

		Array& operator=(const Array& other);

		T& operator[](std::size_t index);
		const T& operator[](std::size_t index) const;

		std::size_t size() const;

		class InvalidIndexException : public std::exception {
			public:
				virtual const char* what() const throw()
				{
					return ("InvidalidIndexException: index is out of range");
				}
		};
};

template <typename T>
Array<T>::Array() : _ptr(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int size) : _ptr(new T[size]), _size(size){}

template <typename T>
Array<T>::Array(const Array& other) : _ptr(NULL)
{
	*this = other;
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->_ptr;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this == &other)
		return (*this);
	if (this->_size != other._size)
	{
		if (this->_ptr)
			delete[] (this->_ptr);
		this->_ptr = new T[other._size];
		this->_size = other.size();
	}
	for (std::size_t i = 0; i < this->_size; ++i)
		this->_ptr[i] = other[i];
	return (*this);
}

template <typename T>
T& Array<T>::operator[](std::size_t index)
{
	if (index >= this->_size)
		throw Array::InvalidIndexException();
	else
		return (this->_ptr[index]);
}

template <typename T>
const T& Array<T>::operator[](std::size_t index) const
{
	if (index >= this->_size)
		throw Array::InvalidIndexException();
	else
		return (this->_ptr[index]);
}

template <typename T>
std::size_t Array<T>::size() const 
{
	return (this->_size);
}

#endif