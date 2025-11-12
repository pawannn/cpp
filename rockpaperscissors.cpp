#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    std::cout << "************************** ROCK PAPER SCISSORS **************************" << std::endl;
    std::cout << "Select your choice : Rock -> r, Paper -> p, Scissors -> s\n";
    char userChoice = getUserChoice();
    char computerChoice = getComputerChoice();

    std::cout << "Your choice : ";
    showChoice(userChoice);

    std::cout << "computer choice : ";
    showChoice(computerChoice);

    chooseWinner(userChoice, computerChoice);

    std::cout << "\n*************************************************************************" << std::endl;
}

char getUserChoice()
{
    char userChoice;
    std::cout << "Select an option : ";
    std::cin >> userChoice;
    return userChoice;
}

char getComputerChoice()
{
    srand(time(0));

    int num = (rand() % 3) + 1;
    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    default:
        return 'r';
    }
}

void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "Rock\n";
        break;
    case 'p':
        std::cout << "Paper\n";
        break;
    case 's':
        std::cout << "Scissors\n";
        break;
    }
}

void chooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            std::cout << "It's a Tie";
        }
        else if (computer == 'p')
        {
            std::cout << "You Loose!!";
        }
        else if (computer == 's')
        {
            std::cout << "You Won!!";
        }
        break;
    case 'p':
        if (computer == 'r')
        {
            std::cout << "You Won!!";
        }
        else if (computer == 'p')
        {
            std::cout << "It's a Tie";
        }
        else if (computer == 's')
        {
            std::cout << "You Loose!!";
        }
        break;
    case 's':
        if (computer == 'r')
        {
            std::cout << "You Loose!!";
        }
        else if (computer == 'p')
        {
            std::cout << "You Won!!";
        }
        else if (computer == 's')
        {
            std::cout << "It's a Tie";
        }
        break;
    default:
        std::cout << "Invalid selection";
    }
}
