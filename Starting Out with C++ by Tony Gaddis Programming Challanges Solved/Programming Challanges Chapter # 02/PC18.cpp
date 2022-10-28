#include <iostream>
using namespace std;

int main()
{
    const int TOTAL_CUSTOMERS = 16500;

    cout << "\nThe approximate number of customers in the " 
	     << " survey who purchase one or more energy drinks per week:"
         << TOTAL_CUSTOMERS*0.15 << endl;

    cout << "\nThe approximate number of customers in the " 
	     << " survey who prefer citrus-flavored energy drinks:"
         << (TOTAL_CUSTOMERS*0.15)*0.58 << endl;

    return 0;
}
