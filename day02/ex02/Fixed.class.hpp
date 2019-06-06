#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>

class   Fixed{

    private : 
        int _num;
        int _fract;

    public :
        Fixed();
        Fixed(int const n);
        Fixed(float const n);
        static Fixed& max(Fixed const &j, Fixed const &k);
        static Fixed& min(Fixed const &j, Fixed const &k);
        ~Fixed();
        Fixed&  operator=(Fixed const &j);
        Fixed&  operator+(Fixed const &j);
        Fixed&  operator-(Fixed const &j);
        Fixed&  operator*(Fixed const &j);
        Fixed&  operator/(Fixed const &j);
        Fixed&  operator>(Fixed const &j);
        Fixed&  operator<(Fixed const &j);
        Fixed&  operator>=(Fixed const &j);
        Fixed&  operator<=(Fixed const &j);
        Fixed&  operator==(Fixed const &j);
        Fixed&  operator!=(Fixed const &j);
        Fixed&  operator++();
        Fixed&  operator--();
        Fixed&  operator++(int);
        Fixed&  operator--(int);
        int     getRawBits() const;
        void    setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
    
};

#endif