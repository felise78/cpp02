/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:00:59 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/21 18:23:15 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
 # define FIXED_HPP

	#include <iostream>

	class Fixed 
	{
		public:
			Fixed(); //Constructeur par defaut
			Fixed(const int nb); // Constructeurs avec parametres 
			Fixed(const float nb);
			Fixed(const Fixed& copy); //Constructeur de recopie
			Fixed& operator=(const Fixed& src); //Surcharges d'operateurs 
			bool operator>(const Fixed& src) const; // je peux les declarer en const car elle ne
			bool operator<(const Fixed& src) const; // modifie pas l'objet
			bool operator>=(const Fixed& src) const;
			bool operator<=(const Fixed& src) const;
			bool operator==(const Fixed& src) const;
			bool operator!=(const Fixed& src) const;
			Fixed operator+(const Fixed& src);
			Fixed operator-(const Fixed& src);
			Fixed operator*(const Fixed& src);
			Fixed operator/(const Fixed& src);
			Fixed&	operator++();
			Fixed	operator++(int);
			Fixed&	operator--();
			Fixed	operator--(int);
			~Fixed(); //Destructeur
			
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