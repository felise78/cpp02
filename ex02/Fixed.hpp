/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:00:59 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/28 14:22:58 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
 # define FIXED_HPP

	#include <iostream>

	class Fixed 
	{
		public:
			// Forme canonique 
			Fixed();
			Fixed(const Fixed& copy); 
			Fixed& operator=(const Fixed& src); 
			~Fixed();

			// Constructeurs avec parametres
			Fixed(const int nb);  
			Fixed(const float nb);
			
			// Surcharges d'operateurs
			bool operator>(const Fixed& src) const; // je peux les declarer en const car elle ne
			bool operator<(const Fixed& src) const; // modifie pas l'objet
			bool operator>=(const Fixed& src) const;
			bool operator<=(const Fixed& src) const;
			bool operator==(const Fixed& src) const;
			bool operator!=(const Fixed& src) const;
			Fixed operator+(const Fixed& src) const;
			Fixed operator-(const Fixed& src) const;
			Fixed operator*(const Fixed& src) const;
			Fixed operator/(const Fixed& src) const;
			Fixed&	operator++();
			Fixed	operator++(int);
			Fixed&	operator--();
			Fixed	operator--(int);
			
			// Fonctions membres
			int getRawBits( void ) const;
			void setRawBits( int const raw );
			float toFloat( void ) const;
			int toInt( void ) const;
			static Fixed min(Fixed& a, Fixed& b);
			static Fixed min(const Fixed& a, const Fixed& b);
			static Fixed max(Fixed& a, Fixed& b);
			static Fixed max(const Fixed& a, const Fixed& b);
		
		private:
			int	m_value;
			const static int m_fract = 8;
	};

	std::ostream& operator<<( std::ostream &flux, Fixed const &fixed );

#endif