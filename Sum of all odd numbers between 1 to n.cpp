//sum of odd numbers b/w 1 to n while loop
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
	cout << "First " << n << " odd numbers.\n";
	while (i <= n)
	{
		cout << i << " ";
		sum += i;
		i += 2;
	}
	cout << "\n\nSum of odd numbers between 1 & " << n << " = " << sum << endl;

	return 0;
}

//sum of odd numbers b/w 1 to n for loop
/*#include <iostream>
using namespace std;
int main() {
	int n ,sum = 0;
	cout << "Enter number=";
	while (!(cin >> n) || n < 1)
	{
		cout << "Enter a positive number.";
		cin.clear();
		cin.ignore(123, '\n');
	}
	cout << "First " << n << " odd numbers.\n";
	for (int i = 1; i <= n;i=i+2) 
	{
		cout << i << " ";
		sum += i;
	}
	cout << "\n\nSum of odd numbers between 1 & " << n << " = " << sum << endl;

	return 0;
}*/
