#include <iostream>
using namespace std;

int main()
{
    const int ONE_ACRE_OF_LAND = 43560;
    int num_of_acres = 391876;
    double  total_acreage = num_of_acres / ONE_ACRE_OF_LAND;

    cout << endl;
    cout << "----------------------------------------------" << endl;
    cout << "One acre of land is equivalent to 43,560 sqft." << endl;
    cout << "----------------------------------------------" << endl;
    cout << "There are approximately " << total_acreage << " acres ";
    cout << "in a\ntract of land that has 391,876 square feet.\n";
    cout << endl;

    return 0;
}
