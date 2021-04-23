#include "fraction.h"
#include <iostream>
#include <algorithm>
#include <assert.h>
using namespace std;

Fraction::Fraction(int _numerator, int _denominator){
        numerator = _numerator;
        denominator = _denominator;
    }

void Fraction::simplify(){
        int tempt = __gcd(denominator, numerator);
        numerator /= tempt;
        denominator /= tempt;
    }

void Fraction::print(){
        if(numerator == denominator) cout << 1;
        else if(numerator == -denominator) cout << -1;
        else if(denominator == 1) cout << numerator;
        else
            cout << numerator << "/" << denominator << endl;
    }

Fraction Fraction::operator+(const Fraction& other) const {
        assert(denominator != 0 && other.denominator != 0);
        int bcln = denominator * other.denominator;
        int n_num = numerator * (bcln / denominator) + other.numerator * (bcln / other.denominator);

        Fraction sum(n_num, bcln);
        sum.simplify();

        return sum;
    }

Fraction Fraction::operator-(const Fraction& other) const {
        assert(denominator != 0 && other.denominator != 0);

        int bcln = denominator * other.denominator;
        int n_num = numerator * (bcln / denominator) - other.numerator * (bcln / other.denominator);

        Fraction Minus(n_num, bcln);
        Minus.simplify();

        return Minus;
    }

Fraction Fraction::operator*(const Fraction& other) const {
        assert(denominator != 0 && other.denominator != 0);

        Fraction multiply(numerator * other.numerator, denominator * other.denominator);
        multiply.simplify();

        return multiply;
    }

Fraction Fraction:: operator/(const Fraction& other) const {
        assert(denominator != 0 && other.denominator != 0);

        Fraction tempt(other.denominator, other.numerator);
        Fraction divide(numerator * tempt.numerator, denominator * tempt.denominator);

        divide.simplify();
        return divide;
    }
