#include <iostream>
using namespace std;
int main()
{
    float e;
    float total_electricity_bill = 0;
    cout << "Enter total number of units consumed: ";
    cin >> e;
    if (e <= 50)
    {
        total_electricity_bill = e * 0.50;
        cout << "Total elecrfricity bill is: " << total_electricity_bill;
    }
    else if (e > 50 && e <= 150)
    {
        total_electricity_bill = 25 + (e - 50) * 0.75;
        cout << "Total elecrfricity bill is: " << total_electricity_bill;
    }
    else if (e > 150 && e <= 250)
    {
        total_electricity_bill = 100 + ((e - 150) * 1.20);
        cout << "Total elecrfricity bill is: " << total_electricity_bill;
    }
    else if (e > 250)
    {
        total_electricity_bill = 220 + (e - 250) * 1.50;
        cout << "Total elecrfricity bill is: " << total_electricity_bill;
    }
    return 0;
}