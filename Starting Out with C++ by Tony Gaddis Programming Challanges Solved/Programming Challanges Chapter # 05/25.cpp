#include <iostream>
#include <fstream>
#include <string>
using namespace std; 
int main()
{
	ifstream namefile;
	string student, first, last;
	namefile.open("LineUp.txt");
	if (namefile)
	{
		namefile >> student;
		first = last = student;
		while (namefile >> student)
		{
			if (student < first)
				first = student;

			if (student > last)
				last = student;
		}
		namefile.close();
	}
	else
	{
		cout << "Error opening file." << endl;
	}	
	
	cout << "First student in line:" << first << endl;
	cout << "Last student in line:" << last << endl;

}