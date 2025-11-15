#include <iostream>

class Animal
{
public:
    bool alive = true;

    void eat()
    {
        std::cout << "This animal is eating \n";
    }
};

class Dog : public Animal
{
public:
    void Bark()
    {
        std::cout << "Bow Bow \n";
    }
};

class Cat : public Animal
{
public:
    void Bark()
    {
        std::cout << "Meow Meow \n";
    }
};

int main()
{
    return 0;
}
