//Natural number in reverse from n t0 1 while loop
#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter number=";
	while (!(cin >> n) || n < 1)
	{
		cout << "Enter a positive number.";
		cin.clear();
		cin.ignore(123, '\n');
	}
	cout << "Natural number from " << n << " to 1 in reverse.\n";
	while (n >= 1) {
		cout << n << " ";
		n--;
	}
}

//Natural number in reverse from n t0 1 for loop
/*#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter number=";
	while (!(cin >> n) || n < 1)
	{
		cout << "Enter a positive number.";
		cin.clear();
		cin.ignore(123, '\n');
	}
	cout << "Natural number from " << n << " to 1 in reverse.\n";
	for (; n >= 1;n--) {
		cout << n << " ";
	}
}*/