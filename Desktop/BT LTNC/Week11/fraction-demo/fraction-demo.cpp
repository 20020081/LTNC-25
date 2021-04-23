#include <iostream>
#include "fraction.h"
using namespace std;

int main()
{
    Fraction x(2, 3);
    Fraction y(4, 6);
    Fraction z = x * y;
    z.print();

    return 0;
}
