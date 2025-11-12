#include <iostream>

// type conversion - converts one data type to another
// implicit : automatic type conversioon done by the compiler
// explicit : type conversion done through code

int main()
{

    // implicit
    char x = 100;
    std::cout << x; // d

    // explicit type conversion
    int x = (int)3.14;
    std::cout << x;
    return 0;
}