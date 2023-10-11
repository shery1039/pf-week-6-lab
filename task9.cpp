#include <iostream>
using namespace std;
string checkTitle(int age, char gender)
{
    string title;
    if (gender == 'm')
    {
        if (age < 16)
        {
            title = "Master";
        }
        else
        {
            title = "Mr.";
        }
    }
    else if (gender == 'f')
    {
        if (age < 16)
        {
            title = "Miss";
        }
        else
        {
            title = "Ms.";
        }
    }
    else
    {
        title = "";
    }

    return title;
}
int main()
{
    int age;
    char gender;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender (m/f): ";
    cin >> gender;
    cout << "Your personal title is: " << checkTitle(age, gender);
    return 0;
}