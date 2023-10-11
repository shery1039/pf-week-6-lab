#include <iostream>
using namespace std;

float lowestPrice(int distance, string period);

main()
{
    int distance;
    cout << "Enter the number of kilometers: ";
    cin >> distance;
    string period;
    cout << "Enter the period of the day(day/night); ";
    cin >> period;
    float result1 = lowestPrice(distance, period);
    cout<<"Cheapest ride is: "<<result1;
}

float lowestPrice(int distance, string period)
{
    float result;
    if (period == "day" && distance < 20)
    {
        result = distance * 0.79 + 0.70;
    }

    if (period == "night" && distance < 20)
    {
        result = distance * 0.90 + 0.70;
    }

    if ((period == "night" || period == "day") && (distance >= 20 && distance < 100))
    {
        result = distance * 0.09;
    }

    if ((period == "night" || period == "day") && (distance >= 100))
    {
        result = distance * 0.06;
    }

    return result;
}