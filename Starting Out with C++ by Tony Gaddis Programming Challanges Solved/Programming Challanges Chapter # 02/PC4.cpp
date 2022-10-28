#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const float MEAL_CHARGE = 88.67, TAX_PERCENT = 0.0675, TIP = 0.20;
	float taxAmount, tipAmount, totalBill;
	taxAmount = MEAL_CHARGE * TAX_PERCENT;
	tipAmount = TIP * (taxAmount + MEAL_CHARGE);
	totalBill = tipAmount + MEAL_CHARGE + taxAmount;
	cout << setprecision(2) << fixed;
	cout << "The total meal cost is:$" << MEAL_CHARGE << endl;
	cout << "The total tax amount is:$" << taxAmount << endl;
	cout << "The total tip amount is:$" << tipAmount << endl;
	cout << "The total bill is:$" << totalBill << endl;
}
