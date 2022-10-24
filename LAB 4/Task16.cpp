#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cout << "Enter a number:";
	cin >> x;
	cout << "Enter second number:";
	cin >> y;
	if (x > 10 && x < 20 || y < 10)
		cout << "True.";
	else
		cout << "False.";
	return 0;
}