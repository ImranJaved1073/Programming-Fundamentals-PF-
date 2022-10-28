#include <iostream>
using namespace std;

// named constant to give mnemonic name to "magic number"
const float SqFtPerGal = 340;

// the function main() is always the entry point of the application
int main()
{
	float length, width, area, paint; // to hold user values and results

	// prompt user for length and width of wall
	length=100,width=6;

	// calculate area and amount of paint needed
	area = length * width;

	paint = area / SqFtPerGal;

	// output results with reasonable text
	cout << "You need " << paint << " gallons of paint to cover "
		<< area << " square feet of wall." << endl;

	// program stops executing when it returns from main(), 0 means O.K.
	return 0;

}
