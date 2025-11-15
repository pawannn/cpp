#include <iostream>

struct Car
{
    std::string model;
    int year;
    std::string color;
};

void PrintCar(Car car);

int main()
{
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.color = "Yello";
    car1.year = 2023;

    car2.model = "Corvette";
    car2.color = "Black";
    car2.year = 2022;

    return 0;
}

// copy of original struct
void PrintCar(Car car)
{
    std::cout << car.model << std::endl;
    std::cout << car.color << std::endl;
    std::cout << car.year << std::endl;
}