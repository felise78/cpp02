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

class Fixed 
{
	public:
		Fixed(); //Constructeur par defaut
		Fixed(const Fixed& copy); //Constructeur de recopie
		Fixed &operator = (const Fixed& src); //Operateur d'affectatinon
		~Fixed(); //Destructeur
	private:
};