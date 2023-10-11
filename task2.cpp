#include <iostream>
using namespace std;

int ParityAnalysis(int number);
main()
{
    int number;
    cout << "Enter a 3 digit number:";
    cin >> number;
    int result = ParityAnalysis(number);
    cout << result;
}

int ParityAnalysis(int number)
{
    int number1 = number % 10;

    int number2 = number / 10;

    int number3 = number2 % 10;

    int number4 = number2 / 10;

    int number5 = number4 % 10;

    int sum = number1 + number3 + number5;

    if (sum % 2 == 0 && number % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}