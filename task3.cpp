#include <iostream>
using namespace std;

float perimeter(char shape, float value);

main()
{
    char shape;
    cout << "Enter the shape(s for square, t for triangle, h for hexagon, c for circle): ";
    cin >> shape;
    float value;
    cout << "Enter the value: ";
    cin >> value;
    float result = perimeter(shape, value);
    cout << "The perimeter is " << result;
}

float perimeter(char shape, float value)
{
    float answer;
    if (shape == 's')
    {
        answer = 4 * value;
    }

    if (shape == 'c')
    {
        answer = 6.28 * value;
    }

    if (shape == 't')
    {
        answer = 3 * value;
    }

    if (shape == 'h')
    {
        answer = 6 * value;
    }

    return answer;
}