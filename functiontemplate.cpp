#include <iostream>
template <typename T, typename U>

// function template - describe what a fucntion looks like.
// It can be used to generate as many as function overloads as needed, each using different data type.

auto max(T x, U y)
{
    return x > y ? x : y;
}

int main()
{
    std::cout << max(1, 2) << "\n";
    return 0;
}