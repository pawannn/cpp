#include <iostream>

struct student
{
    std::string name;
    double gpa;
    bool enrolled = true;
};

int main()
{
    student student1;
    student1.name = "dudu";
    student1.gpa = 8.48;
    student1.enrolled = false;

    student student2;
    student2.name = "bubu";
    student2.name = 9.14;
    student2.enrolled = false;

    std::cout << "Name : " << student1.name << std::endl;
    std::cout << "gpa : " << student1.gpa << std::endl;
    std::cout << "enrolled : " << student1.enrolled << std::endl;

    std::cout << "Name : " << student2.name << std::endl;
    std::cout << "gpa : " << student2.gpa << std::endl;
    std::cout << "enrolled : " << student2.enrolled << std::endl;

    return 0;
}