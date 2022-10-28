#include <iostream>
using namespace std;

int main()
{
    const double MIL_PER_YEAR = 1.5;

    cout << "The ocean's level will grow " << MIL_PER_YEAR * 5
        << " millimeters after 5 years." << endl;
    cout << "The ocean's level will grow " << MIL_PER_YEAR * 7
        << " millimeters after 7 years." << endl;
    cout << "The ocean's level will grow " << MIL_PER_YEAR * 10
        << " millimeters after 10 years." << endl;
    cout << endl;

    return 0;
}
