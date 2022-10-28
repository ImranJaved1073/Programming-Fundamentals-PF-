#include <iostream>
using namespace std;
int main()
{
    const int SENTINEL_VALUE = -99;
    int num, min, max;

    cout << "This program will display the greatest and the least values.\n"
        << "Enter a number to begin and enter (-99) to quit the program.\n"
        << "Enter a value: ";
    while (!(cin >> num))
    {
        cout << "Error. Number must be chosen.";
        cin.clear();
        cin.ignore(1200, '\n');
    }

    min = max = num;

    while (num != SENTINEL_VALUE)
    {
        if (num < min)
            min = num;

        if (num > max)
            max = num;

        cout << "Enter a value: ";
        while (!(cin >> num))
        {
            cout << "Error. Number must be chosen.";
            cin.clear();
            cin.ignore(1200, '\n');
        }
    }

    cout << "\nSmallest number is: " << min << endl;
    cout << "Largest number is: " << max << endl;

    return 0;
}