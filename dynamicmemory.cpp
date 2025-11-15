#include <iostream>

// dynamic memory - Memory that is allocated after the program is already compiled and running.
// The 'new' keyword allocates memory in the heap rather than stack

// Useful when we don't know how much memory we will need.
// Makes our program more flexible, especially when accepting user input.

int main()
{
    int *ptrNum = NULL;

    ptrNum = new int;

    *ptrNum = 21;

    std::cout << "address : " << ptrNum << "\n";
    std::cout << "value : " << *ptrNum << "\n";

    delete ptrNum;

    char *pGrades = NULL;
    int size;

    std::cout << " How many grades do you want ?";
    std::cin >> size;
    pGrades = new char[size];

    delete[] pGrades;

    return 0;
}