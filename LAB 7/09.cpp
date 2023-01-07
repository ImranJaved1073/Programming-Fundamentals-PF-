#include <iostream>
using namespace std;
int main()
{
    int y;
    cout << "Enter year =";
    cin >> y;
    if (y >= 0001 && y <= 9999)
    {
        if ((y % 4 == 0 && y % 400 == 0 || y % 100 != 0) && (y % 4 == 0 || y % 400 == 0 && y % 100 == 0))
            cout << y << " Year is a Leap Year\n";
        else
            cout << y << " Year is not a Leap year" << endl;
    }
}