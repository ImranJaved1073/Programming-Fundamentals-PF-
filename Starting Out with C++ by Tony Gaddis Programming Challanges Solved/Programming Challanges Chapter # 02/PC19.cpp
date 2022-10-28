#include <iostream>
using namespace std;

int main()
{
	int NewYorkHighTemp = 85,
		DenverHighTemp = 88,
		PhoenixHighTemp = 106;
	double pctRise = .02;


	cout << "Here are the new average high July temperatures \n"
		<< "if current temperatures rise by 2 percent: \n\n";
	cout << "New York  " << NewYorkHighTemp * (1 + pctRise) << endl;
	cout << "Denver    " << DenverHighTemp * (1 + pctRise) << endl;;
	cout << "Phoenix  " << PhoenixHighTemp * (1 + pctRise) << endl;;

	return 0;
}
