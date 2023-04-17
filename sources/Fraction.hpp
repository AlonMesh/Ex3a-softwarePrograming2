#ifndef FRACTION_HPP
#define FRACTION_HPP
#include <iostream>
#include <string>

namespace ariel {

    class Fraction {
        private:
            int numerator;
            int denominator;

        public:
            Fraction(int numerator, int denominator) : numerator(numerator), denominator(denominator) {};
            Fraction();

            friend Fraction operator+(const Fraction &a, const Fraction &b);
            friend Fraction operator-(const Fraction &a, const Fraction &b);
            friend Fraction operator*(const Fraction &a, const Fraction &b);
            friend Fraction operator/(const Fraction &a, const Fraction &b);
            friend Fraction operator+(const Fraction &a, float b);
            friend Fraction operator-(const Fraction &a, float b);
            friend Fraction operator*(const Fraction &a, float b);
            friend Fraction operator/(const Fraction &a, float b);
            friend Fraction operator+(float a, const Fraction &b);
            friend Fraction operator-(float a, const Fraction &b);
            friend Fraction operator*(float a, const Fraction &b);
            friend Fraction operator/(float a, const Fraction &b);

            friend bool operator==(const Fraction &a, const Fraction &b);
            friend bool operator<(const Fraction &a, const Fraction &b);
            friend bool operator>(const Fraction &a, const Fraction &b);
            friend bool operator==(const Fraction &a, float b);
            friend bool operator<(const Fraction &a, float b);
            friend bool operator>(const Fraction &a, float b);
            friend bool operator==(float a, const Fraction &b);
            friend bool operator<(float a, const Fraction &b);
            friend bool operator>(float a, const Fraction &b);

            friend Fraction operator<=(const Fraction &a, const Fraction &b);
            friend Fraction operator>=(const Fraction &a, const Fraction &b);
            friend Fraction operator<=(float a, const Fraction &b);
            friend Fraction operator>=(float a, const Fraction &b);
            friend Fraction operator<=(const Fraction &a, float b);
            friend Fraction operator>=(const Fraction &a, float b);


            Fraction operator++(); // ++ is left
            Fraction operator--();
            Fraction operator++(int a); // ++ is right
            Fraction operator--(int a);

            friend std::ostream operator<<(std::ostream& os, const Fraction &a);
            friend std::istream operator>>(std::istream& is, const Fraction &a);

            
            int getNumerator() {
                return this->numerator;
            }

            int getDenominator() {
                return this->denominator;
            }

    };
}
#endif