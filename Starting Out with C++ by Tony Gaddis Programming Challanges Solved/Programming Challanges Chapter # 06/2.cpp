// Chapter 6, Programming Challenge 2
#include <iostream>
#include <string>
using namespace std;
// Write the prototypes for the getLength,
// getWidth, getArea, and displayData
// functions here.
double inputValidate(double);
double getLength(double);
double getWidth(double);
double getArea(double, double);
void displayData(double, double, double);

int main()
{
    double length, // The rectangle's length
        width,     // The rectangle's width
        area;      // The rectangle's area

    // Get the rectangle's length.
    length = getLength(length);

    // Get the rectangle's width.
    width = getWidth(width);

    // Get the rectangle's area.
    area = getArea(length, width);

    // Display the rectangle's data.
    displayData(length, width, area);

    return 0;
}

double getLength(double num)
{
    cout << "Enter rectangle's length: ";
    num = inputValidate(num);
    return num;
}

double getWidth(double num)
{
    cout << "Enter rectangle's width: ";
    num = inputValidate(num);
    return num;
}

double getArea(double length, double width)
{
    return length * width;
}
void displayData(double l, double w, double a)
{
    cout << "Length = " << l << endl;
    cout << "Width  = " << w << endl;
    cout << "Area   = " << a << endl;
}
double inputValidate(double num)
{
    while (!(cin >> num))
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(1200, '\n');
    }
    return num;
}