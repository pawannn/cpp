#include <iostream>

// Luhn Algorithm
// ------------------
// 1. Double every second digit from right to left.
// If doubled number is two digit, split them.
// 2. Add all single numbers from step 1.
// 3. Add all odd numbered digits from right to left.
// 4. Sum results from step 2 and 3.
// 5. If step 4 is divisible by 10, # is valid.

// 6011 0009 9013 9424
// Every second digit - 6 1 0 0 9 1 9 2
// Double every second digit - 12 2 0 0 18 2 18 4
// Split if the addition is double digit - 1 2 2 0 0 1 8 2 1 8 4
// Add all the doubled and split digits = 1 + 2 + 2 + 0 + 0 + 1 + 8 + 2 + 1 + 8 + 4 = 29
// All Odd numbered digits = 0 1 0 9 0 3 4 4
// Add All Odd numbered digits = 0 + 1 + 0 + 9 + 3 + 4 + 4 = 21
// add both the results = 21 + 29 = 50
// check if the result is divisible by 10 - 50 / 10 = 5 remainder 0 - its a valid card

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main()
{
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter Card Number : ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0)
    {
        std::cout << cardNumber << " : valid";
    }
    else
    {
        std::cout << cardNumber << " : in valid";
    }

    return 0;
}

int getDigit(const int number)
{
    return number % 10 + (number / 10 % 10);
}
int sumOddDigits(const std::string cardNumber)
{
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}
int sumEvenDigits(const std::string cardNumber)
{
    int sum = 0;
    for (int i = cardNumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}