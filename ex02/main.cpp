/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:17:37 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/23 12:24:35 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    Fixed   a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    std::cout << b << std::endl;
    
    std::cout << Fixed::min( a, b ) << std::endl;

    // std::cout << std::boolalpha << "c > d is " << (c > d) << std::endl;
    // std::cout << std::boolalpha << "c < d is " << (c < d) << std::endl;
    // std::cout << std::boolalpha << "c >= d is " << (c >= d) << std::endl;
    // std::cout << std::boolalpha << "c <= d is " << (c <= d) << std::endl;
    // std::cout << std::boolalpha << "c == d is " << (c == d) << std::endl;
    // std::cout << std::boolalpha << "c != d is " << (c != d) << std::endl;
    // std::cout << "c + d is " << (c + d) << std::endl;
    // std::cout << "c - d is " << (c - d) << std::endl;
    // std::cout << "c * d is " << (c * d) << std::endl;
    // std::cout << "c / d is " << (c / d) << std::endl;
    // std::cout << Fixed::min(c,d) << std::endl;
    // std::cout << Fixed::max(c,d) << std::endl;
    return (0);
}