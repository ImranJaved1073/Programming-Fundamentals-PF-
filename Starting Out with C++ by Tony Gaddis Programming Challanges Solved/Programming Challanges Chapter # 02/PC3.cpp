#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int purchase = 95;
    float stateSalesTax = .04,countySalesTax = .02;

    // Set decimal percision to 2 places after the decimal point. Ex 0.00
    cout << setprecision(2) << fixed << endl;

    cout << "The total state sales tax on a $95 dollar purchase is $";
    cout << purchase * stateSalesTax << endl;

    cout << "The total county sales tax on a $95 dollar purchase is $";
    cout << purchase * countySalesTax << endl << endl;

    return 0;
}
