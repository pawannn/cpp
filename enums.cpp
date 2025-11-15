#include <iostream>

enum Day
{
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6,
    sunday = 7
};

int main()
{
    Day today = monday;

    switch (today)
    {
    case monday:
        std::cout << "Monday";
    case tuesday:
        std::cout << "Tuesday";
    case wednesday:
        std::cout << "Wednesday";
    case thursday:
        std::cout << "Thursday";
    case friday:
        std::cout << "Friday";
    case saturday:
        std::cout << "Saturday";
    case sunday:
        std::cout << "Sunday";
    default:
        std::cout << "invalid day";
    }
}
