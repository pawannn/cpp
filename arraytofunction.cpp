#include <iostream>

void calculate(int numbers[]);

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
}

// passing the array alone will not be sufficient as this function has no idea how but the array is.
void calculate(int numbers[], int size)
{
    std::cout << sizeof(numbers) / size;
}
