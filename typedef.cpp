#include <iostream>

// Typedef helps to create a new name (alias) for an existing data type to make code shorter or cleaner

typedef unsigned long int ulong;
typedef std::string text_t;

int main()
{
    ulong x = 10;
    std::cout << x;

    text_t name = "pawan";
    std::cout << name;
}
