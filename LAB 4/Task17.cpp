#include<iostream>
using namespace std;
int main()
{
    int y, x, z, a, sum = 0;
    cout << "Enter 3 digit positive integer: ";
    cin >> x; //assume x is 786
    z = x / 100;// z contains first digit 7
    sum = sum + z;
    x = x % 100; //x updated to 86
    a = x / 10;  // a contains 8
    sum = sum + a;
    x = x % 10; // x updated to 6
    sum = sum + x;
    cout << sum;
    return 0;
}