/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:17:56 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/19 11:25:06 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <fstream>

class Fixed
{
    private:
        int _fixed_value;
        static const int _bits = 8;

    public:
        Fixed();
        Fixed(const Fixed& copy);
        Fixed& operator=(const Fixed& original);
        Fixed(const int integer);
        Fixed(const float floating);
        ~Fixed();

        int toInt(void) const;
        float   toFloat(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);

        bool operator>(const Fixed& copy);
        bool operator<(const Fixed& copy);
        bool operator>=(const Fixed& copy);
        bool operator<=(const Fixed& copy);
        bool operator!=(const Fixed& copy);
        bool operator==(const Fixed& copy);

        Fixed operator+(const Fixed& copy);
        Fixed operator-(const Fixed& copy);
        Fixed operator/(const Fixed& copy);
        Fixed operator*(const Fixed& copy);
        Fixed operator++(void);
        Fixed operator++(int);
        Fixed operator--(void);
        Fixed operator--(int);

        static Fixed& min(Fixed& num1, Fixed& num2);
        static Fixed& max(Fixed& num1, Fixed& num2);
        static const Fixed& min(const Fixed& num1, const Fixed& num2);
        static const Fixed& max(const Fixed& num1, const Fixed& num2);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif