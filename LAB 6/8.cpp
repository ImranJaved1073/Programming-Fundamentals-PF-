#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter month number: ";
    cin >> x;
    if (x == 2)
        cout << "Number of days in this month: 28 " << endl;
    else if (x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12)

        cout << "Number of days in this month: 31 " << endl;
    else if (x == 4 || x == 6 || x == 9 || x == 11)
        cout << "Number of days in this month: 30 " << endl;
    return 0;
}