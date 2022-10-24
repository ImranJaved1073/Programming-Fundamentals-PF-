#include <iostream>
using namespace std;
int main()
{
	int eggs, dozen, extra;
	cout << "How many eggs you have bought: ";
	cin >> eggs;
	dozen = eggs / 12;
	extra = eggs % 12;
	if (extra == 0)
		cout << "You have bought " << dozen << " dozen eggs.";
	else
		cout << "You have bought " << dozen << " dozen and " << extra << " extra eggs.";
}