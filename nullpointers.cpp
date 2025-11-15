#include <iostream>

// NULL = a value that means something has no value.
// When a point is having null value, it means the pointer is not pointing to anything.

// nullptr = keyword that represents a null pointer literal.

// nullptr are helpful when determining if an address was assigned to a pointer.

int main()
{
    int *pointer = nullptr;
    int x = 123;
    pointer = &x;

    if (pointer == nullptr)
    {
        std::cout << "address was not assigned";
    }
    else
    {
        std::cout << "address was assigned \n";
    }

    return 0;
}
