#include<iostream>
using namespace std;
int main()
{
    int y, x, z,a, sum = 0;
    cout << "Enter 4 digit positive integer: ";
    cin >> x;
    
    y = x / 1000;
    x = x % 1000;
    sum = sum + y;

    z = x / 100;
    x = x % 100;
    sum = sum + z;
    
    a = x / 10;
    x = x % 10;
    sum = sum + a;
    
    sum = sum + x;
    cout << sum;
    return 0;
}