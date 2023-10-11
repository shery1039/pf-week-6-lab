#include <iostream>
using namespace std;
float totalIncome(string hall, int rows, int columns)
{
    float ticketPrice;
    float income;
    int totalSeats = rows * columns;
    if (hall == "Premiere")
    {
        ticketPrice = 12;
    }
    else if (hall == "Normal")
    {
        ticketPrice = 7.5;
    }
    else
    {
        ticketPrice = 5;
    }
    income = ticketPrice * totalSeats;
    return income;
}
int main()
{
    string hall;
    int rows;
    int columns;
    cout << "Enter the screening type (Premiere/Normal/Discount): ";
    cin >> hall;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    cout << totalIncome(hall,rows,columns);
    return 0;
}