#include <iostream>

// function overloading = same function name but different parameters

int add(int num1, int num2);
int add(int num1, int num2, int num3);
int add(int num1, int num2, int num3, int num4);

int main()
{
    std::cout << add(1, 2);
    std::cout << add(1, 2, 3);
    std::cout << add(1, 2, 3, 4);
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int add(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

int add(int num1, int num2, int num3, int num4)
{
    return num1 + num2 + num3 + num4;
}