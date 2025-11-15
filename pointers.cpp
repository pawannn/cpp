#include <iostream>

// Pointer - variables that stores a memory address of another variable
int main()
{
    std::string name = "Pawan";
    std::string food[2] = {"dudu", "bubu"};

    std::string *pName = &name;
    std::string *pFood = food;

    std::cout << pName;
    std::cout << *pFood; // dudu
}