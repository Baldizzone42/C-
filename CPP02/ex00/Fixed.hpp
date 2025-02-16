/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 08:41:32 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/13 13:47:35 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &copy); //copia del constructor
		Fixed &operator=(Fixed const &copy);
		int getRawBits(void);
		void setRawBits(const int raw);
	private:
		int _value;
		static const int _frac; 
};

#endif