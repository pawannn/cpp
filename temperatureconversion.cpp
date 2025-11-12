#include <iostream>

int main()
{
    double temp;
    char unit;

    std::cout << "**************** Temperature conversion ****************";

    std::cout << "F - Fahrenheit \n";
    std::cout << "C - Celsius \n";
    std::cout << "Enter the Unit of temperature : ";
    std::cin >> unit;

    if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the temperature in celsius : ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature in Fahrenheit : " << temp;
    }
    else if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the temperature in fahrenheit : ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperature in Celsius : " << temp;
    }

    std ::cout << "********************************************************";
    return 0;
}