/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:40:47 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/17 14:42:56 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    _fixed_value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    _fixed_value = copy.getRawBits();
}

Fixed &Fixed::operator=(const Fixed& original)
{
    std::cout << "Copy assignment operator called" << std::endl;
    setRawBits(original.getRawBits());
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_fixed_value);
}

void    Fixed::setRawBits(int const raw)
{
    _fixed_value = raw;
}