#include <iostream>
#include <algorithm>
#include <assert.h>
using namespace std;

class Fraction{
public:
    int numerator;
    int denominator;

    Fraction(int _numerator, int _denominator){
        numerator = _numerator;
        denominator = _denominator;
    }

    void simplify(){
        int tempt = __gcd(denominator, numerator);
        numerator /= tempt;
        denominator /= tempt;
    }

    void print(){
        if(numerator == denominator) cout << 1;
        else if(numerator == -denominator) cout << -1;
        else if(denominator == 1) cout << numerator;
        else
            cout << numerator << "/" << denominator << endl;
    }

    Fraction operator+(const Fraction& other) const {
        assert(denominator != 0 && other.denominator != 0);
        int bcln = denominator * other.denominator;
        int n_num = numerator * (bcln / denominator) + other.numerator * (bcln / other.denominator);

        Fraction sum(n_num, bcln);
        sum.simplify();

        return sum;
    }

    Fraction operator-(const Fraction& other) const {
        assert(denominator != 0 && other.denominator != 0);

        int bcln = denominator * other.denominator;
        int n_num = numerator * (bcln / denominator) - other.numerator * (bcln / other.denominator);

        Fraction Minus(n_num, bcln);
        Minus.simplify();

        return Minus;
    }

    Fraction operator*(const Fraction& other) const {
        assert(denominator != 0 && other.denominator != 0);

        Fraction multiply(numerator * other.numerator, denominator * other.denominator);
        multiply.simplify();

        return multiply;
    }

    Fraction operator/(const Fraction& other) const {
        assert(denominator != 0 && other.denominator != 0);

        Fraction tempt(other.denominator, other.numerator);
        Fraction divide(numerator * tempt.numerator, denominator * tempt.denominator);

        divide.simplify();
        return divide;
    }
};

int main(){
    Fraction x(2, 3);
    Fraction y(10, 0);
    Fraction z = x / y;
    z.print();

    return 0;
}
