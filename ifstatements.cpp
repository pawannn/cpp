#include <iostream>

int main()
{
    // if statement = do something if a condition is true, if not, then don't do it.
    int age;
    std::cout << "Enter your age : ";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "You are eligible to vote";
    }
    else if (age == 17)
    {
        std::cout << "You should start registration";
    }
    else
    {
        std::cout << "You are not eligible to vote";
    }

    return 0;
}
