#include <iostream>

int main()
{
    // fill() = Fills a range of elements with a specified value

    const int SIZE = 100;
    std::string foods[SIZE];

    fill(foods, foods + (SIZE / 2), "dudu");
    fill(foods + (SIZE / 2), foods + SIZE, "bubu");

    for (std::string food : foods)
    {
        std::cout << food << std::endl;
    }

    return 0;
}
