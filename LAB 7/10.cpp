/*Write a Program that Take two dates and tell the days between two dates. 
Do handle leap years.
day1 = 1 month1 = 3 year1 = 2021
day2 = 10 month2 = 5 year2 = 2026
1897 Days*/

#include <iostream>
using namespace std;

int main()
{
    int day1, month1, year1, day2, month2, year2, days=0;
    cout << "Enter day1: ";
    cin >> day1;
    cout << "Enter month1: ";
    cin >> month1;
    cout << "Enter year1: ";
    cin >> year1;
    cout << "Enter day2: ";
    cin >> day2;
    cout << "Enter month2: ";
    cin >> month2;
    cout << "Enter year2: ";
    cin >> year2;
    while (year1 != year2)
    {
        if (year1 % 4 == 0)
        {
            days = days + 366;
        }
        else
        {
            days = days + 365;
        }
        year1++;
    }
    while (month1 != month2)
    {
        if (month1 == 1 || month1 == 3 || month1 == 5 || month1 == 7 || month1 == 8 || month1 == 10 || month1 == 12)
        {
            days = days + 31;
        }
        else if (month1 == 4 || month1 == 6 || month1 == 9 || month1 == 11)
        {
            days = days + 30;
        }
        else if (month1 == 2)
        {
            if (year1 % 4 == 0)
            {
                days = days + 29;
            }
            else
            {
                days = days + 28;
            }
        }
        month1++;
    }
    while (day1 != day2)
    {
        days++;
        day1++;
    }
    cout << days << " Days";
    
}