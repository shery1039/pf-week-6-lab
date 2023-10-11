#include <iostream>
using namespace std;

int discount(string day, string month, int purchase);

main()
{
    string day;
    cout << "Enter the day: ";
    cin >> day;
    string month;
    cout << "Enter the month name: ";
    cin >> month;
    int purchase;
    cout << "Enter the Purchase amount: ";
    cin >> purchase;

    int result=discount(day,month,purchase);
    cout<<"Payable amount after Discount is: "<<result;
}

int discount(string day, string month, int purchase)
{
    int amount;
    if (day == "Sunday" && (month == "October"||month=="March"||month=="August"))
    {
        amount = purchase - (purchase * 10 / 100);
    }

    else
    {
        amount = purchase;
    }

    return amount;
}