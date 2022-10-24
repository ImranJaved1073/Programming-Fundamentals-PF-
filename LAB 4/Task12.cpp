#include <iostream>
using namespace std;
int main()
{
	int hh, mm, ss, time;
	cout << "Enter time in seconds:";
	cin >> time;
	hh = time / 3600;
	time = time % 3600;
	mm = time / 60;
	time = time % 60;
	ss = time;
	cout << hh << ":" << mm << ":" << ss;
}