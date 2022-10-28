#include <iostream>
using namespace std;

int main()
{
	//variables declaration
    const float PERCENTAGE_PROFIT = 0.35;
    const float SELLING_PRICE = 14.95;
    float sellingPrice;
    
    sellingPrice = (SELLING_PRICE * PERCENTAGE_PROFIT) + SELLING_PRICE;//formula
    
    //Results
    cout << "An electronic company sells circuit boards at a\n";
    cout << "35 percent profit. Therefore, the selling price\n";
    cout << "of a circuit board that costs $" << SELLING_PRICE << " is $";
    cout << sellingPrice << endl << endl;
    cout << "And Net Profit is:$" << SELLING_PRICE * PERCENTAGE_PROFIT << endl;
    return 0;
}
