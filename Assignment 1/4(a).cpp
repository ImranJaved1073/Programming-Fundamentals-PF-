//QUESTION
/* Check whether a number is perfect or not? Perfect numbers are those whose sum of
divisors is equal to that number. For example: 6, 28*/

#include <iostream>
using namespace std;
int main() {
	long long int number, sum = 0, c;

	cout << "\n\n PERFECT NUMBER:\n";
	cout << "-----------------------------------\n";
	cout << " Input a number: ";
	while (!(cin >> number) || number < 0)
	{
		cout << "ERROR! Number is invalid.\nEnter a number again.";
		cin.clear();
		cin.ignore(123, '\n');
	}
	for (c = 1; c <= (number / 2); c++)
	{
		if (number % c == 0)
			sum += c;
	}
	if (sum == number)
		cout << endl << number << " is a Perfect Number.\n";
	else
		cout << endl << number << " is not a Perfect Number.\n";
}