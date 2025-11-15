#include <iostream>

class Car
{
public:
    std::string model;
    std::string color;
    int year;

    void drive()
    {
        std::cout << "Car is diving";
    }

    void park()
    {
        std::cout << "Parking the car";
    }
};

int main()
{
    Car car;

    car.model = "Mustang";
    car.color = "Yellow";
    car.year = 2025;

    car.park();
    car.drive();
}
