/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:17:56 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/25 14:41:04 by vstockma         ###   ########.fr       */
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
        int fixed_value;
        static const int bits = 8;

    public:
        Fixed();
        Fixed(const Fixed& copy);
        Fixed &operator=(const Fixed& original);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        
        Fixed(const int integer);
        Fixed(const float floating);
        float   toFloat(void) const;
        int toInt(void) const;

        static Fixed& min(Fixed& num1, Fixed& num2);
        static Fixed& max(Fixed& num1, Fixed& num2);
        static const Fixed& min(const Fixed& num1, const Fixed& num2);
        static const Fixed& max(const Fixed& num1, const Fixed& num2);

        Fixed& operator=(const Fixed& copy);
        Fixed operator+(const Fixed& copy);
        Fixed operator-(const Fixed& copy);
        Fixed operator/(const Fixed& copy);
        Fixed operator*(const Fixed& copy);
        Fixed operator++(void);
        Fixed operator++(int);
        Fixed operator--(void);
        Fixed operator--(int);

        bool operator>(const Fixed& copy);
        bool operator<(const Fixed& copy);
        bool operator>=(const Fixed& copy);
        bool operator<=(const Fixed& copy);
        bool operator!=(const Fixed& copy);
        bool operator==(const Fixed& copy);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif