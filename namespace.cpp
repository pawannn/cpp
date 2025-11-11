#include <iostream>

// Namespace provides a solution for prevening name conflicts in large projects;
// Each entity requires a unique name;
// A namespace allows us to declare a variable with same name as long as name space is different.

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    // Access the first namespace variable X;
    std::cout << first::x;

    // Access the second namespace vairable X;
    std::cout << second::x;
    return 0;
}