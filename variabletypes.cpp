#include <iostream>

// Local variables = declared inside a function or a block.
// Global variables = declared outside of all functions.

void printNum();

// global variable, can be accessed anywhere througout the program.
int allNum = 4;

int main()
{
    std::cout << allNum << std::endl;
    printNum();
    return 0;
}

void printNum()
{
    // local variable - can be accessed only inside this function
    int myNum = 1;

    std::cout << allNum << std::endl;
    std::cout << myNum << std::endl;
}