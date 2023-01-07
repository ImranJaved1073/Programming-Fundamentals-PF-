#include <iostream>
using namespace std;
int main()
{
    char x;
    cout << "Enter any english alphabet: ";
    cin >> x;
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        cout << "The alphabet is vowel" << endl;
    else
        cout << "The alphabet is consonent";
    return 0;
}