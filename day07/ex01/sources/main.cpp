/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoetess <bpoetess@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:53:12 by bpoetess          #+#    #+#             */
/*   Updated: 2022/11/08 05:56:42 by bpoetess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

class StrangeClass
{
	private:
	    std::string checkThisPerfectString;
	
	public:
	    std::string get( void ) const { return this->checkThisPerfectString; }
		StrangeClass() : checkThisPerfectString ("ABOBA") {return ;};
		~StrangeClass() {};
};

std::ostream & operator<<( std::ostream & o, StrangeClass const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main( void ) 
{
	std::srand(unsigned(std::time(NULL)));
	{
		size_t arr[10];
		for (int i = 0; i < 10; i++)
			arr[i] = 0;
		iter(arr, 10, &random_assigment);
		for (int i = 0; i < 10; i++)
			std::cout << "   " << arr[i];
	}
	std::cout << std::endl << std::endl;
	{
		char arr[10];
		for (int i = 0; i < 10; i++)
			arr[i] = 0;
		iter(arr, 10, &random_assigment);
		for (int i = 0; i < 10; i++)
			std::cout << "   " << (int)(arr[i]);
	}
	std::cout << std::endl << std::endl;
	{
		StrangeClass arr[10];
		iter(arr, 10, print<StrangeClass>);
	}
	return 0;
}

/*
class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };  // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
  Awesome tab2[5];

  iter( tab, 5, print<int> );
  iter( tab2, 5, print<Awesome> );

  return 0;
}
*/
