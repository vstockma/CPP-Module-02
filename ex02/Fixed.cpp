/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:17:52 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/25 15:31:22 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    fixed_value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
    fixed_value = copy.getRawBits();
}

Fixed::Fixed(const int integer)
{
    fixed_value = integer << bits;
}

Fixed::Fixed(const float floating)
{
    fixed_value = roundf(floating * (1 << bits));
}

Fixed::~Fixed()
{
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
    return (fixed_value);
}

void    Fixed::setRawBits(int const raw)
{
    this->fixed_value = raw;
}

Fixed& Fixed::min(Fixed& num1, Fixed& num2)
{
    if(num1.getRawBits() < num2.getRawBits())
        return (num1);
    return (num2);
}

const Fixed& Fixed::min(const Fixed& num1, const Fixed& num2)
{
    if(num1.getRawBits() < num2.getRawBits())
        return (num1);
    return (num2);
}

Fixed& Fixed::max(Fixed& num1, Fixed& num2)
{
    if(num1.getRawBits() > num2.getRawBits())
        return (num1);
    return (num2);
}

const Fixed& Fixed::max(const Fixed& num1, const Fixed& num2)
{
    if(num1.getRawBits() > num2.getRawBits())
        return (num1);
    return (num2);
}

Fixed& Fixed::operator=(const Fixed& original)
{
    if(this != &original)
        fixed_value = original.getRawBits();
    return (*this);
}

Fixed Fixed::operator+(const Fixed& copy)
{
    Fixed fixed;
    fixed.fixed_value = this->fixed_value + copy.fixed_value;
    return (fixed);
}

Fixed Fixed::operator-(const Fixed& copy)
{
    Fixed fixed;
    fixed.fixed_value = this->fixed_value - copy.fixed_value;
    return (fixed);
}

Fixed Fixed::operator/(const Fixed& copy)
{
    Fixed fixed;
    fixed.fixed_value = this->fixed_value / copy.fixed_value;
    return (fixed);
}

Fixed Fixed::operator*(const Fixed& copy)
{
    return (Fixed (toFloat() * copy.toFloat()));
}

Fixed Fixed::operator++(void)
{
    this->fixed_value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed fixed;
    fixed.fixed_value = this->fixed_value;
    this->fixed_value++;
    return (fixed);
}

Fixed Fixed::operator--(void)
{
    this->fixed_value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed fixed;
    fixed.fixed_value = this->fixed_value;
    this->fixed_value--;
    return (fixed);
}

bool Fixed::operator>(const Fixed& copy)
{
    return (fixed_value > copy.fixed_value);
}

bool Fixed::operator<(const Fixed& copy)
{
    return (fixed_value < copy.fixed_value);
}

bool Fixed::operator>=(const Fixed& copy)
{
    return (fixed_value >= copy.fixed_value);
}

bool Fixed::operator<=(const Fixed& copy)
{
    return (fixed_value <= copy.fixed_value);
}

bool Fixed::operator!=(const Fixed& copy)
{
    return (fixed_value != copy.fixed_value);
}

bool Fixed::operator==(const Fixed& copy)
{
    return (fixed_value == copy.fixed_value);
}
