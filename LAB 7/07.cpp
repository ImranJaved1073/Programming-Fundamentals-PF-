#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number = "; 
    cin >> number;
    cout << "Table of " << number << " is: \n";
    for (int i = 1; i <= 10; i++)
        cout << number << " * " << i << " =  " << number * i << "\n";
    return 0;
}