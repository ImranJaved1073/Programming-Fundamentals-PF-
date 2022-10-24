#include <iostream>
using namespace std;
int main()
{
	int a,b,x,y;
	cout << "Enter 1st number:";
	cin >> a;
	cout << "Enter 2nd number:";
	cin >> b;
	x = (a + b) * (a + b);
	y = (a * a) + (2 * a * b) + (b * b);
	if (x == y)
		cout << "Proved:(a + b)^2 = a^2 + 2ab + b^2.";
	return 0;
}