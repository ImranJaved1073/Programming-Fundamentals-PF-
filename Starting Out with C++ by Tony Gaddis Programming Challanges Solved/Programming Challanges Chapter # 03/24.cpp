#include <iostream>
using namespace std;
int main()
{
	float R, E, S, V;
	cout << "Enter the length of the row, in feet: ";
	cin >> R;
	cout << "Enter amount of space used by an end-post assembly: ";
	cin >> E;
	cout << "Enter amount of space between vines: ";
	cin >> S;

	//2. Process
	V = (R - (2 * E)) / S;

		//3. Output
		cout << "Number of grapevines that will fit in a row = " << V;
}
