/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 08:57:57 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/13 12:51:19 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_frac = 8;

Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called " << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Desctructor called" << std::endl;
}

Fixed::Fixed(const int value) : _value(value << _frac)
{
	std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called." << std::endl;
	this->_value = static_cast<int>(roundf(value * (1 << _frac)));
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = copy.getRawBits();
	return (*this);
}

float 	Fixed::toFloat(void)const
{
	return static_cast<float>(_value) / (1 << _frac);
	//Static cast se utiliza cuando quieres que una conversion sea de forma segura
	//de un tipo de dato a otro.
}

int 	Fixed::toInt(void)const
{
	return this->_value >> _frac;
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(const int raw)
{
	this->_value = raw;
}

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr)
{
	str << fixed_nbr.toFloat();
	return str;	
}
//std::ostream es el flujo de salida donde se enviara el dato
//fixed_nbr es el objeto que vamos a querer imprimir despues haberlo modificado.

//Arithmetic operators
