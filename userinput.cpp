#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{
    std::string name;
    int age;

    std::cout << "What is your name : ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "\nHello, " << name;

    std::cout << "What is your age : ";
    std::cin >> age;
    std::cout << "wow, you're " << age << " years old";

    return 0;
}