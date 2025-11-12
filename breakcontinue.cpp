#include <iostream>

int main()
{
    // break - breaks a loop
    // continue - skips an interation in loop

    for (int i = 1; i < 20; i++)
    {
        if (i == 13)
        {
            // break the loop when the value of i is 13
            break;
        }

        if (i % 2 != 0)
        {
            // skip the iteration when the value if i is odd
            continue;
        }

        std::cout << i << std::endl;
    }
}