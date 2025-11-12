#include <iostream>

int main()
{
    // switch = compare a value against matching case
    int month;
    std::cout << "Enter month number";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "January";
        break;

    case 2:
        std::cout << "Feburary";
        break;

    case 3:
        std::cout << "March";
        break;

    case 4:
        std::cout << "April";
        break;
    default:
        std::cout << "end";
    }
}