/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:40:39 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/25 10:55:46 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

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
        void    setRawBits(int const raw);
};

#endif