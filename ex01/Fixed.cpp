/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:00:48 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/25 14:14:53 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    fixed_value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    fixed_value = copy.getRawBits();
}

Fixed &Fixed::operator=(const Fixed& original)
{
    fixed_value = original.getRawBits();
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

Fixed::Fixed(const int integer)
{
    fixed_value = integer << bits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floating)
{
    fixed_value = roundf(floating * (1 << bits));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt(void) const
{
    return (fixed_value >> bits);
}

float   Fixed::toFloat(void) const
{
    return ((float)fixed_value / (1 << bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixed_value);
}

void    Fixed::setRawBits(int const raw)
{
    this->fixed_value = raw;
}
