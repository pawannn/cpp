#include <iostream>

double square(int num);
double cube(int num);

std::string concat_name(std::string str1, std::string str2);

int main()
{
    int num = 2;
    int numsq = square(num);
    std::cout << numsq << std::endl;

    int numcb = cube(num);
    std::cout << numcb << std::endl;

    std::string firstname = "Pawan";
    std::string seconname = "Kalyan";

    std::string fullname = concat_name(firstname, seconname);
    std::cout << fullname;
}

double square(int num)
{
    return num * num;
}

double cube(int num)
{
    return num * num * num;
}

std::string concat_name(std::string str1, std::string str2)
{
    return str1 + " " + str2;
}