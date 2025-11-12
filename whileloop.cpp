#include <iostream>

// While Loop - runs a set of statements until a certain condition is met

int main()
{
    std::string name;

    // this will keep asking for the name until a proper name is given
    while (name.empty())
    {
        std::cout << "Enter your name : ";
        std::cin >> name;
    }

    return 0;
}