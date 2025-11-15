#include <iostream>

// const parameter = parameter that is read-only

void printInfo(std::string name, int age);

int main()
{
    std::string name = "pawan";
    int age = 0;
    printInfo(name, age);

    return 0;
}

void printInfo(const std::string name, const int age)
{
    std::cout << "Name : " << name << std::endl;
    std::cout << "Age : " << age << std::endl;
}