#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream file1;
	float sum = 0, total = 0, avg, num;
	file1.open("no.txt");
	if (!file1)
	{
		cout << "Error opening file." << endl;
	}
	else
	{
		while (file1 >> num)
		{
			sum += num;
			cout << "Number:" << num << endl;
			total++;
		}
		avg = sum / total;
		cout << "Total No of Numbers:" << total << endl;
		cout << "Sum of numbers:" << sum << endl;
		cout << "Average of numbers:" << avg << endl;
		
		
	}
	file1.close();
	cout << "File closed. Program end." << endl;
}