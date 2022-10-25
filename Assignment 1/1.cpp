//QUESTION
//Write a c++ program to validate a date. Input birth date of a student in form of day, month,
//year as integers. Check whether date is a valid date or not. Check leap year too.
#include <iostream>
using namespace std;
int main()
{
    int dd, mm, yy;
   	char a;
    cout << "Enter Day of Birth: ";
    cin >> dd;
    cout << "Enter month of birth: ";
    cin >> mm;
    cout << "Enter year of birth: ";
    cin >> yy;

    //If condition for check year
    if (yy >= 0001 && yy <= 9999)
    {
        if ((yy % 4 == 0 && yy % 400 == 0 || yy % 100 != 0) && (yy % 4 == 0 || yy % 400 == 0 && yy % 100 == 0))
            cout << "Year is valid and it is a Leap Year\n";
        else
            cout << "Year is Valid but not a Leap year" << endl;
        //If condition for check month
        if (mm >= 1 && mm <= 12)
{
            cout << "Month is valid." << "\n";
            // IF condition for check days
            if ((dd >= 1 && dd <= 31 )&& (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12))
                cout << "Date is valid." << "\n";

            else if ((dd >= 1 && dd <= 30 )&& (mm == 4 || mm == 6 || mm == 9 || mm == 11))
                cout << "Date is valid." << "\n";

            else if (dd >= 1 && dd <= 28 && mm == 2)
                cout << "Date is valid." << "\n";

            else if ((dd>=1 && dd<=29)&&(yy % 4 == 0 && yy % 400 == 0 || yy % 100 != 0) && (yy % 4 == 0 || yy % 400 == 0 && yy % 100 == 0))
                cout << "Date is valid " << "\n";

            else
                cout << "Day is invalid." << "\n";
        }
        else
        {
            cout << "Month is not valid." << "\n";
        }
    }
    else
    {
        cout << "Year is not valid.\n";
    }

    return 0;
}
