/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:00:56 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/21 18:00:57 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// int main( void )
// {
// 	Fixed a ( 4000 );
// 	Fixed const b( 1000 );
	
// 	std::cout << "a : " << a << std::endl;
// 	std::cout << "b : " << b << std::endl;
// 	std::cout << "a / b = " << a / b << std::endl;
	
// 	return 0;
// }

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;	// 0
	std::cout << ++a << std::endl;	// 0.00390625
	std::cout << a << std::endl;	// 0.00390625
	std::cout << a++ << std::endl;	// 0.00390625
	std::cout << a << std::endl;	// 0.0078125
	std::cout << b << std::endl;	// 662016 au lieu de 10.1016 ?
	std::cout << Fixed::max( a, b ) << std::endl; //
	return 0;
}