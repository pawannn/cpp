#include <iostream>

int searchArray(int numbers[], int size, int elememnt);

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int index;
    int mynum;

    std::cout << "Enter element to search for : ";
    std::cin >> mynum;

    index = searchArray(numbers, size, mynum);

    if (index != -1)
    {
        std::cout << mynum << " is at index " << index;
    }
    else
    {
        std::cout << mynum << " is not in the array";
    }

    return 0;
}

int searchArray(int numbers[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == element)
        {
            return i;
        }
    }
    return -1;
}
