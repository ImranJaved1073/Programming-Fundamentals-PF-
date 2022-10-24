#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number:";
	cin >> num;
	if (num > 10 && num < 20)
		cout << "True.";
	else
		cout << "False.";
	return 0;
}