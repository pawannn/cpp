#include <iostream>

int main()
{
    int guessednum, num;

    srand(time(0));

    while (true)
    {
        num = (rand() % 6) + 1;

        std::cout << "Guess a number : ";
        std::cin >> guessednum;

        if (num == guessednum)
        {
            std::cout << "You guessed the correct number!!";
            return 0;
        }

        std::cout << "Oops! the number was " << num << ", Try again !!" << std::endl;
    }
}