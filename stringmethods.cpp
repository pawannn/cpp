#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter your name : ";
    std::getline(std::cin, name);

    // Get length of a string
    if (name.length() > 12)
    {
        std::cout << "Name cannot exceed 12 characters";
        return 0;
    }

    // check if a string is empty
    if (name.empty())
    {
        std::cout << "You didn't enter anything";
        return 0;
    }

    // clear a string
    // name.clear();

    // append to a name
    name.append("@gmail.com");
    std::cout << name << std::endl;

    // get a specific character at index
    std::cout << name.at(1) << std::endl;

    // insert a character at a given position
    name.insert(1, "@");
    std::cout << name << std::endl;

    // find a certain character
    std::cout << name.find("a") << std::endl;

    // erase a slice of string
    name.erase(0, 3);
    std::cout << name << std::endl;

    return 0;
}