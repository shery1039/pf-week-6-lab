#include <iostream>
using namespace std;

string calculateCost(float budjet, string category, int people);

main()
{
    float budjet;
    string category;
    int people;
    cout << "Enter the budjet: ";
    cin >> budjet;
    cout << "Enter the category(VIP/Normal): ";
    cin >> category;
    cout << "Enter the number if people: ";
    cin >> people;

    string Answer=calculateCost( budjet,  category,  people);
    cout<<Answer;
}

string calculateCost(float budjet, string category, int people)
{
    string result;
    if (category == "VIP" && (people >= 1 && people <= 4))
    {
        float cal = budjet - (budjet * 75 / 100);
        float cal1 = 499.99 * people;
        if (cal1 > cal)
        {
            float dif = cal1 - cal;
            result = "Not enough Money! You need " + to_string(dif) + "Leva.";
        }
    }

    if (category == "VIP" && (people > 4 && people <= 9))
    {
        float cal = budjet - (budjet * 60 / 100);
        float cal1 = 499.99 * people;
        if (cal1 > cal)
        {
            float dif = cal1 - cal;
            result = "Not enough Money! You need " + to_string(dif) + "Leva.";
        }
    }

    if (category == "VIP" && (people > 10 && people <= 24))
    {
        float cal = budjet - (budjet * 50 / 100);
        float cal1 = 499.99 * people;
        if (cal1 > cal)
        {
            float dif = cal1 - cal;
            result = "Not enough Money! You need " + to_string(dif) + "Leva.";
        }
    }

    if (category == "VIP" && (people > 25 && people <= 49))
    {
        float cal = budjet - (budjet * 40 / 100);
        float cal1 = 499.99 * people;
        if (cal1 > cal)
        {
            float dif = cal1 - cal;
            result = "Not enough Money! You need " + to_string(dif) + "Leva.";
        }
    }

    if (category == "VIP" && (people > 50))
    {
        float cal = budjet - (budjet * 25 / 100);
        float cal1 = 499.99 * people;
        if (cal1 > cal)
        {
            float dif = cal1 - cal;
            result = "Not enough Money! You need " + to_string(dif) + "Leva.";
        }
    }

    if (category == "VIP" && (people >= 1 && people <= 4))
    {
        float cal = budjet - (budjet * 75 / 100);
        float cal1 = 499.99 * people;
        if (cal > cal1)
        {
            float dif = cal - cal1;
            result = "Yes you have left " + to_string(dif) + "Leva.";
        }
    }

    if (category == "VIP" && (people > 4 && people <= 9))
    {
        float cal = budjet - (budjet * 60 / 100);
        float cal1 = 499.99 * people;
        if (cal > cal1)
        {
            float dif = cal - cal1;
            result = "Yes you have left " + to_string(dif) + "Leva.";
        }
    }

    if (category == "VIP" && (people > 10 && people <= 24))
    {
        float cal = budjet - (budjet * 50 / 100);
        float cal1 = 499.99 * people;
        if (cal > cal1)
        {
            float dif = cal - cal1;
            result = "Yes you have left " + to_string(dif) + "Leva.";
        }
    }

    if (category == "VIP" && (people > 25 && people <= 49))
    {
        float cal = budjet - (budjet * 40 / 100);
        float cal1 = 499.99 * people;
        if (cal > cal1)
        {
            float dif = cal - cal1;
            result = "Yes you have left " + to_string(dif) + "Leva.";
        }
    }

    if (category == "VIP" && (people > 50))
    {
        float cal = budjet - (budjet * 25 / 100);
        float cal1 = 499.99 * people;
        if (cal > cal1)
        {
            float dif = cal - cal1;
            result = "Yes you have left " + to_string(dif) + "Leva.";
        }
    }

    if (category == "Normal" && (people >= 1 && people <= 4))
    {
        float cal = budjet - (budjet * 75 / 100);
        float cal1 = 249.99 * people;
        if (cal1 > cal)
        {
            float dif = cal1 - cal;
            result = "Not enough Money! You need " + to_string(dif) + "Leva.";
        }
    }

    if (category == "Normal" && (people > 4 && people <= 9))
    {
        float cal = budjet - (budjet * 60 / 100);
        float cal1 = 249.99 * people;
        if (cal1 > cal)
        {
            float dif = cal1 - cal;
            result = "Not enough Money! You need " + to_string(dif) + "Leva.";
        }
    }

    if (category == "Normal" && (people > 10 && people <= 24))
    {
        float cal = budjet - (budjet * 50 / 100);
        float cal1 = 249.99 * people;
        if (cal1 > cal)
        {
            float dif = cal1 - cal;
            result = "Not enough Money! You need " + to_string(dif) + "Leva.";
        }
    }

    if (category == "Normal" && (people > 25 && people <= 49))
    {
        float cal = budjet - (budjet * 40 / 100);
        float cal1 = 249.99 * people;
        if (cal1 > cal)
        {
            float dif = cal1 - cal;
            result = "Not enough Money! You need " + to_string(dif) + "Leva.";
        }
    }

    if (category == "Normal" && (people > 50))
    {
        float cal = budjet - (budjet * 25 / 100);
        float cal1 = 249.99 * people;
        if (cal1 > cal)
        {
            float dif = cal1 - cal;
            result = "Not enough Money! You need " + to_string(dif) + "Leva.";
        }
    }

    if (category == "Normal" && (people >= 1 && people <= 4))
    {
        float cal = budjet - (budjet * 75 / 100);
        float cal1 = 249.99 * people;
        if (cal > cal1)
        {
            float dif = cal - cal1;
            result = "Yes you have left " + to_string(dif) + "Leva.";
        }
    }

    if (category == "Normal" && (people > 4 && people <= 9))
    {
        float cal = budjet - (budjet * 60 / 100);
        float cal1 = 249.99 * people;
        if (cal > cal1)
        {
            float dif = cal - cal1;
            result = "Yes you have left " + to_string(dif) + "Leva.";
        }
    }

    if (category == "Normal" && (people > 10 && people <= 24))
    {
        float cal = budjet - (budjet * 50 / 100);
        float cal1 = 249.99 * people;
        if (cal > cal1)
        {
            float dif = cal - cal1;
            result = "Yes you have left " + to_string(dif) + "Leva.";
        }
    }

    if (category == "Normal" && (people > 25 && people <= 49))
    {
        float cal = budjet - (budjet * 40 / 100);
        float cal1 = 249.99 * people;
        if (cal > cal1)
        {
            float dif = cal - cal1;
            result = "Yes you have left " + to_string(dif) + "Leva.";
        }
    }

    if (category == "Normal" && (people > 50))
    {
        float cal = budjet - (budjet * 25 / 100);
        float cal1 = 249.99 * people;
        if (cal > cal1)
        {
            float dif = cal - cal1;
            result = "Yes you have left " + to_string(dif) + "Leva.";
        }
    }

    return result;
}