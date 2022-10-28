#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ifstream file1;
	float sum = 0, total = 0, avg, num;
	file1.open("steps.txt");
	if (!file1)
	{
		cout << "Error opening file." << endl;
	}
	else
	{
		file1 >> num;
		while (file1)
		{
			for (int m = 1; m <= 12; m++)
			{
				if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
				{
					for (int i = 1; i <= 31; i++)
					{
						sum += num;
						total++;
						file1 >> num;
					}
					cout << "\nTotal number of days for month " << m << "=" << total;
					avg = sum / total;
					cout << "\nAverage steps taken for month " << m << " is:" << avg << endl;
					total = 0, avg = 0, sum = 0;
				}
				else if (m == 4 || m == 6 || m == 9 || m == 11)
				{
					for (int i = 1; i <= 30; i++)
					{
						sum += num;
						total++;
						file1 >> num;
					}
					cout << "\nTotal number of days for month " << m << "=" << total;
					avg = sum / total;
					cout << "\nAverage steps taken for month " << m << " is:" << avg << endl;
					total = 0, avg = 0, sum = 0;
				}
				else if (m == 2)
				{
					for (int i = 1; i <= 28; i++)
					{
						sum += num;
						total++;
						file1 >> num;
					}
					cout << "\nTotal number of days for month " << m << "=" << total;
					avg = sum / total;
					cout << "\nAverage steps taken for month " << m << " is:" << avg << endl;
					total = 0, avg = 0, sum = 0;
				}
			}
		}


	}
	file1.close();
	cout << "\nFile closed. Program end." << endl;
}