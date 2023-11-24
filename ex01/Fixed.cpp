/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:01:02 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/21 18:01:03 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : m_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}
		
Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->m_value = nb << m_fract;
}
		
Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	m_value = (int)roundf(nb * (1 << m_fract));
}

Fixed& Fixed::operator=(const Fixed& src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->m_value = src.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->m_value);
}

void Fixed::setRawBits( int const raw )
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->m_value = raw;
}

float Fixed::toFloat( void ) const
{
	return (float)m_value / (float)(1 << m_fract);
}

int Fixed::toInt( void ) const
{
	return (int)(m_value >> m_fract);
}

std::ostream& operator<<( std::ostream &flux, Fixed const &fixed )
{
    flux << fixed.toFloat();
    return flux;
} 