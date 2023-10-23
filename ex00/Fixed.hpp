/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 15:40:39 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/17 14:19:59 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int _fixed_value;
        static const int _bits = 8;
    public:
        Fixed();
        Fixed(const Fixed& copy);
        Fixed &operator=(const Fixed& original);
        ~Fixed();
        int getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif