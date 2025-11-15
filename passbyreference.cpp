#include <iostream>

void swap(int &x, int &y);

int main()
{
    int x = 1;
    int y = 2;

    swap(x, y);

    std::cout << "x : " << x << " y : " << y;
}

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
