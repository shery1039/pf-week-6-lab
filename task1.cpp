#include <iostream>
using namespace std;

int greaterNumber(int number1, int number2);

main()
{
    int number1, number2;
    cout << "Enter the first number:";
    cin >> number1;
    cout << "Enter the second number:";
    cin >> number2;

    int result=greaterNumber(number1,number2);
    cout<<result;
}

int greaterNumber(int number1, int number2)
{
    if (number1 > number2)
    {
        return true;
    }

    else
    {
        return false;
    }
}