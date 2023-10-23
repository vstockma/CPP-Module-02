/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:01:13 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/17 16:11:45 by vstockma         ###   ########.fr       */
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
        Fixed &operator=(const Fixed& original);
        Fixed(const int integer);
        Fixed(const float floating);
        ~Fixed();
        float   toFloat(void) const;
        int toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif