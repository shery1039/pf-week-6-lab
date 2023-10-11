#include <iostream>
using namespace std;
float discount(string day, string month, float price)
{
    float payable = price;
    if (day == "Sunday")
    {
        if (month == "October" || month == "March" || month == "August")
        {
            payable = price * 0.9;
        }
    }
    else if (day == "Monday")
    {
        if (month == "November" || month == "December")
        {
            payable = price * 0.95;
        }
    }
    else
    {
        payable = price;
    }

    return payable;
}
int main()
{
    string day;
    string month;
    float price;
    cout << "Enter Purchase Day: ";
    cin >> day;
    cout << "Enter Purchase Month: ";
    cin >> month;
    cout << "Enter Purchase Amount: ";
    cin >> price;
    cout << "Payable Amount after discount: " << discount(day, month, price);
    return 0;
}