#include <iostream>

class Student
{
public:
    std::string name;
    int age;

    Student(std::string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{

    Student stu = Student("Pawan", 23);
    std::cout << stu.name;
}