#include <iostream>
using namespace std;
int main()
{
    int num, rem, rev = 0;
    cout << "Enter the number: ";
    cin >> num;

    while (num != 0)
    {
        rem = num % 10;
        if (rem % 2 == 0)
        {
            rev = rev * 10 + rem;
        }
        num = num / 10;
    }

    while (rev != 0)
    {
        rem = rev % 10;
        cout << rem;
        rev = rev / 10;
    }
    return 0;
}
