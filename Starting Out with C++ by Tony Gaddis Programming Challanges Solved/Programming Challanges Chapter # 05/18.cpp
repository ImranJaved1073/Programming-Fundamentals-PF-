#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{
        ifstream inputFile;	//file stream object
	int number;		//declare variable
	inputFile.open("People.txt");	//open input file
	cout << "PRAIRIEVILLE POPULATION GROWTH\n" << "(each * represents 1000 people)\n";	//title description
	for (int y = 1900; y <= 2000; y += 20)
	{
		cout << y << ' ';      //display years
		inputFile >> number;
		for (int i = 0; i < number; i += 1000)	//increments of 1000
		{
			cout << '*';	//display astericks
		}
		cout << endl;
	}
	inputFile.close();		//close file
	system("pause");
	return 0;
}