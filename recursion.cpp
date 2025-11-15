#include <iostream>

void walk(int steps);
int factorial(int num);

int main()
{
    std::cout << factorial(5);
}

int factorial(int num)
{
    if (num > 1)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return num;
    }
}

void walk(int steps)
{
    if (steps > 0)
    {
        std::cout << "Walk" << std::endl;
        walk(steps - 1);
    }
}