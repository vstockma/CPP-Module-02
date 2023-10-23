/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:17:52 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/19 11:25:04 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    _fixed_value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
    _fixed_value = copy.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& original)
{
    _fixed_value = original.getRawBits();
    return (*this);
}

Fixed::Fixed(const int integer)
{
    _fixed_value = integer << _bits;
}

Fixed::Fixed(const float floating)
{
    _fixed_value = roundf(floating * (1 << _bits));
}

Fixed::~Fixed()
{
}

int Fixed::toInt(void) const
{
    return (_fixed_value >> _bits);
}

float   Fixed::toFloat(void) const
{
    return ((float)_fixed_value / (1 << _bits));
}

int Fixed::getRawBits(void) const
{
    return (_fixed_value);
}

void    Fixed::setRawBits(int const raw)
{
    _fixed_value = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}

bool Fixed::operator>(const Fixed& copy)
{
    return (_fixed_value > copy._fixed_value);
}

bool Fixed::operator<(const Fixed& copy)
{
    return (_fixed_value < copy._fixed_value);
}

bool Fixed::operator>=(const Fixed& copy)
{
    return (_fixed_value >= copy._fixed_value);
}

bool Fixed::operator<=(const Fixed& copy)
{
    return (_fixed_value <= copy._fixed_value);
}

bool Fixed::operator!=(const Fixed& copy)
{
    return (_fixed_value != copy._fixed_value);
}

bool Fixed::operator==(const Fixed& copy)
{
    return (_fixed_value == copy._fixed_value);
}

Fixed Fixed::operator+(const Fixed& copy)
{
    Fixed fixed;
    fixed._fixed_value = this->_fixed_value + copy._fixed_value;
    return (fixed);
}

Fixed Fixed::operator-(const Fixed& copy)
{
    Fixed fixed;
    fixed._fixed_value = this->_fixed_value - copy._fixed_value;
    return (fixed);
}

Fixed Fixed::operator/(const Fixed& copy)
{
    Fixed fixed;
    fixed._fixed_value = this->_fixed_value / copy._fixed_value;
    return (fixed);
}

Fixed Fixed::operator*(const Fixed& copy)
{
    return (Fixed (toFloat() * copy.toFloat()));
}

Fixed Fixed::operator++(void)
{
    _fixed_value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed fixed;
    fixed._fixed_value = this->_fixed_value;
    this->_fixed_value++;
    return (fixed);
}

Fixed Fixed::operator--(void)
{
    _fixed_value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed fixed;
    fixed._fixed_value = this->_fixed_value;
    this->_fixed_value--;
    return (fixed);
}

Fixed& Fixed::min(Fixed& num1, Fixed& num2)
{
    if(num1 < num2)
        return (num1);
    return (num2);
}

Fixed& Fixed::max(Fixed& num1, Fixed& num2)
{
    if(num1 > num2)
        return (num1);
    return (num2);
}

const Fixed& Fixed::min(const Fixed& num1, const Fixed& num2)
{
    if(num1.getRawBits() < num2.getRawBits())
        return (num1);
    return (num2);
}

const Fixed& Fixed::max(const Fixed& num1, const Fixed& num2)
{
    if(num1.getRawBits() > num2.getRawBits())
        return (num1);
    return (num2);
}
