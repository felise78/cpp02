/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hemottu <hemottu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:00:59 by hemottu           #+#    #+#             */
/*   Updated: 2023/11/28 12:39:35 by hemottu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
 # define FIXED_HPP

	#include <iostream>

	class Fixed 
	{
		public:
			// forme canonique
			Fixed();							// Constructeur par defaut
			Fixed(const Fixed& copy);			// Constructeur de recopie
			Fixed& operator=(const Fixed& src);	// Operateur d'affectatinon
			~Fixed();							// Destructeur
			
			// constructeurs avec parametres 
			Fixed(const int nb); 
			Fixed(const float nb);
			
			// fonctions membres
			int getRawBits( void ) const;
			void setRawBits( int const raw );
			float toFloat( void ) const;
			int toInt( void ) const;
		
		private:
			int	m_value;
			const static int m_fract = 8;
	};

	std::ostream& operator<<( std::ostream &flux, Fixed const &fixed );

#endif