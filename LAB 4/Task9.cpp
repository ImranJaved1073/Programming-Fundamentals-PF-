#include <iostream>
using namespace std;
int main()
{
	int first, second, result=0;
	char oprator;
	cout << "Enter any operator(+,-,*,/).";
	cin >> oprator;
	cout << "Enter first number:";
	cin >> first;
	cout << "Enter second number:";
	cin >> second;
	if (oprator == '+')
		result = first + second;
	else if (oprator == '-')
		result = first - second;
	else if (oprator == '*')
		result = first * second;
	else if (oprator == '/')
		result = first / second;
	else
		cout << "Invalid Operator.\n";
	cout << "Result is:" << result;
}