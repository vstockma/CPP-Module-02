/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:00:48 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/19 14:26:38 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    _fixed_value = 0;
}

// Copy constructor
Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    //_fixed_value = copy.getRawBits();   // Create a new Fixed object by copying the value of another Fixed object
    *this = copy;
}

// Copy assignment operator
Fixed &Fixed::operator=(const Fixed& original)
{
    std::cout << "Copy assignment operator called" << std::endl;
    _fixed_value = original.getRawBits();
    return (*this); // Return a reference to the current object
}

// Constructor from an integer
Fixed::Fixed(const int integer)
{
    // Left-shift the integer to obtain the Fixed value representation
    std::cout << "Int constructor called" << std::endl;
    _fixed_value = integer << _bits;
}

// Constructor from a floating-point number
Fixed::Fixed(const float floating)
{
    // Convert floating-point number to a Fixed value by scaling it
    std::cout << "Float constructor called" << std::endl;
    _fixed_value = roundf(floating * (1 << _bits));
}

// Destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// Convert Fixed to an integer
int Fixed::toInt(void) const
{
    // Right-shift the Fixed value to obtain the integer representation
    
    return (_fixed_value >> _bits);
}

float   Fixed::toFloat(void) const
{
    // Convert Fixed to a floating-point number by scaling it
    return ((float)_fixed_value / (1 << _bits));
}

// Overloaded output stream operator
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    // Convert the Fixed object to a floating-point number and output it
    os << fixed.toFloat();
    return os;
}

int Fixed::getRawBits(void) const
{
    return (_fixed_value);
}

void    Fixed::setRawBits(int const raw)
{
   _fixed_value = raw;
}
