#include <iostream>
using namespace std;
int main()
{
    double payAmount = 2200.0,
           payPeriods = 26,
           annualPay = payAmount * payPeriods;
    cout << "Total annual pay = $" << annualPay;

    return 0;
}
