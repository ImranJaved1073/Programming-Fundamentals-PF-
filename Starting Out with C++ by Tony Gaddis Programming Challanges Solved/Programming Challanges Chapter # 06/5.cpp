#include <iostream>
#include <cmath>    // for pow() function
using namespace std;

const double g = 9.8; 

double fallingDistance(double);

int main()
{
	double d;

	for (int t = 1; t <= 10; t++)
    {
        d = fallingDistance(t);        
        cout << t << " seconds =  "<< d << " meters"<< endl;
    }
	
  	return 0;
}

double fallingDistance(double falling_time)
{
    return (0.5) * g * pow(falling_time, 2);
}