#include <iostream>
using namespace std;
int main()
{
    int x, y;
    char op;

    while (op != 'q' && op != 'Q') {
        do
        {
            cout << "\n___________________________________\n";
            cout << "*********************************\n";
            cout << "\nEnter [c/C] for Circle: \n";
            cout << "Enter [s/S] for Square: \n";
            cout << "Enter [t/T] for Triangle: \n";
            cout << "Enter [r/R] for Rectangle: \n";
            cout << "Enter [Q/q] for quit:\n";
            cout << "___________________________________\n";
            cout << "*********************************\n";
            cin >> op;
        } while (op != 'c' && op != 'r' && op != 's' && op != 't' && op != 'C' && op != 'R' && op != 'S' && op != 'T' && op != 'q' && op != 'Q');
        if (op == 'c' || op == 'C')
        {
            float r;
            float pi = 22.0 / 7;
            cout << "Enter radius of circle: ";
            cin >> r;
            float area = pi * r * r;
            cout << "Area of Circle is:" << area;
        }

        else if (op == 's' || op == 'S')
        {
            float l;
            cout << "Enter length of Square: ";
            cin >> l;
            float area_of_square = l * l;
            cout << "Area of Square is:" << area_of_square;
        }

        else if (op == 't' || op == 'T')
        {
            float l, b;
            cout << "Enter length of triangle: ";
            cin >> l;
            cout << "Enter width of triangle: ";
            cin >> b;
            float area_of_triangle = (l * b) / 2;
            cout << "Area of Triangle is:" << area_of_triangle;
        }

        else if (op == 'r' || op == 'R')
        {
            float l, b;
            cout << "Enter length of rectangle: ";
            cin >> l;
            cout << "Enter width of rectangle: ";
            cin >> b;
            float area_of_rectangle = l * b;
            cout << "Area of Rectangle is:" << area_of_rectangle;
        }
    }

    return 0;
}

















