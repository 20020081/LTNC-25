#pragma once

class Fraction{
    int numerator;
    int denominator;
public:
    Fraction(int _numerator, int _denominator);
    void simplify();
    void print();
    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;
};
