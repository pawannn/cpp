#include <iostream>

int main()
{
    // array - An array is a data structure that can store multiple values and can be accessed by the index number

    // Dynamic array
    std::string car[] = {"BMW", "Mercedies", "Mustang"};

    car[0] = "camero";

    std::cout << car[0];
    std::cout << car[1];
    std::cout << car[2];

    // Static Array
    std::string newCars[4]; // array with size 4
    newCars[0] = "BMW";
    newCars[1] = "Mercedies";
    newCars[2] = "Mustang";
}