#include <iostream>
#include <cmath>

int main()
{
    double x = 3.14;
    double y = 4;
    double z;

    // get maximum of two numbers
    z = std::max(x, y);
    std::cout << "Maximum in " << x << " and " << y << " is " << z;

    // get minimum of two numbers
    z = std::min(x, y);
    std::cout << "Minimum in " << x << " and " << y << " is " << z;

    // power
    z = pow(x, y);
    std::cout << x << " power " << y << " is " << z;

    // sqrt
    z = sqrt(9);
    std::cout << "square root of 9 is " << z;

    // abs
    z = abs(-3);
    std::cout << "Absolute value of -3 is " << z;

    // round
    z = round(x);
    std::cout << "Round off value of " << x << " is " << z;
}