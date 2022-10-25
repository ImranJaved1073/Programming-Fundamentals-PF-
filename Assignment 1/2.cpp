//QUESTION
/*Write a C++ program to convert temperature from one scale to another. Ask user which
conversion user wants. Then according to user choice, convert Celsius to Fahrenheit and
Fahrenheit to Celsius.*/
#include <iostream>
using namespace std;

int main()
{
    int c, f;
    cout<<"___________________________________\n";
	cout<<"*********************************\n";
    cout << "[1] Fahrenheit to Celcius:\n";
    cout << "[2] Celcius to Fahrenheit:\n";
    cout<<"___________________________________\n";
    cout<<"*********************************\n";
    cout << "Enter the choice :\n";
    int ch;
    cin >> ch;
    if (ch == 1)
    {
        cout << "Enter fahrenheit temperature:";
        cin >> f;
        c = 5 * (f - 32) / 9;
        cout <<"Temperature in celcius = "<< c;
    }
    else if (ch == 2)
    {
        cout << "Enter celcius temperature :";
        cin >> c;
        f = ( (9/5) *c) + 32;
        cout <<"Temperature in fahrenheit = "<< f;
    }
    else 
        cout<<"Choice is invalid";
    return 0;
}
