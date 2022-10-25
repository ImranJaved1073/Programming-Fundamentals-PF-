//QUESTION
/*Get two numbers from user N1 , N2 and print all perfect numbers between N1 and
N2*/
#include <iostream>
using namespace std;
int main() {
	int number, num, sum = 0, c;

	cout << "\n\n PERFECT NUMBERS:\n";
	cout << "-----------------------------------\n";
	cout << "Enter first number =";
	cin >> num;
	cout << "Enter last number =";
	cin >> number;
	while (number < num)
	{
		cout << "ERROR! Number is invalid.Last number must be greater than first"
			<< "\nEnter a number again.";
		cin >> number;
	}
	cout << "Perfect numbers between " << num << " and " << number << " are as below\n ";
	for (int n = num; n <= number; n++)
	{
		sum = 0;
		for (c = 1; c <= (n / 2); c++)
		{
			if (n % c == 0)
			{
				sum += c;
			}
		}
		if (sum == n)
			cout << n << endl;

	}
}