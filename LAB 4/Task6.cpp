#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter the number of day from 1 to 7.";
	cin >> x;
	if (x == 1)
		cout << "1st day is monday.";
	else if (x == 2)
		cout << "2nd day is Tuesday.";
	else if (x == 3)
		cout << "3rd day is Wednesday.";
	else if (x == 4)
		cout << "4th day is Thursday.";
	else if (x == 5)
		cout << "5th day is Friday.";
	else if (x == 6)
		cout << "6th day is Saturday.";
	else if (x == 7)
		cout << "7th day is Sunday.";
	else
		cout << "Invalid number!";
}