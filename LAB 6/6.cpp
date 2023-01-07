#include <iostream>
using namespace std;

int main()
{
    int hh, mm, ss, t;
    cout << "Enter time in seconds: ";
    cin >> t;
    hh = t / 3600;
    t %= 3600;
    mm = t / 60;
    t %= 60;
    ss = t;
    cout << hh << ":" << mm << ":" << ss;
    return 0;
}