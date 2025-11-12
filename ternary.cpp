#include <iostream>

// ternary operator ? = replacement to an if else statement
// condition ? expression 1 : expression 2;

int main()
{
    // int grade = 75;
    // grade > 60 ? std::cout << "You pass" : std::cout << "You fail";

    int num = 4;
    num % 2 == 0 ? std::cout << "Even" : std::cout << "Odd";
}