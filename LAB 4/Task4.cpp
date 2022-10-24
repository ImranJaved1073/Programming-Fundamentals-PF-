#include <iostream>
using namespace std;
int main()
{
	//The integer overflow occurs when a number is greater than the maximum value the data type can hold. 
	//The integer underflow occurs when a number is smaller than the minimum value the data type can hold.
	cout << " Range of int is [-2147483648, 2147483647]" << endl << endl;

	int num1 = 2147483647;      // maximum range of integer
	cout << " Overflow the integer range and set the value to minimum range : " << num1 + 1 << endl;

	int num2 = -2147483648;     // minimum range of integer
	cout << " Underflow the range and set the value to maximum range : " << num2 - 1 << endl;
	cout << endl;
	return 0;
}