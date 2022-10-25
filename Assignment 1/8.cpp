#include <iostream>
using namespace std;
int main()
{
	int n, space;
	cin >> n;
	cout << endl;
	int c = 1;
	for (int i = 0; i < n; i++) {
		for (int space = 1; space <= n - i; space++)
			cout << " ";
		for (int j = 0; j <= i; j++) {
			if (j == 0 || i == 0)
			{
				c = 1;
			}
			else {
				c = c * (i - j + 1) / j;
			}
			cout << c << " ";
		}
		cout << endl;

	}
	return 0;
}
