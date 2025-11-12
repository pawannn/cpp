#include <iostream>

int main()
{
    // && = check if two conditions are true
    // || = checks if one of the conditions are true
    // ! = reverse the logical state

    int temp;

    std::cout << "Enter the temperature : ";
    std::cin >> temp;

    if (temp >= 0 && temp <= 30)
    {
        std::cout << "Temperature is good";
    }

    if (temp < 0 || temp > 30)
    {
        std::cout << "Temperature is bad";
    }

    bool sunny = true;
    if (!sunny)
    {
        std::cout << "It's not sunny";
    }
    else
    {
        std::cout << "It's sunny";
    }
}