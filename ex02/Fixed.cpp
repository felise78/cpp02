/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:01:02 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/28 15:35:08 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>
#include <climits>

// #######################################
// #            FORME CANONIQUE          #
// #######################################

Fixed::Fixed() : m_value(0)
{

}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& src)
{
	this->m_value = src.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	
}



// #######################################
// #      CONSTRUCTEURS av PARAMS        #
// #######################################

Fixed::Fixed(const int nb)
{
	m_value = nb << m_fract;
}
		
Fixed::Fixed(const float nb)
{
	m_value = roundf(nb * (1 << m_fract));
}




// ##########################################
// #  SURCHARGES OPERATEURS de COMPARAISON  #
// ##########################################

bool	Fixed::operator>(const Fixed& src) const
{
	return (this->m_value > src.getRawBits());
}

bool	Fixed::operator<(const Fixed& src) const
{
	return (this->m_value < src.getRawBits());
}

bool	Fixed::operator>=(const Fixed& src) const
{
	return (this->m_value >= src.getRawBits());
}

bool	Fixed::operator<=(const Fixed& src) const
{
	return (this->m_value <= src.getRawBits());
}

bool	Fixed::operator==(const Fixed& src) const
{
	return (this->m_value == src.getRawBits());
}

bool	Fixed::operator!=(const Fixed& src) const
{
	return (this->m_value != src.getRawBits());
}




// ##########################################
// #   SURCHARGES OPERATEURS ARITHMETIQUE   #
// ##########################################

Fixed	Fixed::operator+(const Fixed& src) const
{
	Fixed res;
	res.setRawBits(getRawBits() + src.getRawBits());
	return res;
}

Fixed	Fixed::operator-(const Fixed& src) const
{
	Fixed res;
	res.setRawBits(getRawBits() - src.getRawBits());
	return res;
}

Fixed	Fixed::operator*(const Fixed& src) const
{
	Fixed res;
	res.setRawBits((int)(((int64_t)getRawBits() * (int64_t)src.getRawBits()) >> m_fract));
	return res;
}

Fixed	Fixed::operator/(const Fixed& src) const
{
	Fixed res;
	res.setRawBits(getRawBits() / src.getRawBits() << m_fract);
	return res;
}




// ##############################################
// #   SURCHARGES OPERATEURS d'INCREMENTATION   #
// ##############################################

//incrémentation préfixe (++objet)
Fixed&	Fixed::operator++()
{
    ++m_value;
    return *this;  
}

// incrémentation suffixe (objet++)
Fixed	Fixed::operator++(int)
{
        Fixed temp(*this);		// Crée une copie de l'objet actuel
        ++m_value;				// Incrémente la valeur de l'objet actuel
        return temp;			// Retourne la copie de l'objet avant l'incrémentation
}

Fixed&	Fixed::operator--()
{
    --m_value;
    return *this; 
}

Fixed	Fixed::operator--(int)
{
        Fixed temp(*this);		
        --m_value;				
        return temp;			
}



// #######################################
// #          FONCTIONS MEMBRES          #
// #######################################

int Fixed::getRawBits( void ) const
{
	return (this->m_value);
}

void Fixed::setRawBits( int const raw )
{
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

Fixed	Fixed::min(Fixed& a, Fixed& b)
{
	return a < b ? a : b;
}

Fixed	Fixed::min(const Fixed& a, const Fixed& b)
{
	return a < b ? a : b;
}

Fixed	Fixed::max(Fixed& a, Fixed& b)
{
	return a > b ? a : b;
}

Fixed	Fixed::max(const Fixed& a, const Fixed& b)
{
	return a > b ? a : b;
}




// ##############################
// #       AUTRE FONCTION       #
// ##############################

std::ostream& operator<<( std::ostream &flux, Fixed const &fixed )
{
    flux << fixed.toFloat();
    return flux;
} 