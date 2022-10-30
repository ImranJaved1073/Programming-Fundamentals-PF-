
// BSEF21M033
// IMRAN JAVED
// Chapter # 06 Programming Challange 22

#include <iostream>
using namespace std;

bool isPrime(int);

int main()
{
    int number;

    cout << "Enter a number: ";
    while (!(cin >> number) || number < 0)
    {
        cout << "Invalid!Number must be greater than 0.\n";
        cin.clear();
        cin.ignore(222, '\n');
    }
    cout << "Your number is ";
    if (isPrime(number))
    {
        cout << "PRIME.";
    }
    else
        cout << "NOT PRIME.";

} // END int main()

bool isPrime(int number)
{
    int isPrime = 0;

    for (int i = 1; i <= (number / 2); i++)
    {
        if (number % i == 0)
            isPrime++;
    }
    if (isPrime == 1)
    {
        return 1;
    }
    else
        return 0;
}
