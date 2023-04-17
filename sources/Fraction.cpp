#include "Fraction.hpp"
using namespace std;
#include <sstream>

// Any function is returning a defultive known value, only for compiling. Will be edited.
namespace ariel {
    Fraction::Fraction(int numerator, int denominator) : numerator(numerator), denominator(denominator) {}

    Fraction operator+(const Fraction &a, const Fraction &b) {
        return Fraction(1,1);
    }

    Fraction operator+(const Fraction &a, float b) {
        return Fraction(1,1);
    }

    Fraction operator+(float a, const Fraction &b) {
        return Fraction(1,1);
    }

    Fraction operator-(const Fraction &a, const Fraction &b) {
        return Fraction(1,1);
    }

    Fraction operator-(const Fraction &a, float b) {
        return Fraction(1,1);
    }

    Fraction operator-(float a, const Fraction &b) {
        return Fraction(1,1);
    }

    Fraction operator*(const Fraction &a, const Fraction &b) {
        return Fraction(1,1);
    }

    Fraction operator*(const Fraction &a, float b) {
        return Fraction(1,1);
    }

    Fraction operator*(float a, const Fraction &b) {
        return Fraction(1,1);
    }

    Fraction operator/(const Fraction &a, const Fraction &b) {
        return Fraction(1,1);
    }

    Fraction operator/(const Fraction &a, float b) {
        return Fraction(1,1);
    }

    Fraction operator/(float a, const Fraction &b) {
        return Fraction(1,1);
    }

    bool operator==(const Fraction &a, const Fraction &b) {
        return true;
    }

    bool operator==(const Fraction &a, float b) {
        return true;
    }

    bool operator==(float a, const Fraction &b) {
        return true;
    }

    bool operator<(const Fraction &a, const Fraction &b) {
        return true;
    }

    bool operator<(const Fraction &a, float b) {
        return true;
    }

    bool operator<(float a, const Fraction &b) {
        return true;
    }

    bool operator>(const Fraction &a, const Fraction &b) {
        return true;
    }

    bool operator>(const Fraction &a, float b) {
        return true;
    }

    bool operator>(float a, const Fraction &b) {
        return true;
    }

    bool operator<=(const Fraction &a, const Fraction &b) {
        return true;
    }

    bool operator<=(const Fraction &a, float b) {
        return true;
    }

    bool operator<=(float a, const Fraction &b) {
        return true;
    }

    bool operator>=(const Fraction &a, const Fraction &b) {
        return true;
    }

    bool operator>=(const Fraction &a, float b) {
        return true;
    }

    bool operator>=(float a, const Fraction &b) {
        return true;
    }

    Fraction Fraction::operator++() {
        return Fraction(1,1);
    }

    Fraction Fraction::operator++(int a) {
        return Fraction(1,1);
    }

    Fraction Fraction::operator--() {
        return Fraction(1,1);
    }

    Fraction Fraction::operator--(int a) {
        return Fraction(1,1);
    }

    ostream& operator<<(ostream& os, const Fraction &a) {
        return os;
    }

    istream& operator>>(istream& is, const Fraction &a) {
        int numerator, denominator;
        is >> numerator >> denominator;
        //a = Fraction(numerator, denominator);
        return is;
    }

    int Fraction::getNumerator() {
        return this->numerator;
    }

    int Fraction::getDenominator() {
        return this->denominator;
    }
}