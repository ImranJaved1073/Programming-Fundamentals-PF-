#include <iostream>
using namespace std;
int main()
{
	int first,second;
	cout << "Enter first number:";
	cin >> first;
	cout << "Enter second number:";
	cin >> second;
	if (first % second == 0)
		cout << "First is divisible to second.";
	else
		cout << "First is not divisible to second.";
}