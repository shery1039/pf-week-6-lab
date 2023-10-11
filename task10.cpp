#include <iostream>
using namespace std;
bool checkEqual(int number1, int number2, int number3)
{
    if (number1 == number2 && number1 == number3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int number1; int number2; int number3;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "Enter the third number: ";
    cin >> number3;
    cout << checkEqual(number1,number2,number3);
    return 0;
}