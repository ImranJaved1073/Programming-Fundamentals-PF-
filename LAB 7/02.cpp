#include <iostream>
using namespace std;
int main()
{
    int x, r, sum = 0, count = 0;
    cout << "Enter number =";
    cin >> x;
    while (x != 0)
    {
        r = x % 10;
        x = x / 10;
        if (r % 2 != 0)
        {
            sum += r;
            count++;
        }
    }
    cout << "Count of odd numbers = " << count;
    cout << "\nSum of odd numbers in a number = " << sum;
}