#include <iostream>
using namespace std;
int main()
{
    int x, larg = 0;

    cout << "(-999 to exit)" << endl;
    while (x != -999)
    {
        cout << "Enter number:";
        cin >> x;
        if (larg < x)
            larg = x;
    }
    cout << "Largest number is: " << larg;
}