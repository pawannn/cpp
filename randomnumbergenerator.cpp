#include <iostream>

int main()
{
    // pseudo-random = Not truly random (but close)
    // srand(time(NULL));
    // get random number between 1 and 100
    // int num = (rand() % 100) + 1;
    // std::cout << num;

    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "You win a bumper sticker! \n";
        break;
    case 2:
        std::cout << "You win a t-string! \n";
        break;
    case 3:
        std::cout << "You win a free lunch! \n";
        break;
    case 4:
        std::cout << "You win a gift card! \n";
        break;
    case 5:
        std::cout << "You win a car \n";
        break;
    }

    return 0;
}
