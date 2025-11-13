#include <iostream>

// sizeOf - Determines the size in bytes of a variable, data type, class, object etc.

int main()
{
    double gpa = 2.25;
    std::cout << sizeof(gpa) << std::endl; // 8 Bytes

    std::string name = "Bro";
    std::cout << sizeof(name) << std::endl; // 32 Bytes

    char grades[] = {'A', 'B', 'C', 'D', 'E'};
    std::cout << sizeof(grades) << std::endl;                // 5
    std::cout << sizeof(grades) / sizeof(char) << std::endl; // get length of array

    return 0;
}