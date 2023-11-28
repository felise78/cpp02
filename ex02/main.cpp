/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:00:56 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/28 15:38:29 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;	
	std::cout << ++a << std::endl;	
	std::cout << a << std::endl;	
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}

// int main( void )
// {
// 	Fixed a ( 4000 );
// 	Fixed const b( 1000 );
	
// 	std::cout << "a : " << a << std::endl;
// 	std::cout << "b : " << b << std::endl;
// 	std::cout << "a / b = " << a / b << std::endl;
// 	std::cout << "b : " << a << std::endl;
// 	std::cout << "a + b = " << a + b << std::endl;
// 	std::cout << "b : " << a << std::endl;
// 	std::cout << "a - b = " << a - b << std::endl;
// 	std::cout << "b : " << a << std::endl;
// 	std::cout << "a * b = " << a * b << std::endl;
	
// 	return 0;
// }

// int main()
// {
// 	Fixed a ( 4 );
//  	Fixed b( 4 );
// 	Fixed c( 6 );
// 	if (a < c)
// 		std::cout << "a est plus petit que c" << std::endl;
// 	else 
// 		std::cout << "a est plus grand que c" << std::endl;
// 	if (b > c)
// 		std::cout << "b est plus grand que c" << std::endl;
// 	else 
// 		std::cout << "b est plus petit que c" << std::endl;
// 	if (a == b)
// 		std::cout << "a est egal a b" << std::endl;
// 	else	
// 		std::cout << "a n'est pas egal a b" << std::endl;
// 	if (b == c)
// 		std::cout << "b est egal a c" << std::endl;
// 	else	
// 		std::cout << "b n'est pas egal a c" << std::endl;
// 	if (a <= b)
// 		std::cout << "a est plus petit ou egal a b" << std::endl;
// 	else 
// 		std::cout << "a est strictement plus grand que b" << std::endl;
// 	if (b >= c)
// 		std::cout << "b est plus grand ou egal a c" << std::endl;
// 	else 
// 		std::cout << "b est strictement plus petit que c" << std::endl;
// }