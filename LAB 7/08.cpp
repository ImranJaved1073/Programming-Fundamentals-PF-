#include <iostream>
using namespace std;
int main()
{
    char alphabet;
    cin >> alphabet;
    switch (alphabet)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "It is vowel";
        break;
    default:
        cout << "It is consonent";
    }
}