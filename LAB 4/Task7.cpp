#include <iostream>
using namespace std;
int main()
{
	char c;
	cout << "Enter a lowercase alphabet:";
	cin >> c;
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
		cout << "Uppercase Alphabet:" << c;
	}
	else
		cout << "Not a lowercase alphabet.";
}