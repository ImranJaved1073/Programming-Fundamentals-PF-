#include <iostream>
using namespace std;
int main()
{
	int i, j, n;
	cout << "Enter Rows:";
	cin >> n;
	for (i = 1; i <= n / 2; i++)
	{
		for (j = i; j <= n / 2; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (i = 1; i <= n / 2; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

