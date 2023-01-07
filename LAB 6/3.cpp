#include <iostream>
#include <string>
using namespace std;
int main()
{
    int sum = 0, rem;
    int a, b, decimal_Sum, decimal_Product;
    cin >> a;
    cin >> b;
    decimal_Sum = a + b;
    decimal_Product = a * b;

    int octal_Sum = 0, place_Value = 1;
    while (decimal_Sum != 0)
    {
        rem = decimal_Sum % 8;
        octal_Sum += rem * place_Value;
        decimal_Sum /= 8;
        place_Value *= 10;
    }

    string hexaDecimal_Product;
    while (decimal_Product != 0)
    {
        rem = decimal_Product % 16;
        char hexaDigit = (rem <= 9 && rem >= 0) ? rem + '0' : rem - 10 + 'A';
        hexaDecimal_Product = hexaDigit + hexaDecimal_Product;
        decimal_Product /= 16;
    }

    cout << "Sum in DECIMAL : " << a + b << endl;
    cout << "Sum in OCTAL : " << octal_Sum << endl;

    cout << "Product in DECIMAL : " << a * b << endl;
    cout << "Product in HEXADECIMAL: " << hexaDecimal_Product;

    return 0;
}