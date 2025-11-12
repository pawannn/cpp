#include <iostream>

// function -  A block of a reusable code

void greet(std::string name, int age)
{
    std::cout << "Hello, " << name << std::endl;
    if (age > 18)
    {
        std::cout << "You are eligible to vote!!";
    }
    else
    {
        std::cout << "You are not eligible to vote!";
    }
}

int main()
{
    std::string name = "Pawan";
    int age = 10;

    greet(name, age);
    return 0;
}
