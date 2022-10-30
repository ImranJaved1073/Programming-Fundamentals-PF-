#include <iostream>
#include <fstream>

using namespace std;

bool isPrime(int); // prototype

int main()
{
    // File Open
    ofstream outputFile;
    outputFile.open("primeNumber.txt");

    // File check
    if (outputFile)
    {
        for (int i = 1; i <= 100; i++)
        {
            if (isPrime(i))
                outputFile << i << endl;
        }

        // Close
        outputFile.close();
        cout << "Numbers written to file." << endl;
    }
    else
    {
        cout << "Error opening the file.\n";
    }

} // END main

bool isPrime(int number)
{
    int prime = 0;

    for (int i = 1; i <= (number / 2); i++)
    {
        if (number % i == 0)
            prime++;
    }
    if (prime == 1)
        return 1;
    else
        return 0;
}
