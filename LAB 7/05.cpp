#include <iostream>
using namespace std;
int main()
{
    int a, n,pow=1;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter power: ";
    cin >> n;
    cout << a << " ^ " << n << " = ";
    while (n != 0)
    {
        pow = pow * a;
        n--;
    }
    cout << pow;
}