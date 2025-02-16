/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 08:41:32 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/13 12:50:39 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:
		int _value;
		static const int bits = 8;
		
	public:
		Fixed();
		~Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(Fixed const &copy);
		Fixed &operator=(Fixed const &copy);

		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float 	toFloat(void) const;
		int 	toInt(void) const;

		// Arithmetic operators
		Fixed operator+(const Fixed& other);
		Fixed operator-(const Fixed& other);
		Fixed operator*(const Fixed& other);
		Fixed operator/(const Fixed& other);
	 
		// Comparison operators
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator>(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
	 
		 // Increment/decrement operators
		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);
	 
		// Min/max functions
		static const Fixed& min(Fixed& f1, Fixed& f2);
		static const Fixed& max(Fixed& f1, Fixed& f2);
		static const Fixed& min(const Fixed& f1, const Fixed& f2);
		static const Fixed& max(const Fixed& f1, const Fixed& f2);
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif