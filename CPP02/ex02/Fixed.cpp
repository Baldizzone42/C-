/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 08:57:57 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/13 15:01:01 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(): _value(0)
{
	//std::cout << "Default constructor called " << std::endl;
}

Fixed::~Fixed()
{
	//std::cout << "Desctructor called" << std::endl;
}

Fixed::Fixed(const int value) 
{
	this->_value = (value << bits);
	//std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(const float value)
{
	//std::cout << "Float constructor called." << std::endl;
	this->_value = static_cast<int>(roundf(value * (1 << bits)));
}

Fixed::Fixed(Fixed const &copy)
{
	///std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->_value = copy.getRawBits();
	return (*this);
}

float 	Fixed::toFloat(void)const
{
	return static_cast<float>(_value) / (1 << bits);
	//Static cast se utiliza cuando quieres que una conversion sea de forma segura
	//de un tipo de dato a otro.
}

int 	Fixed::toInt(void)const
{
	return this->_value >> bits;
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


// Arithmetic Operators 

Fixed Fixed::operator+(const Fixed& other)
{
	Fixed result;
	result.setRawBits(this->_value + other._value);
	return(result);
	
}

Fixed Fixed::operator-(const Fixed& other)
{
	Fixed result;
	result.setRawBits(result._value - other._value);
	return (result);
}

Fixed Fixed::operator*(const Fixed& other)
{
	Fixed result;
	result.setRawBits(this->getRawBits() * other.getRawBits());
	result.setRawBits(result.getRawBits() >> this->bits);
	return (result);
}

Fixed Fixed::operator/(const Fixed& other)
{
	if(other._value == 0)
		return 0;
	Fixed result;
	result.setRawBits(result._value / other._value);
	return(result);
}


/// Comparison Operators

bool Fixed::operator==(const Fixed &other) const
{
	if(this->getRawBits() == other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed &other) const
{
	if(this->getRawBits() != other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<(const Fixed &other) const
{
	if (this->getRawBits() < other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>(const Fixed &other) const
{
	if (this->getRawBits() > other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed &other)const
{
	if(this->getRawBits() <= other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed &other) const
{
	if(this->getRawBits() >= other.getRawBits())
		return true;
	return false;
}

//Increment/Decrement operators

Fixed &Fixed::operator++(void)
{
	this->_value++;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed result(*this);
	this->_value++;
	return result;
}

Fixed &Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed result(*this);
	this->_value--;
	return result;
}

const Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if(f1._value < f2._value)
		return f1;
	return f2;
}

const Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if(f1._value > f2._value)
		return f1;
	return f2;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if(f1._value < f2._value)
		return f1;
	return f2;
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if(f1._value > f2._value)
		return f1;
	return f2;
}




