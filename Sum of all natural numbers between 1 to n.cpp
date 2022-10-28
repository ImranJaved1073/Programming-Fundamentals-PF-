//sum of natural numbers from 1 to n while loop
#include <iostream>
using namespace std;
int main() {
	int n, i = 1, sum = 0;
	cout << "Enter number=";
	while (!(cin >> n) || n < 1)
	{
		cout << "Enter a positive number.";
		cin.clear();
		cin.ignore(123, '\n');
	}
	cout << "First " << n << " natural numbers.\n";
	while (i <= n)
	{
		cout << i << " ";
		sum += i;
		i++;
	}
	cout << "\n\nSum of first " << n << " natural numbers = " << sum << endl;

	return 0;
}

//sum of natural numbers from 1 to n for loop
/*#include <iostream>
using namespace std;
int main() {
	int n,sum = 0;
	cout << "Enter number=";
	while (!(cin >> n) || n < 1)
	{
		cout << "Enter a positive number.";
		cin.clear();
		cin.ignore(123, '\n');
	}
	cout << "First " << n << " natural numbers.\n";
	for (int i = 1; i <= n;i++)
	{
		cout << i << " ";
		sum += i;
	}
	cout << "\n\nSum of first " << n << " natural numbers = " << sum << endl;

	return 0;
}*/