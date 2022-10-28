#include <iostream>
using namespace std;

int main()
{
    float profit = 0.35,
          cost = 14.95,
          selling_price = (cost * profit) + cost;

    cout << endl;
    cout << "An electronic company sells circuit boards at a\n";
    cout << "35 percent profit. Therefore, the selling price\n";
    cout << "of a circuit board that costs $" << cost << " is $";
    cout << selling_price << endl << endl;

    return 0;
}
