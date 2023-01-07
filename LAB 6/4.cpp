#include <iostream>
using namespace std;
int main()
{
    int x, y, r;
    char z;
    cout << "Enter any operator (+,-,*,/) : ";
    cin >> z;
    cout << "Enter first number : ";
    cin >> x;
    cout << "Enter second number : ";
    cin >> y;
    if (z == '+')
    {
        r = x + y;
        cout << "result is:" << r;
    }
    else if (z == '*')
    {
        r = x * y;
        cout << "result is:" << r;
    }
    else if (z == '-')
    {
        r = x - y;
        cout << "result is:" << r;
    }
    else if (z == '/')
    {
        r = x / y;
        cout << "result is:" << r;
    }
    else
        cout << "This operation is invalid";
    return 0;
}
