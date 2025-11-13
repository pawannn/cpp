#include <iostream>

int main()
{
    std::string names[] = {"dudu", "bubu"};

    // iterating over array with a normal for loop
    for (int i = 0; i < sizeof(names) / sizeof(std::string); i++)
    {
        std::cout << names[i] << std::endl;
    }

    // iterating over an array with for each loop
    for (std::string name : names)
    {
        std::cout << name << " ";
    }
}