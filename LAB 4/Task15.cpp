#include <iostream>
using namespace std;
int main()
{
	int a, b, temp;
	cout << "Enter 1st number:";
	cin >> a;
	cout << "Enter 2nd number:";
	cin >> b;
	cout << a << " " << b << endl;
	temp = a;
	a = b;
	b = temp;
	cout << "After Swapping: ";
	cout << a << " " << b << endl;
}